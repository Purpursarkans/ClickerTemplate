#ifndef ACTIONS_HPP
#define ACTIONS_HPP

#include "Head.hpp"


void SleepRnd(int slp)
{
    if (RANDOM == ON)
    {
        int rd = rand() % slp + 1;
        Sleep(rd);
    }
    else
    {
        Sleep(slp);
    }
    
}

int ToSec(int sec) { return sec * 1000; }

int ToMin(int min) { return min * 60000; }

void pause() { system("pause"); }

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

void PostPressButtonHWND(HWND GameHwnd, int key, int PressOnMSec)
{
    PostMessage(GameHwnd, WM_KEYDOWN, key, 0);
    SleepRnd(PressOnMSec);
    PostMessage(GameHwnd, WM_KEYUP, key, 0);
    SleepRnd(ToSec(1));
}

void SendPressButtonHWND(HWND GameHwnd, int key, int PressOnMSec)
{
    SendMessage(GameHwnd, WM_KEYDOWN, key, 0);
    SleepRnd(PressOnMSec);
    SendMessage(GameHwnd, WM_KEYUP, key, 0);
    SleepRnd(ToSec(1));
}

void PressButtonReal(int key, int PressOnMSec)
{
    keybd_event(key, MapVirtualKey(key, 0), 0, 0);
    SleepRnd(PressOnMSec);
    keybd_event(key, MapVirtualKey(key, 0), KEYEVENTF_KEYUP, 0);
}

void Timeout(int sleep)
{
    Sleep(sleep);
}

void TimeoutRnd(int sleep)
{
    Sleep(sleep);
}

void TimeoutBeep(int sleep)
{
    Sleep(sleep);
    Beep(100, 100);
}
void TimeoutBeepRnd(int sleep)
{
    SleepRnd(sleep);
    Beep(100, 100);
}
void TimeoutBeep(int sleep, DWORD dwFreq, DWORD dwDuration)
{
    Sleep(sleep);
    Beep(dwFreq, dwDuration);
}
void TimeoutBeepRnd(int sleep, DWORD dwFreq, DWORD dwDuration)
{
    SleepRnd(sleep);
    Beep(dwFreq, dwDuration);
}

#endif