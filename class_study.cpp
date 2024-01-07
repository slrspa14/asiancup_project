// #include <iostream>
// #include <string>
#include "car.h"

// int main()
// {
//     mycar car = mycar();
//     car.oiling(100);
//     car.fuel_check();
//     for (int i = 0; i < 5; i++)
//     {
//         car.go();
//     }
//     car.fuel_check();
//     car.oiling(100);
//     for (int i = 0; i < 10; i++)
//     {
//         car.go();
//     }
//     car.fuel_check();
//     return 0;
// }

int main()
{
    using namespace std;
    mycar car[3];
    for (int i = 0; i < 3; i++)
    {
        car[i] = mycar();
    }
    car[0].oiling(100);
    car[0].fuel_check();
    for (int i = 0; i < 30; i++)
    {
        car[0].go();
    }
    car[0].fuel_check();
    car[1].oiling(100);
    car[1].fuel_check();
    for (int i = 0; i < 32; i++)
    {
        car[1].go();
    }
    car[1].fuel_check();
}