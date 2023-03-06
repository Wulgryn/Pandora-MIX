#pragma once
#include <Windows.h>
#include <thread>

#include "List.hpp"
class WindowThreadHandler
{
    private:
        List<jthread> window_threads;
       // static void 
};
namespace Cursor 
{
    #define ARROW 1
    #define IBEAM 2
    #define WAIT 3
    #define HAND 4

    HCURSOR GetCursor(int cursor)
    {
        switch (cursor)
        {
        case 1:
            return LoadCursor(NULL, IDC_ARROW);
        case 2:
            return LoadCursor(NULL, IDC_IBEAM);
        case 3:
            return LoadCursor(NULL, IDC_WAIT);
        case 4:
            return LoadCursor(NULL, IDC_HAND);
        default:
            return LoadCursor(NULL, IDC_ARROW);
        }
    }
}

namespace ClassStyles
{
    #define REDRAW_ON_RESIZE_D CS_HREDRAW | CS_VREDRAW
    #define BYTE_GRANULATION_D CS_BYTEALIGNCLIENT | CS_BYTEALIGNWINDOW
    #define ENABLE_DOUBLE_CLICK_EVENT_D CS_DBLCLKS
    UINT REDRAW_ON_RESIZE = REDRAW_ON_RESIZE_D;
    UINT BYTE_GRANULATION = BYTE_GRANULATION_D;
    UINT ENABLE_DOUBLE_CLICK_EVENT = ENABLE_DOUBLE_CLICK_EVENT_D;
}
namespace WindowStyles
{
    #define BORDERLESS_D WS_OVERLAPPED
    #define BORDERED_D WS_OVERLAPPEDWINDOW
    UINT BORDERLESS = BORDERLESS_D;
    UINT BORDERED = BORDERED_D;
}
namespace WindowStartupState
{
    #define NORMAL_D SW_SHOWNORMAL
    UINT NORMAL = NORMAL_D;
}