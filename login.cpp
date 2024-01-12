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
                sleep(1);
                system("clear");
                break;
            }
        }
        file.close();
        login_count++;
        std::fstream ofile("ticket.csv",std::ios::app);
        if(!ofile.is_open())
            std::cout << "file open error" << std::endl;
        else
            ofile << log_id << ",";
        ofile.close();
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

// #include "display.h"
// // 파일 입출력을 통한 로그인 중복검사 및 로그인 성공
// void display::log_in()
// {
//     system("clear");
//     std::string line;
//     std::ifstream file("join.csv");
//     if(!file.is_open())
//         std::cout << "file open error" << std::endl;
//     else
//     {
//         std::cout << "ID:_____\b\b\b\b\b";
//         string log_id;
//         std::cin >> log_id;
//         std::cout << "PW:_____\b\b\b\b\b";
//         std::string log_pw;
//         std::cin >> log_pw;
//         while(1)
//         {
//             stringstream ss(line);
//             std::string file_id, file_pw;
//             getline(ss, file_id, ','); // 작은따옴표
//             getline(ss, file_pw, ',');
//             while(getline(file,line))
//             {
//                 if(log_id != file_id)
//                 {
//                     std::cout << "일치하는 ID가 없습니다.";
//                     std::cout << "다시 입력을 원하시면 1번 메인페이지로 이동을 원하시면 0번을 눌러주세요." << std::endl;
//                     int re_id = 0;
//                     std::cin >> re_id;
//                     if(re_id == 1)
//                     {
//                         std::cout << "ID:_____\b\b\b\b\b";
//                         std::cin >> log_id;
//                     }
//                     else
//                     {
//                         system("clear");
//                         break;
//                     }
//                 }
//                 else if(log_id == file_id)
//                     id_count++;

//                 break;

//                 if(log_pw != file_pw)
//                 {
//                     std::cout << "일치하는 PW가 없습니다.";
//                     std::cout << "다시 입력을 원하시면 1번 메인페이지로 이동을 원하시면 0번을 눌러주세요" << std::endl;
//                     int re_pw = 0;
//                     std::cin >> re_pw;
//                     if(re_pw == 1)
//                     {
//                         std::cout << "PW:_____\b\b\b\b\b";
//                         std::cin >> log_pw;
//                     }
//                     else if(log_pw == file_pw)
//                         pw_count++;
                        
//                     break;
//                 }
//             }
//             break;//무한루프 탈출용
//         }
//         file.close(); //닫고
    
//         std::fstream ofile("ticket.csv",std::ios::app); // 열고 쓰고
//         if(!ofile.is_open())
//             std::cout << "file open error" << std::endl;
//         else
//             ofile << log_id << ",";
//         ofile.close(); // 닫고
//     }
// }