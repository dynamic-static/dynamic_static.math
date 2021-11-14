
/*
==========================================
  Copyright (c) 2016-2021 dynamic_static
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/math/glm.hpp"

namespace dst {
namespace math {

template <typename ColorType = glm::vec4>
struct Color
{
    // FROM : https://docs.microsoft.com/en-us/previous-versions/windows/xna/ff433752(v%3dxnagamestudio.41)

    inline static const ColorType White                { 1.0f,       1.0f,       1.0f,       1.0f }; //!< Constant color White { 1.0f, 1.0f, 1.0f, 1.0f }
    inline static const ColorType Black                { 0.0f,       0.0f,       0.0f,       1.0f }; //!< Constant color Black { 0.0f, 0.0f, 0.0f, 1.0f }
    inline static const ColorType Transparent          { 0.0f,       0.0f,       0.0f,       0.0f }; //!< Constant color Transparent { 0.0f, 0.0f, 0.0f, 0.0f }
    inline static const ColorType AliceBlue            { 0.941177f,  0.972549f,  1.0f,       1.0f }; //!< Constant color AliceBlue { 0.941177f, 0.972549f, 1.0f, 1.0f }
    inline static const ColorType AntiqueWhite         { 0.980392f,  0.921569f,  0.843137f,  1.0f }; //!< Constant color AntiqueWhite { 0.980392f, 0.921569f, 0.843137f, 1.0f}
    inline static const ColorType Aqua                 { 0.0f,       1.0f,       1.0f,       1.0f }; //!< Constant color Aqua { 0.0f, 1.0f, 1.0f, 1.0f }
    inline static const ColorType Aquamarine           { 0.498039f,  1.0f,       0.831373f,  1.0f }; //!< Constant color Aquamarine { 0.498039f, 1.0f, 0.831373f, 1.0f }
    inline static const ColorType Azure                { 0.941177f,  1.0f,       1.0f,       1.0f }; //!< Constant color Azure { 0.941177f, 1.0f, 1.0f, 1.0f }
    inline static const ColorType Beige                { 0.960784f,  0.960784f,  0.862745f,  1.0f }; //!< Constant color Beige { 0.960784f, 0.960784f, 0.862745f, 1.0f }
    inline static const ColorType Bisque               { 1.0f,       0.894118f,  0.768628f,  1.0f }; //!< Constant color Bisque { 1.0f, 0.894118f, 0.768628f, 1.0f }
    inline static const ColorType BlanchedAlmond       { 1.0f,       0.921569f,  0.803922f,  1.0f }; //!< Constant color BlanchedAlmond { 1.0f, 0.921569f, 0.803922f, 1.0f }
    inline static const ColorType Blue                 { 0.0f,       0.0f,       1.0f,       1.0f }; //!< Constant color Blue { 0.0f, 0.0f, 1.0f, 1.0f }
    inline static const ColorType BlueViolet           { 0.541176f,  0.168627f,  0.886275f,  1.0f }; //!< Constant color BlueViolet { 0.541176f, 0.168627f, 0.886275f, 1.0f }
    inline static const ColorType Brown                { 0.647059f,  0.164706f,  0.164706f,  1.0f }; //!< Constant color Brown { 0.647059f, 0.164706f, 0.164706f, 1.0f }
    inline static const ColorType BurlyWood            { 0.870588f,  0.721569f,  0.529412f,  1.0f }; //!< Constant color BurlyWood { 0.870588f, 0.721569f, 0.529412f, 1.0f }
    inline static const ColorType CadetBlue            { 0.372549f,  0.619608f,  0.627451f,  1.0f }; //!< Constant color CadetBlue { 0.372549f, 0.619608f, 0.627451f, 1.0f }
    inline static const ColorType Chartreuse           { 0.498039f,  1.0f,       0.0f,       1.0f }; //!< Constant color Chartreuse { 0.498039f, 1.0f, 0.0f, 1.0f }
    inline static const ColorType Chocolate            { 0.823529f,  0.411765f,  0.117647f,  1.0f }; //!< Constant color Chocolate { 0.823529f, 0.411765f, 0.117647f, 1.0f }
    inline static const ColorType Coral                { 1.0f,       0.498039f,  0.313726f,  1.0f }; //!< Constant color Coral { 1.0f, 0.498039f, 0.313726f, 1.0f }
    inline static const ColorType CornflowerBlue       { 0.392157f,  0.584314f,  0.929412f,  1.0f }; //!< Constant color CornflowerBlue { 0.392157f, 0.584314f, 0.929412f, 1.0f}
    inline static const ColorType Cornsilk             { 1.0f,       0.972549f,  0.862745f,  1.0f }; //!< Constant color Cornsilk { 1.0f, 0.972549f, 0.862745f, 1.0f }
    inline static const ColorType Crimson              { 0.862745f,  0.0784314f, 0.235294f,  1.0f }; //!< Constant color Crimson { 0.862745f, 0.0784314f, 0.235294f, 1.0f }
    inline static const ColorType Cyan                 { 0.0f,       1.0f,       1.0f,       1.0f }; //!< Constant color Cyan { 0.0f, 1.0f, 1.0f, 1.0f }
    inline static const ColorType DarkBlue             { 0.0f,       0.0f,       0.545098f,  1.0f }; //!< Constant color DarkBlue { 0.0f, 0.0f, 0.545098f, 1.0f }
    inline static const ColorType DarkCyan             { 0.0f,       0.545098f,  0.545098f,  1.0f }; //!< Constant color DarkCyan { 0.0f, 0.545098f, 0.545098f, 1.0f }
    inline static const ColorType DarkGoldenrod        { 0.721569f,  0.52549f,   0.0431373f, 1.0f }; //!< Constant color DarkGoldenrod { 0.721569f, 0.52549f, 0.0431373f, 1.0f}
    inline static const ColorType DarkGray             { 0.662745f,  0.662745f,  0.662745f,  1.0f }; //!< Constant color DarkGray { 0.662745f, 0.662745f, 0.662745f, 1.0f }
    inline static const ColorType DarkGreen            { 0.0f,       0.392157f,  0.0f,       1.0f }; //!< Constant color DarkGreen { 0.0f, 0.392157f, 0.0f, 1.0f }
    inline static const ColorType DarkKhaki            { 0.741176f,  0.717647f,  0.419608f,  1.0f }; //!< Constant color DarkKhaki { 0.741176f, 0.717647f, 0.419608f, 1.0f }
    inline static const ColorType DarkMagenta          { 0.545098f,  0.0f,       0.545098f,  1.0f }; //!< Constant color DarkMagenta { 0.545098f, 0.0f, 0.545098f, 1.0f }
    inline static const ColorType DarkOliveGreen       { 0.333333f,  0.419608f,  0.184314f,  1.0f }; //!< Constant color DarkOliveGreen { 0.333333f, 0.419608f, 0.184314f, 1.0f}
    inline static const ColorType DarkOrange           { 1.0f,       0.54902f,   0.0f,       1.0f }; //!< Constant color DarkOrange { 1.0f, 0.54902f, 0.0f, 1.0f }
    inline static const ColorType DarkOrchid           { 0.6f,       0.196078f,  0.8f,       1.0f }; //!< Constant color DarkOrchid { 0.6f, 0.196078f, 0.8f, 1.0f }
    inline static const ColorType DarkRed              { 0.545098f,  0.0f,       0.0f,       1.0f }; //!< Constant color DarkRed { 0.545098f, 0.0f, 0.0f, 1.0f }
    inline static const ColorType DarkSalmon           { 0.913726f,  0.588235f,  0.478431f,  1.0f }; //!< Constant color DarkSalmon { 0.913726f, 0.588235f, 0.478431f, 1.0f }
    inline static const ColorType DarkSeaGreen         { 0.560784f,  0.737255f,  0.545098f,  1.0f }; //!< Constant color DarkSeaGreen { 0.560784f, 0.737255f, 0.545098f, 1.0f}
    inline static const ColorType DarkSlateBlue        { 0.282353f,  0.239216f,  0.545098f,  1.0f }; //!< Constant color DarkSlateBlue { 0.282353f, 0.239216f, 0.545098f, 1.0f}
    inline static const ColorType DarkSlateGray        { 0.184314f,  0.309804f,  0.309804f,  1.0f }; //!< Constant color DarkSlateGray { 0.184314f, 0.309804f, 0.309804f, 1.0f}
    inline static const ColorType DarkTurquoise        { 0.0f,       0.807843f,  0.819608f,  1.0f }; //!< Constant color DarkTurquoise { 0.0f, 0.807843f, 0.819608f, 1.0f }
    inline static const ColorType DarkViolet           { 0.580392f,  0.0f,       0.827451f,  1.0f }; //!< Constant color DarkViolet { 0.580392f, 0.0f, 0.827451f, 1.0f }
    inline static const ColorType DeepPink             { 1.0f,       0.0784314f, 0.576471f,  1.0f }; //!< Constant color DeepPink { 1.0f, 0.0784314f, 0.576471f, 1.0f }
    inline static const ColorType DeepSkyBlue          { 0.0f,       0.74902f,   1.0f,       1.0f }; //!< Constant color DeepSkyBlue { 0.0f, 0.74902f, 1.0f, 1.0f }
    inline static const ColorType DimGray              { 0.411765f,  0.411765f,  0.411765f,  1.0f }; //!< Constant color DimGray { 0.411765f, 0.411765f, 0.411765f, 1.0f }
    inline static const ColorType DodgerBlue           { 0.117647f,  0.564706f,  1.0f,       1.0f }; //!< Constant color DodgerBlue { 0.117647f, 0.564706f, 1.0f, 1.0f }
    inline static const ColorType Firebrick            { 0.698039f,  0.133333f,  0.133333f,  1.0f }; //!< Constant color Firebrick { 0.698039f, 0.133333f, 0.133333f, 1.0f }
    inline static const ColorType FloralWhite          { 1.0f,       0.980392f,  0.941177f,  1.0f }; //!< Constant color FloralWhite { 1.0f, 0.980392f, 0.941177f, 1.0f }
    inline static const ColorType ForestGreen          { 0.133333f,  0.545098f,  0.133333f,  1.0f }; //!< Constant color ForestGreen { 0.133333f, 0.545098f, 0.133333f, 1.0f }
    inline static const ColorType Fuchsia              { 1.0f,       0.0f,       1.0f,       1.0f }; //!< Constant color Fuchsia { 1.0f, 0.0f, 1.0f, 1.0f }
    inline static const ColorType Gainsboro            { 0.862745f,  0.862745f,  0.862745f,  1.0f }; //!< Constant color Gainsboro { 0.862745f, 0.862745f, 0.862745f, 1.0f }
    inline static const ColorType GhostWhite           { 0.972549f,  0.972549f,  1.0f,       1.0f }; //!< Constant color GhostWhite { 0.972549f, 0.972549f, 1.0f, 1.0f }
    inline static const ColorType GearsBlue            { 0.2f,       0.2f,       1.0f,       1.0f }; //!< Constant color GearsBlue { 0.2f, 0.2f, 1.0f, 1.0f }
    inline static const ColorType GearsGreen           { 0.0f,       0.8f,       0.2f,       1.0f }; //!< Constant color GearsGreen { 0.0f, 0.8f, 0.2f, 1.0f }
    inline static const ColorType GearsRed             { 0.8f,       0.1f,       0.0f,       1.0f }; //!< Constant color GearsRed { 0.8f, 0.1f, 0.0f, 1.0f }
    inline static const ColorType Gold                 { 1.0f,       0.843137f,  0.0f,       1.0f }; //!< Constant color Gold { 1.0f, 0.843137f, 0.0f, 1.0f }
    inline static const ColorType Goldenrod            { 0.854902f,  0.647059f,  0.12549f,   1.0f }; //!< Constant color Goldenrod { 0.854902f, 0.647059f, 0.12549f, 1.0f }
    inline static const ColorType Gray                 { 0.501961f,  0.501961f,  0.501961f,  1.0f }; //!< Constant color Gray { 0.501961f, 0.501961f, 0.501961f, 1.0f }
    inline static const ColorType Green                { 0.0f,       1.0f,       0.0f,       1.0f }; //!< Constant color Green { 0.0f, 1.0f, 0.0f, 1.0f }
    inline static const ColorType GreenYellow          { 0.678431f,  1.0f,       0.184314f,  1.0f }; //!< Constant color GreenYellow { 0.678431f, 1.0f, 0.184314f, 1.0f }
    inline static const ColorType HalfGray             { 0.5f,       0.5f,       0.5f,       1.0f }; //!< Constant color HalfGray { 0.5f, 0.5f, 0.5f, 1.0f }
    inline static const ColorType Honeydew             { 0.941177f,  1.0f,       0.941177f,  1.0f }; //!< Constant color Honeydew { 0.941177f, 1.0f, 0.941177f, 1.0f }
    inline static const ColorType HotPink              { 1.0f,       0.411765f,  0.705882f,  1.0f }; //!< Constant color HotPink { 1.0f, 0.411765f, 0.705882f, 1.0f }
    inline static const ColorType IndianRed            { 0.803922f,  0.360784f,  0.360784f,  1.0f }; //!< Constant color IndianRed { 0.803922f, 0.360784f, 0.360784f, 1.0f }
    inline static const ColorType Indigo               { 0.294118f,  0.0f,       0.509804f,  1.0f }; //!< Constant color Indigo { 0.294118f, 0.0f, 0.509804f, 1.0f }
    inline static const ColorType Ivory                { 1.0f,       1.0f,       0.941177f,  1.0f }; //!< Constant color Ivory { 1.0f, 1.0f, 0.941177f, 1.0f }
    inline static const ColorType Khaki                { 0.941177f,  0.901961f,  0.54902f,   1.0f }; //!< Constant color Khaki { 0.941177f, 0.901961f, 0.54902f, 1.0f }
    inline static const ColorType Lavender             { 0.901961f,  0.901961f,  0.980392f,  1.0f }; //!< Constant color Lavender { 0.901961f, 0.901961f, 0.980392f, 1.0f }
    inline static const ColorType LavenderBlush        { 1.0f,       0.941177f,  0.960784f,  1.0f }; //!< Constant color LavenderBlush { 1.0f, 0.941177f, 0.960784f, 1.0f }
    inline static const ColorType LawnGreen            { 0.486275f,  0.988235f,  0.0f,       1.0f }; //!< Constant color LawnGreen { 0.486275f, 0.988235f, 0.0f, 1.0f }
    inline static const ColorType LemonChiffon         { 1.0f,       0.980392f,  0.803922f,  1.0f }; //!< Constant color LemonChiffon { 1.0f, 0.980392f, 0.803922f, 1.0f }
    inline static const ColorType LightBlue            { 0.678431f,  0.847059f,  0.901961f,  1.0f }; //!< Constant color LightBlue { 0.678431f, 0.847059f, 0.901961f, 1.0f }
    inline static const ColorType LightCoral           { 0.941177f,  0.501961f,  0.501961f,  1.0f }; //!< Constant color LightCoral { 0.941177f, 0.501961f, 0.501961f, 1.0f }
    inline static const ColorType LightCyan            { 0.878431f,  1.0f,       1.0f,       1.0f }; //!< Constant color LightCyan { 0.878431f, 1.0f, 1.0f, 1.0f }
    inline static const ColorType LightGoldenrodYellow { 0.980392f,  0.980392f,  0.823529f,  1.0f }; //!< Constant color LightGoldenrodYellow { 0.980392f, 0.980392f, 0.823529f,1.0f}
    inline static const ColorType LightGray            { 0.827451f,  0.827451f,  0.827451f,  1.0f }; //!< Constant color LightGray { 0.827451f, 0.827451f, 0.827451f, 1.0f }
    inline static const ColorType LightGreen           { 0.564706f,  0.933333f,  0.564706f,  1.0f }; //!< Constant color LightGreen { 0.564706f, 0.933333f, 0.564706f, 1.0f }
    inline static const ColorType LightPink            { 1.0f,       0.713726f,  0.756863f,  1.0f }; //!< Constant color LightPink { 1.0f, 0.713726f, 0.756863f, 1.0f }
    inline static const ColorType LightSalmon          { 1.0f,       0.627451f,  0.478431f,  1.0f }; //!< Constant color LightSalmon { 1.0f, 0.627451f, 0.478431f, 1.0f }
    inline static const ColorType LightSeaGreen        { 0.12549f,   0.698039f,  0.666667f,  1.0f }; //!< Constant color LightSeaGreen { 0.12549f, 0.698039f, 0.666667f, 1.0f}
    inline static const ColorType LightSkyBlue         { 0.529412f,  0.807843f,  0.980392f,  1.0f }; //!< Constant color LightSkyBlue { 0.529412f, 0.807843f, 0.980392f, 1.0f}
    inline static const ColorType LightSlateGray       { 0.466667f,  0.533333f,  0.6f,       1.0f }; //!< Constant color LightSlateGray { 0.466667f, 0.533333f, 0.6f, 1.0f }
    inline static const ColorType LightSteelBlue       { 0.690196f,  0.768628f,  0.870588f,  1.0f }; //!< Constant color LightSteelBlue { 0.690196f, 0.768628f, 0.870588f, 1.0f}
    inline static const ColorType LightYellow          { 1.0f,       1.0f,       0.878431f,  1.0f }; //!< Constant color LightYellow { 1.0f, 1.0f, 0.878431f, 1.0f }
    inline static const ColorType Lime                 { 0.0f,       1.0f,       0.0f,       1.0f }; //!< Constant color Lime { 0.0f, 1.0f, 0.0f, 1.0f }
    inline static const ColorType LimeGreen            { 0.196078f,  0.803922f,  0.196078f,  1.0f }; //!< Constant color LimeGreen { 0.196078f, 0.803922f, 0.196078f, 1.0f }
    inline static const ColorType Linen                { 0.980392f,  0.941177f,  0.901961f,  1.0f }; //!< Constant color Linen { 0.980392f, 0.941177f, 0.901961f, 1.0f }
    inline static const ColorType Magenta              { 1.0f,       0.0f,       1.0f,       1.0f }; //!< Constant color Magenta { 1.0f, 0.0f, 1.0f, 1.0f }
    inline static const ColorType Maroon               { 0.501961f,  0.0f,       0.0f,       1.0f }; //!< Constant color Maroon { 0.501961f, 0.0f, 0.0f, 1.0f }
    inline static const ColorType MediumAquamarine     { 0.4f,       0.803922f,  0.666667f,  1.0f }; //!< Constant color MediumAquamarine { 0.4f, 0.803922f, 0.666667f, 1.0f }
    inline static const ColorType MediumBlue           { 0.0f,       0.0f,       0.803922f,  1.0f }; //!< Constant color MediumBlue { 0.0f, 0.0f, 0.803922f, 1.0f }
    inline static const ColorType MediumOrchid         { 0.729412f,  0.333333f,  0.827451f,  1.0f }; //!< Constant color MediumOrchid { 0.729412f, 0.333333f, 0.827451f, 1.0f}
    inline static const ColorType MediumPurple         { 0.576471f,  0.439216f,  0.858824f,  1.0f }; //!< Constant color MediumPurple { 0.576471f, 0.439216f, 0.858824f, 1.0f}
    inline static const ColorType MediumSeaGreen       { 0.235294f,  0.701961f,  0.443137f,  1.0f }; //!< Constant color MediumSeaGreen { 0.235294f, 0.701961f, 0.443137f, 1.0f}
    inline static const ColorType MediumSlateBlue      { 0.482353f,  0.407843f,  0.933333f,  1.0f }; //!< Constant color MediumSlateBlue { 0.482353f, 0.407843f, 0.933333f, 1.0f}
    inline static const ColorType MediumSpringGreen    { 0.0f,       0.980392f,  0.603922f,  1.0f }; //!< Constant color MediumSpringGreen { 0.0f, 0.980392f, 0.603922f, 1.0f}
    inline static const ColorType MediumTurquoise      { 0.282353f,  0.819608f,  0.8f,       1.0f }; //!< Constant color MediumTurquoise { 0.282353f, 0.819608f, 0.8f, 1.0f }
    inline static const ColorType MediumVioletRed      { 0.780392f,  0.0823529f, 0.521569f,  1.0f }; //!< Constant color MediumVioletRed { 0.780392f, 0.0823529f, 0.521569f, 1.0f}
    inline static const ColorType MidnightBlue         { 0.0980392f, 0.0980392f, 0.439216f,  1.0f }; //!< Constant color MidnightBlue { 0.0980392f, 0.0980392f, 0.439216f, 1.0f}
    inline static const ColorType MintCream            { 0.960784f,  1.0f,       0.980392f,  1.0f }; //!< Constant color MintCream { 0.960784f, 1.0f, 0.980392f, 1.0f }
    inline static const ColorType MistyRose            { 1.0f,       0.894118f,  0.882353f,  1.0f }; //!< Constant color MistyRose { 1.0f, 0.894118f, 0.882353f, 1.0f }
    inline static const ColorType Moccasin             { 1.0f,       0.894118f,  0.709804f,  1.0f }; //!< Constant color Moccasin { 1.0f, 0.894118f, 0.709804f, 1.0f }
    inline static const ColorType NavajoWhite          { 1.0f,       0.870588f,  0.678431f,  1.0f }; //!< Constant color NavajoWhite { 1.0f, 0.870588f, 0.678431f, 1.0f }
    inline static const ColorType Navy                 { 0.0f,       0.0f,       0.501961f,  1.0f }; //!< Constant color Navy { 0.0f, 0.0f, 0.501961f, 1.0f }
    inline static const ColorType OldLace              { 0.992157f,  0.960784f,  0.901961f,  1.0f }; //!< Constant color OldLace { 0.992157f, 0.960784f, 0.901961f, 1.0f }
    inline static const ColorType Olive                { 0.501961f,  0.501961f,  0.0f,       1.0f }; //!< Constant color Olive { 0.501961f, 0.501961f, 0.0f, 1.0f }
    inline static const ColorType OliveDrab            { 0.419608f,  0.556863f,  0.137255f,  1.0f }; //!< Constant color OliveDrab { 0.419608f, 0.556863f, 0.137255f, 1.0f }
    inline static const ColorType Orange               { 1.0f,       0.647059f,  0.0f,       1.0f }; //!< Constant color Orange { 1.0f, 0.647059f, 0.0f, 1.0f }
    inline static const ColorType OrangeRed            { 1.0f,       0.270588f,  0.0f,       1.0f }; //!< Constant color OrangeRed { 1.0f, 0.270588f, 0.0f, 1.0f }
    inline static const ColorType Orchid               { 0.854902f,  0.439216f,  0.839216f,  1.0f }; //!< Constant color Orchid { 0.854902f, 0.439216f, 0.839216f, 1.0f }
    inline static const ColorType PaleGoldenrod        { 0.933333f,  0.909804f,  0.666667f,  1.0f }; //!< Constant color PaleGoldenrod { 0.933333f, 0.909804f, 0.666667f, 1.0f}
    inline static const ColorType PaleGreen            { 0.596078f,  0.984314f,  0.596078f,  1.0f }; //!< Constant color PaleGreen { 0.596078f, 0.984314f, 0.596078f, 1.0f }
    inline static const ColorType PaleTurquoise        { 0.686275f,  0.933333f,  0.933333f,  1.0f }; //!< Constant color PaleTurquoise { 0.686275f, 0.933333f, 0.933333f, 1.0f}
    inline static const ColorType PaleVioletRed        { 0.858824f,  0.439216f,  0.576471f,  1.0f }; //!< Constant color PaleVioletRed { 0.858824f, 0.439216f, 0.576471f, 1.0f}
    inline static const ColorType PapayaWhip           { 1.0f,       0.937255f,  0.835294f,  1.0f }; //!< Constant color PapayaWhip { 1.0f, 0.937255f, 0.835294f, 1.0f }
    inline static const ColorType PeachPuff            { 1.0f,       0.854902f,  0.72549f,   1.0f }; //!< Constant color PeachPuff { 1.0f, 0.854902f, 0.72549f, 1.0f }
    inline static const ColorType Peru                 { 0.803922f,  0.521569f,  0.247059f,  1.0f }; //!< Constant color Peru { 0.803922f, 0.521569f, 0.247059f, 1.0f }
    inline static const ColorType Pink                 { 1.0f,       0.752941f,  0.796079f,  1.0f }; //!< Constant color Pink { 1.0f, 0.752941f, 0.796079f, 1.0f }
    inline static const ColorType Plum                 { 0.866667f,  0.627451f,  0.866667f,  1.0f }; //!< Constant color Plum { 0.866667f, 0.627451f, 0.866667f, 1.0f }
    inline static const ColorType PowderBlue           { 0.690196f,  0.878431f,  0.901961f,  1.0f }; //!< Constant color PowderBlue { 0.690196f, 0.878431f, 0.901961f, 1.0f }
    inline static const ColorType Purple               { 0.501961f,  0.0f,       0.501961f,  1.0f }; //!< Constant color Purple { 0.501961f, 0.0f, 0.501961f, 1.0f }
    inline static const ColorType QuarterGray          { 0.25f,      0.25f,      0.25f,      1.0f }; //!< Constant color QuarterGray { 0.25f, 0.25f, 0.25f, 1.0f }
    inline static const ColorType Red                  { 1.0f,       0.0f,       0.0f,       1.0f }; //!< Constant color Red { 1.0f, 0.0f, 0.0f, 1.0f }
    inline static const ColorType RosyBrown            { 0.737255f,  0.560784f,  0.560784f,  1.0f }; //!< Constant color RosyBrown { 0.737255f, 0.560784f, 0.560784f, 1.0f }
    inline static const ColorType RoyalBlue            { 0.254902f,  0.411765f,  0.882353f,  1.0f }; //!< Constant color RoyalBlue { 0.254902f, 0.411765f, 0.882353f, 1.0f }
    inline static const ColorType SaddleBrown          { 0.545098f,  0.270588f,  0.0745098f, 1.0f }; //!< Constant color SaddleBrown { 0.545098f, 0.270588f, 0.0745098f, 1.0f}
    inline static const ColorType Salmon               { 0.980392f,  0.501961f,  0.447059f,  1.0f }; //!< Constant color Salmon { 0.980392f, 0.501961f, 0.447059f, 1.0f }
    inline static const ColorType SandyBrown           { 0.956863f,  0.643137f,  0.376471f,  1.0f }; //!< Constant color SandyBrown { 0.956863f, 0.643137f, 0.376471f, 1.0f }
    inline static const ColorType SeaGreen             { 0.180392f,  0.545098f,  0.341176f,  1.0f }; //!< Constant color SeaGreen { 0.180392f, 0.545098f, 0.341176f, 1.0f }
    inline static const ColorType SeaShell             { 1.0f,       0.960784f,  0.933333f,  1.0f }; //!< Constant color SeaShell { 1.0f, 0.960784f, 0.933333f, 1.0f }
    inline static const ColorType Sienna               { 0.627451f,  0.321569f,  0.176471f,  1.0f }; //!< Constant color Sienna { 0.627451f, 0.321569f, 0.176471f, 1.0f }
    inline static const ColorType Silver               { 0.752941f,  0.752941f,  0.752941f,  1.0f }; //!< Constant color Silver { 0.752941f, 0.752941f, 0.752941f, 1.0f }
    inline static const ColorType SkyBlue              { 0.529412f,  0.807843f,  0.921569f,  1.0f }; //!< Constant color SkyBlue { 0.529412f, 0.807843f, 0.921569f, 1.0f }
    inline static const ColorType SlateBlue            { 0.415686f,  0.352941f,  0.803922f,  1.0f }; //!< Constant color SlateBlue { 0.415686f, 0.352941f, 0.803922f, 1.0f }
    inline static const ColorType SlateGray            { 0.439216f,  0.501961f,  0.564706f,  1.0f }; //!< Constant color SlateGray { 0.439216f, 0.501961f, 0.564706f, 1.0f }
    inline static const ColorType Snow                 { 1.0f,       0.980392f,  0.980392f,  1.0f }; //!< Constant color Snow { 1.0f, 0.980392f, 0.980392f, 1.0f }
    inline static const ColorType SpringGreen          { 0.0f,       1.0f,       0.498039f,  1.0f }; //!< Constant color SpringGreen { 0.0f, 1.0f, 0.498039f, 1.0f }
    inline static const ColorType SteelBlue            { 0.27451f,   0.509804f,  0.705882f,  1.0f }; //!< Constant color SteelBlue { 0.27451f, 0.509804f, 0.705882f, 1.0f }
    inline static const ColorType Tan                  { 0.823529f,  0.705882f,  0.54902f,   1.0f }; //!< Constant color Tan { 0.823529f, 0.705882f, 0.54902f, 1.0f }
    inline static const ColorType Teal                 { 0.0f,       0.501961f,  0.501961f,  1.0f }; //!< Constant color Teal { 0.0f, 0.501961f, 0.501961f, 1.0f }
    inline static const ColorType ThirdGray            { 0.3f,       0.3f,       0.3f,       1.0f }; //!< Constant color ThirdGray { 0.3f, 0.3f, 0.3f, 1.0f }
    inline static const ColorType Thistle              { 0.847059f,  0.74902f,   0.847059f,  1.0f }; //!< Constant color Thistle { 0.847059f, 0.74902f, 0.847059f, 1.0f }
    inline static const ColorType Tomato               { 1.0f,       0.388235f,  0.278431f,  1.0f }; //!< Constant color Tomato { 1.0f, 0.388235f, 0.278431f, 1.0f }
    inline static const ColorType Turquoise            { 0.25098f,   0.878431f,  0.815686f,  1.0f }; //!< Constant color Turquoise { 0.25098f, 0.878431f, 0.815686f, 1.0f }
    inline static const ColorType Violet               { 0.933333f,  0.509804f,  0.933333f,  1.0f }; //!< Constant color Violet { 0.933333f, 0.509804f, 0.933333f, 1.0f }
    inline static const ColorType Wheat                { 0.960784f,  0.870588f,  0.701961f,  1.0f }; //!< Constant color Wheat { 0.960784f, 0.870588f, 0.701961f, 1.0f }
    inline static const ColorType WhiteSmoke           { 0.960784f,  0.960784f,  0.960784f,  1.0f }; //!< Constant color WhiteSmoke { 0.960784f, 0.960784f, 0.960784f, 1.0f }
    inline static const ColorType Yellow               { 1.0f,       1.0f,       0.0f,       1.0f }; //!< Constant color Yellow { 1.0f, 1.0f, 0.0f, 1.0f }
    inline static const ColorType YellowGreen          { 0.603922f,  0.803922f,  0.196078f,  1.0f }; //!< Constant color YellowGreen { 0.603922f, 0.803922f, 0.196078f, 1.0f }
};

} // namespace math
} // namespace dst
