#ifndef ACTIONS_HPP
#define ACTIONS_HPP

#include "Head.hpp"


void SleepRnd(int slp)
{
    if (RANDOM == "ON")
    {
        int rd = rand() % slp + 1;
        Sleep(rd);
    }
    else
    {
        Sleep(slp);
    }
    
}

void pause()
{
    system("pause");
}

void LClickOnCoordHWND(HWND GameHwnd, int x, int y)
{
    SendMessage(GameHwnd, WM_LBUTTONDOWN, MK_LBUTTON, MAKELPARAM(x, y));
    SleepRnd(50);
    SendMessage(GameHwnd, WM_LBUTTONUP, MK_LBUTTON, MAKELPARAM(x, y));
}

void LClickOnCoordReal(int X, int Y)
{
    SetCursorPos(X, Y);
    SleepRnd(50);
    mouse_event(MOUSEEVENTF_LEFTDOWN, X, Y, 0, 0);
    SleepRnd(50);
    mouse_event(MOUSEEVENTF_LEFTUP, X, Y, 0, 0);
}

void LClickOnCoordReal(POINT P)
{
    SetCursorPos(P.x, P.y);
    SleepRnd(50);
    mouse_event(MOUSEEVENTF_LEFTDOWN, P.x, P.y, 0, 0);
    SleepRnd(50);
    mouse_event(MOUSEEVENTF_LEFTUP, P.x, P.y, 0, 0);
}

void RClickOnCoordHWND(HWND GameHwnd, int x, int y)
{
    SendMessage(GameHwnd, WM_RBUTTONDOWN, MK_RBUTTON, MAKELPARAM(x, y));
    SleepRnd(50);
    SendMessage(GameHwnd, WM_RBUTTONUP, MK_RBUTTON, MAKELPARAM(x, y));
}

void RClickOnCoordReal(POINT P)
{
    SetCursorPos(P.x, P.y);
    SleepRnd(50);
    mouse_event(MOUSEEVENTF_LEFTDOWN, P.x, P.y, 0, 0);
    SleepRnd(50);
    mouse_event(MOUSEEVENTF_LEFTUP, P.x, P.y, 0, 0);
}

void RClickOnCoordReal(int X, int Y)
{
    SetCursorPos(X, Y);
    SleepRnd(50);
    mouse_event(MOUSEEVENTF_RIGHTDOWN, X, Y, 0, 0);
    SleepRnd(50);
    mouse_event(MOUSEEVENTF_RIGHTUP, X, Y, 0, 0);
}

void Timeout(int sleep)
{
    SleepRnd(sleep);
}

void TimeoutBeep(int sleep)
{
    SleepRnd(sleep);
    Beep(100, 100);
}

void TimeoutBeep(int sleep, DWORD dwFreq, DWORD dwDuration)
{
    SleepRnd(sleep);
    Beep(dwFreq, dwDuration);
}

#endif