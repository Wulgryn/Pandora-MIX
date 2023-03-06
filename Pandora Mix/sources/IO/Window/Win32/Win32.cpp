#include "Win32.hpp"
using Win = Win32;

Win::Win32(string className)
{
    Win::lpszMenuName = className.c_str();
}

void Win::SetBackgroundColor(Color color) 
{
    Win::hbrBackground = color.GetHBRUSH();
}
void Win::SetForegroundColor(HBRUSH hbrush)
{
    Win::hbrBackground = hbrush;
}
void Win::SetStartupState(int nCmdShow)
{
    Win::nCmdShow = nCmdShow;
}
void Win::SetWNDProc(LRESULT CALLBACK wndProc)
{
    Win::lpfnWndProc = wndProc;
}
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_DESTROY:

        break;
    
    default:
        break;
    }
    return DefWindowProc(hWnd,message,wParam,lParam);
}
int Win::Create()
{
    WNDCLASS window = { 0 };
    window.cbClsExtra = Win::cbClsExtra;
    window.cbWndExtra = Win::cbWndExtra;
    window.hbrBackground = Win::hbrBackground;
    window.hCursor = Win::hCursor;
    window.hIcon = Win::hIcon;
    window.hInstance = Win::hInstance;
    window.lpszClassName = Win::lpszClassName;
    window.lpszMenuName = Win::lpszMenuName;
    window.style = Win::style;
    if(Win::lpfnWndProc == NULL) window.lpfnWndProc = WndProc;
    else window.lpfnWndProc = (WNDPROC)Win::lpfnWndProc;
    

    RegisterClass(&window);

    HWND hWnd = CreateWindow(Win::lpszClassName,Win::title.c_str(),Win::dwStyle,Win::x,Win::y,Win::width,Win::height,Win::hwndParent,Win::hMenu,Win::hInstance,Win::lParam);
    ShowWindow(hWnd,Win::nCmdShow);
    MSG msg;
    while(GetMessage(&msg,NULL,0,0)>0)
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return msg.wParam;
}

