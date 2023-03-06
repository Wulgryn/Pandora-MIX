#pragma once
#include <Windows.h>

namespace RGB
{
    HBRUSH GetHBRUSH(unsigned char red, unsigned char green, unsigned char blue)
    {
        return CreateSolidBrush(RGB(red, green, blue));
    }
}

class Color
{
    public:
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    double alpha;
    Color(unsigned char red, unsigned char green, unsigned char blue)
    {
        this->red = red;
        this->green = green;
        this->blue = blue;
        alpha = 1.0;
    };

    HBRUSH GetHBRUSH()
    {
        return RGB::GetHBRUSH(this->red, this->green, this->blue);
    };
};