#ifndef ACTIONS_HPP
#define ACTIONS_HPP

#include "Head.hpp"


void pause()
{
    system("pause");
}

void LClickOnCoordHWND(HWND GameHwnd, int x, int y)
{
    SendMessage(GameHwnd, WM_LBUTTONDOWN, MK_LBUTTON, MAKELPARAM(x, y));
    Sleep(50);
    SendMessage(GameHwnd, WM_LBUTTONUP, MK_LBUTTON, MAKELPARAM(x, y));
}

void LClickOnCoordReal(int X, int Y)
{
    SetCursorPos(X, Y);
    Sleep(50);
    mouse_event(MOUSEEVENTF_LEFTDOWN, X, Y, 0, 0);
    Sleep(50);
    mouse_event(MOUSEEVENTF_LEFTUP, X, Y, 0, 0);
}

void LClickOnCoordReal(POINT P)
{
    SetCursorPos(P.x, P.y);
    Sleep(50);
    mouse_event(MOUSEEVENTF_LEFTDOWN, P.x, P.y, 0, 0);
    Sleep(50);
    mouse_event(MOUSEEVENTF_LEFTUP, P.x, P.y, 0, 0);
}

void RClickOnCoordHWND(HWND GameHwnd, int x, int y)
{
    SendMessage(GameHwnd, WM_RBUTTONDOWN, MK_RBUTTON, MAKELPARAM(x, y));
    Sleep(50);
    SendMessage(GameHwnd, WM_RBUTTONUP, MK_RBUTTON, MAKELPARAM(x, y));
}

void RClickOnCoordReal(POINT P)
{
    SetCursorPos(P.x, P.y);
    Sleep(50);
    mouse_event(MOUSEEVENTF_LEFTDOWN, P.x, P.y, 0, 0);
    Sleep(50);
    mouse_event(MOUSEEVENTF_LEFTUP, P.x, P.y, 0, 0);
}

void RClickOnCoordReal(int X, int Y)
{
    SetCursorPos(X, Y);
    Sleep(50);
    mouse_event(MOUSEEVENTF_RIGHTDOWN, X, Y, 0, 0);
    Sleep(50);
    mouse_event(MOUSEEVENTF_RIGHTUP, X, Y, 0, 0);
}

void Timeout(int sleep)
{
    Sleep(sleep);
}

void TimeoutBeep(int sleep)
{
    Sleep(sleep);
    Beep(100, 100);
}

void TimeoutBeep(int sleep, DWORD dwFreq, DWORD dwDuration)
{
    Sleep(sleep);
    Beep(dwFreq, dwDuration);
}

#endif