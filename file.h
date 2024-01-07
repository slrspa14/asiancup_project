#include <iostream>
#include <fstream> // 파일 입출력을 위해
#include <string>

int main()
{
    using namespace std;
    string line;
    ofstream file("data.txt");
    if(file.is_open())
    {
        file << "사용자가 입력하는 성명: ";
        file << "사용자가 입력하는 핸드폰 번호: ";
        file << "사용자가 입력하는 ID: ";
        file << "사용자가 입력하는 비밀번호: ";
        file.close(); // 열었으면 닫아야지
    }
    else
    {
        cout << "시발에러" << endl;
        return 1;
    }
    return 0;
}