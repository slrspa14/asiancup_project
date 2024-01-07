//배열을 이용해 
#include <iostream>
using namespace std;
int map_size = 20;
int main()
{
    int map[map_size][map_size] = {0};
    



















    for (int i = 0; i < map_size; i++)
    {
        for (int j = 0; i < map_size; j++)
        {
            if(map[i][j]==0)
                cout << " ";
            if(map[i][j]==1)
                cout<< "tlqkf";
            if(map[i][j]==2)
                cout << "whwrkxsp";
        }
        cout << '\n';
    }
    
}