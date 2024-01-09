#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <unistd.h>
#include "display.h"
#include "choice.h"

int main()
{   
    // join_data join;
    display output;
    output.start_asciiart();
    output.korea_asciiart();
    output.menu_display();
    output.dis();
    return 0;
}