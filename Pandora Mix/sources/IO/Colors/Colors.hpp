#pragma once
#include <Windows.h>
using byte = unsigned char;
namespace RGB
{
    HBRUSH GetHBRUSH(byte red, byte green, byte blue)
    {
        return CreateSolidBrush(RGB(red, green, blue));
    }
}

class Color
{
    public:
    byte red;
    byte green;
    byte blue;
    Color(byte red, byte green, byte blue)
    {
        this->red = red;
        this->green = green;
        this->blue = blue;
    };

    HBRUSH GetHBRUSH()
    {
        return RGB::GetHBRUSH(this->red, this->green, this->blue);
    };
};