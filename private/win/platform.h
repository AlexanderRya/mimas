#ifndef MIMAS_WIN_PLATFORM_H_INCLUDE
#define MIMAS_WIN_PLATFORM_H_INCLUDE

#define NOMINMAX 1
#define WIN32_LEAN_AND_MEAN 1

#define _UNICODE 1
#define UNICODE 1

#include <Windows.h>
#include <Windowsx.h>
#include <dwmapi.h>

#include <mimas/mimas.h>

#define MIMAS_WINDOW_CLASS_NAME L"anton.mimas.mingwlul.window"

typedef struct {
    HWND handle;
    HDC hdc;
} Mimas_Win_Window;

typedef struct {
    Mimas_Key_Action key_state[256];
    Mimas_Window* dummy_window;
} Mimas_Win_Platform;

#endif // !MIMAS_WIN_PLATFORM_H_INCLUDE
