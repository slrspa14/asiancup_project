#include <iostream>
#include <fstream> // 파일 입출력을 위해
#include <string>
#include <unistd.h>
using namespace std;

class art
{
    public:
    void asiiart()
    {
        string line;
        ifstream file("/home/aiot11/cfold/c++/asian/asiancup_ASCIIART.txt");
        if (file.is_open()) // 성공하면 열기
        {  
            while (getline(file,line)) // 파일 한줄씩 읽기
            {
                cout << line << endl; //한줄씩 출력하기
            }
            sleep(2);
            file.close(); // 열었으면 닫아야지
        }
        else
        {
            cout << "error" << endl;
        }
    }
};