#include "Head.hpp"

void LClickOnCoord(POINT &P, int X, int Y)
{
    GetCursorPos(&P);
    SetCursorPos(X, Y);
    mouse_event(MOUSEEVENTF_LEFTDOWN, X, Y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, X, Y, 0, 0);
}

void RClickOnCoord(POINT &P, int X, int Y)
{
    GetCursorPos(&P);
    SetCursorPos(X, Y);
    mouse_event(MOUSEEVENTF_RIGHTDOWN, X, Y, 0, 0);
    mouse_event(MOUSEEVENTF_RIGHTUP, X, Y, 0, 0);
}

int main()
{
    HWND hwnd = FindWindowA("NULL", "DeadByDaylight");
    std::cout << hwnd << std::endl;
    if(hwnd == 0)
        exit(1);
    Sleep(5000);
    
    
    
    SendMessageA(hwnd, MOUSEEVENTF_RIGHTDOWN,0,0);
    Sleep(5000);
    SendMessageA(hwnd, MOUSEEVENTF_RIGHTUP, 0, 0);

    POINT P;
    RClickOnCoord(P, 10, 10);
    //pause();
}