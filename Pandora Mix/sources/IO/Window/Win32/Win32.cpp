#include "Win32.hpp"
using Win = Win32;
void Win::SetBackgroundColor(Color color) 
{
    Win::hbrBackground = color.GetHBRUSH();
}
void Win::SetForegroundColor(HBRUSH hbrush)
{
    Win::hbrBackground = hbrush;
}