#pragma once
#include <Windows.h>
#include <thread>
#include <string>
using namespace std;
#include "Colors.hpp"
#include "Window.hpp"

class Win32
{
public:
    int cbClsExtra;
    int cbWndExtra;

    HBRUSH hbrBackground;
    void SetBackgroundColor(Color color);
    void SetForegroundColor(HBRUSH hbrush);

    HCURSOR hcursor;
    void SetCursor(HCURSOR hcursor);

    HICON hIcon;

    HINSTANCE hInstance = GetModuleHandle(NULL);

    string className = "Win32";
    
    string menuName = "MenuName";

    UINT style = ClassStyles::REDRAW_ON_RESIZE;


    void Create();

    string title = "Pandora MIX";

    DWORD dwStyle = WindowStyles::TRANSPARENT_;

    short x = 0;
    short y = 0;
    short width = 0;
    short height = 0;

    HWND hwndParent = NULL;
    HMENU hMenu = NULL;

private:
    LPCSTR lpszClassName;
    LPCSTR lpszMenuName;
    WNDPROC lpfnWindProc;

    LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
};