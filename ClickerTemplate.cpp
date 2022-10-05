#include "Head.hpp"

int main()
{
    //Timeout(5000);
    POINT P;
    GetCursorPos(&P);
    //HWND hwnd = FindWindowA(NULL, "DeadByDaylight");
    //HWND hwnd = FindWindowA("NetUIHWND", NULL);
    HWND hwnd = WindowFromPoint(P);
    std::cout << hwnd << std::endl;





    Beep(100, 100);
    pause();
}