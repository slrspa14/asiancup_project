// #include <iostream>
// #include <fstream>
// #include <string>
// #include <string.h>
// #include <unistd.h>
#include "display.h"
#include "choice.h"

int main()
{   
    
    display output;
    output.start_asciiart();
    output.korea_asciiart();
    while(1)
    {
        output.dis();
    }
    return 0;
}