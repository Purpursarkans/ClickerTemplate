#include "Head.hpp"

int main()
{
    //ShowWindow(GetConsoleWindow(), SW_HIDE);
    //Timeout(100);
    
    if(RANDOM == ON) srand(time(0));
    // HWND hwnd = FindWindowA(NULL, "DeadByDaylight");
    // HWND hwnd = FindWindowA("NetUIHWND", NULL);
    
    Timeout(5000);

    POINT P;
    GetCursorPos(&P);    
    HWND hwnd = WindowFromPoint(P);

    //ShowWindow(GetConsoleWindow(), SW_SHOW);
    std::cout << hwnd << std::endl;

    LPARAM keyUp = ((0xc0 << 24)|(0x11 << 16)|1);
    LPARAM keyDown = ((0x00 << 24)|(0x11 << 16)|1);

    PostMessage(hwnd, WM_KEYDOWN, KEY_W, keyDown);
    SleepRnd(50);
    PostMessage(hwnd, WM_KEYUP, KEY_W, keyUp);
    // SleepRnd(50);
    // PostMessage(hwnd, WM_KEYDOWN, KEY_W, 0);

    Beep(100, 100);
    pause();
}