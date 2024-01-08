#include <iostream>
#include "asiancup_art.h"
#include "menu.h"
// #include "select.h"

int main()
{   
    art start;
    console dis;
    start.start_asciiart();
    dis.display();
    dis.login_display();
    dis.forget_display();
    dis.join_display();
    return 0;
}
