#include "Head.hpp"

void LClickOnCoord(int X, int Y)
{
    SetCursorPos(X, Y);
    mouse_event(MOUSEEVENTF_LEFTDOWN, X, Y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, X, Y, 0, 0);
}

void LClickOnCoord(POINT P)
{
    SetCursorPos(P.x, P.y);
    mouse_event(MOUSEEVENTF_LEFTDOWN, P.x, P.y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, P.x, P.y, 0, 0);
}
void RClickOnCoord(POINT P)
{
    SetCursorPos(P.x, P.y);
    mouse_event(MOUSEEVENTF_LEFTDOWN, P.x, P.y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, P.x, P.y, 0, 0);
}

void RClickOnCoord(int X, int Y)
{
    SetCursorPos(X, Y);
    mouse_event(MOUSEEVENTF_RIGHTDOWN, X, Y, 0, 0);
    mouse_event(MOUSEEVENTF_RIGHTUP, X, Y, 0, 0);
}

void Timeout(int sleep)
{
    Sleep(sleep);
    Beep(100, 100);
}

int main()
{
    //Timeout(5000);
    POINT P;
    GetCursorPos(&P);
    //HWND hwnd = FindWindowA("NULL", "DeadByDaylight");

    HWND hwnd = WindowFromPoint(P);
    
    std::cout << hwnd << std::endl;
    Timeout(5000);

    LClickOnCoord(P.x, P.y);

    SendMessageA(hwnd, MOUSEEVENTF_LEFTDOWN, 0, MAKELPARAM(P.x, P.y));
    Timeout(500);
    SendMessageA(hwnd, MOUSEEVENTF_LEFTUP, 0, MAKELPARAM(P.x, P.y));

    //RClickOnCoord(10, 10);
    Beep(1000, 1000);
    pause();
}