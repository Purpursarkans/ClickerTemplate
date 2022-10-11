#include "Head.hpp"

int main()
{
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    //Timeout(100);
    
    if(RANDOM == "ON") srand(time(0));
    // HWND hwnd = FindWindowA(NULL, "DeadByDaylight");
    // HWND hwnd = FindWindowA("NetUIHWND", NULL);
    
    // Timeout(5000);

    POINT P;
    GetCursorPos(&P);    
    HWND hwnd = WindowFromPoint(P);

    ShowWindow(GetConsoleWindow(), SW_SHOW);
    std::cout << hwnd << std::endl;
    
    

    //Beep(100, 100);
    pause();
}