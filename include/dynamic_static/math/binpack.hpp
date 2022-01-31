
/*
==========================================
  Copyright (c) 2018-2021 Dynamic_Static
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/math/glm.hpp"

#include <algorithm>
#include <memory>
#include <vector>

namespace dst {
namespace math {

struct Rectangle
{
    int top() const { return y; }
    int left() const { return x; }
    int right() const { return x + width; }
    int bottom() const { return y + height; }
    int area() const { return width * height; }

    int x { };
    int y { };
    int width { };
    int height { };
};

template <typename T>
struct BinPackEntry
{
    Rectangle rectangle { };
    int page { };
    T data { };
};

struct BinPackInfo
{
    int width { 1024 };
    int height { 1024 };
    int pageCount { 1 };
    int padding { 2 };
};

namespace detail {

class BinPackNode final
{
public:
    ~BinPackNode()
    {
        delete pLeft;
        delete pRight;
        delete pOverflow;
    }

    template <typename T>
    BinPackNode* insert(BinPackEntry<T>& entry)
    {
        BinPackNode* pNode = nullptr;
        if (pLeft && pRight) {
            bool insertLeft = pLeft->rectangle.area() < pRight->rectangle.area();
            pNode = insertLeft ? pLeft->insert(entry) : pRight->insert(entry);
            if (!pNode) {
                pNode = insertLeft ? pRight->insert(entry) : pLeft->insert(entry);
            }
        } else
        if (!occupied && entry.rectangle.width <= rectangle.width && entry.rectangle.height <= rectangle.height) {
            assert(pLeft == nullptr && pRight == nullptr);
            pLeft = new BinPackNode;
            pRight = new BinPackNode;
            // TODO : Split policy...
            pLeft->rectangle.x = rectangle.left();
            pLeft->rectangle.y = rectangle.top() + entry.rectangle.height;
            pLeft->rectangle.width = rectangle.width;
            pLeft->rectangle.height = rectangle.height - entry.rectangle.height;

            pRight->rectangle.x = rectangle.left() + entry.rectangle.width;
            pRight->rectangle.y = rectangle.top();
            pRight->rectangle.width = rectangle.width - entry.rectangle.width;
            pRight->rectangle.height = entry.rectangle.height;

            entry.rectangle.x = rectangle.x;
            entry.rectangle.y = rectangle.y;
            occupied = true;
            pNode = this;
        }
        return pNode;
    }

    Rectangle rectangle { };
    BinPackNode* pLeft { nullptr };
    BinPackNode* pRight { nullptr };
    BinPackNode* pOverflow { nullptr };
    bool occupied { false };
};

} // namespace detail

template <typename T>
inline void bin_pack(size_t binPackEntryCount, BinPackEntry<T>* pBinPackEntries, BinPackInfo* pBinPackInfo)
{
    if (binPackEntryCount && pBinPackEntries && pBinPackInfo) {
        // TODO : Sort policy...
        std::sort(
            pBinPackEntries, pBinPackEntries + binPackEntryCount,
            [](const BinPackEntry<T>& lhs, const BinPackEntry<T>& rhs)
            {
                if (lhs.rectangle.height == rhs.rectangle.height) {
                    return lhs.rectangle.width > rhs.rectangle.width;
                } else {
                    return lhs.rectangle.height > rhs.rectangle.height;
                }
            }
        );

        // Apply padding
        auto padding = pBinPackInfo->padding * 2;
        for (size_t i = 0; i < binPackEntryCount; ++i) {
            pBinPackEntries[i].rectangle.width += padding;
            pBinPackEntries[i].rectangle.height += padding;
        }

        // Create root node and insert each entry into the tree
        auto pRoot = new detail::BinPackNode;
        pRoot->rectangle.width = pBinPackInfo->width;
        pRoot->rectangle.height = pBinPackInfo->height;
        for (size_t i = 0; i < binPackEntryCount; ++i) {
            auto& entry = pBinPackEntries[i];
            if (!pRoot->insert(entry)) {
                int page = 0;
                auto pNode = pRoot;
                while (pNode->pOverflow) {
                    pNode = pNode->pOverflow;
                    ++page;
                }
                if (!pNode->insert(entry)) {
                    // TODO : Auto grow to limit...
                    ++page;
                    pNode->pOverflow = new detail::BinPackNode;
                    pNode->pOverflow->rectangle.width = pBinPackInfo->width;
                    pNode->pOverflow->rectangle.height = pBinPackInfo->height;
                    pNode->pOverflow->insert(entry);
                }
                entry.page = page;
            }
        }
        delete pRoot;

        // Remove padding
        for (size_t i = 0; i < binPackEntryCount; ++i) {
            pBinPackEntries[i].rectangle.width -= padding;
            pBinPackEntries[i].rectangle.height -= padding;
        }
    }
}

} // namespace math
} // namespace dst
