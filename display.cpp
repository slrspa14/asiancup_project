#include "display.h"
#include "choice.h"

void display::dis()
{
    int choice=0;
    while (choice<6) 
    {
        //menu_display();
        std::cin >> choice;
        switch (choice)
        {
        case 1:{// 로그인할 때 저장된거랑 비교해서 맞으면 로그인 아니면 실패 후 종료
            system("clear");
            std::string line;
            std::ofstream file("login.csv");
            if(file.is_open())
            {
                std::cout << "ID: _____\b\b\b\b\b";
                char id[15];
                std::cin >> id;
                file << id << ",";
                std::cout << "PW: _____\b\b\b\b\b";
                char pw[15];
                std::cin >> pw;
                file << pw << ",";
                file.close();
            }
            else
                std::cout << "error" << std::endl;
            break;
        }

        case 2:{//초기화 안되게
            system("clear");            
            break;
        }
        case 3:
            system("clear");
            std::cout << "ID/PW 찾기" << std::endl;
            std::cout << "성명:___\b\b\b";
            char user_name[15];
            std::cin >> user_name;
            std::cout << "핸드폰번호(-제외) ___________\b\b\b\b\b\b\b\b\b\b\b\b";
            // int user_pnum[15];
            // cin >> user_pnum;
            break;
        case 4:
            std::cout << "예매/예매확인" << std::endl;
            break;
        case 5:
        {
            system("clear");
            std::cout << "1. 경기 일정, 개최지, 중계 등 기본정보" << std::endl;
            std::cout << "2. 참가국 및 조별 정보" << std::endl;
            std::cout << "3. 조별 경기일정" << std::endl;
            std::cout << "4. 한국 감독/선수 명단 선수 정보" << std::endl;
            int choice;
            std::cin >> choice;
            switch (choice)
            {
            case 1:{
                system("clear");
                std::string line;
                std::ifstream file("basic.txt");
                if(file.is_open())
                {
                    while(getline(file,line))
                        std::cout << line << std::endl;
                }
                std::cout << "\n\n메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
                std::cin >> choice;
                // if(choice>0)
                //     menu_display();
                file.close();
                break;
            }
            case 2:{
                system("clear");
                std::string line;
                std::ifstream file("country.txt");
                if(file.is_open())
                {
                    while(getline(file,line))
                        std::cout << line << std::endl;
                }
                std::cout << "\n\n메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
                std::cin >> choice;
                // if(choice>0)
                //     menu_display();
                file.close();
                break;
            }
            case 3:{
                std::string line;
                std::ifstream file("game_schedule.txt");
                if(file.is_open())
                {
                    while(getline(file,line))
                        std::cout << line << std::endl;
                }
                std::cout << "\n\n메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
                std::cin >> choice;
                // if(choice>0)
                //     menu_display();
                file.close();
                break;
            }
            case 4:{
                std::string line;
                std::ifstream file("korean.txt");
                if(file.is_open())
                {
                    while(getline(file,line))
                        std::cout << line << std::endl;
                }
                std::cout << "\n\n메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
                std::cin >> choice;
                // if(choice>0)
                //     menu_display();
                file.close();
                break;
            }
            }
        }
        }
    }
}