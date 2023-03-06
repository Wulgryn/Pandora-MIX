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

    int cbClsExtra = 0;
    int cbWndExtra = 0;

    HBRUSH hbrBackground = RGB::GetHBRUSH(0,0,0);
    void SetBackgroundColor(Color color);
    void SetForegroundColor(HBRUSH hbrush);

    HCURSOR hCursor = NULL;
    void SetCursor(HCURSOR hCursor);

    HICON hIcon = NULL;

    HINSTANCE hInstance = GetModuleHandle(NULL);

    //string className = "Win32";
    
    LPCSTR lpszMenuName = NULL;

    UINT style = ClassStyles::REDRAW_ON_RESIZE;


    int Create();

    string title = "Pandora MIX";

    DWORD dwStyle = WindowStyles::BORDERED;

    short x = 0;
    short y = 0;
    short width = 100;
    short height = 100;

    HWND hwndParent = NULL;
    HMENU hMenu = NULL;

    //HINSTANCE hInstance = this->hInstance;

    LPVOID lParam = NULL;

    int nCmdShow = WindowStartupState::NORMAL;
    void SetStartupState(int nCmdShow);

    void SetWNDProc(LRESULT CALLBACK wndProc);

    Win32(string className);
    
private:
    LPCSTR lpszClassName;
    LRESULT CALLBACK lpfnWndProc = NULL;
};