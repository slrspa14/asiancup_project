#include "display.h"

void display::log_in()
{
    system("clear");
    std::ifstream file("join.csv");
    if(!file.is_open())
        std::cout << "file open error" << std::endl;
    else
    {
        std::cout << "ID:_____\b\b\b\b\b";
        string log_id;
        std::cin >> log_id;
        std::cout << "PW:_____\b\b\b\b\b";
        std::string log_pw;
        std::cin >> log_pw;
        while(1)
        {
            if(strcmp_id(log_id) == 0)
            {
                std::cout << "잘못된 ID입니다. 다시 입력해주세요." << std::endl << "ID:_____\b\b\b\b\b";
                std::cin >> log_id;
            }
            else if(strcmp_pw(log_pw) == 0)
            {
                std::cout << "잘못된 PW입니다. 다시 입력해주세요." << std::endl << "PW_____\b\b\b\b\b";
                std::cin >> log_pw;
            }
            else if (strcmp_id(log_id) == 1 && strcmp_pw(log_pw) == 1)
            {
                std::cout << "로그인되었습니다." << std::endl;
                break;
            }   
        }
        file.close();
        login_count++;
    }
}
int display::strcmp_id(string id)
{
    if(id_v.size() != 0)
    for (int i = 0; i < id_v.size(); i++)
    {
        if(id_v[i] == id)
            return 1;
    }
    return 0;
}
int display::strcmp_pw(string pw)
{
    if(pw_v.size() !=0)
    {
        for (int j = 0; j < pw_v.size(); j++)
        {
            if(pw_v[j] == pw)
                return 1;
        }
    }
    return 0;
}