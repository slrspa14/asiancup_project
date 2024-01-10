// #include "display.h"

// int choice = 0;
// int count = 0;
// void display::dis()
// {
//     while (choice < 6)
//     {
//         if (choice > 6)
//             break;
//         menu_display();
//         cin >> choice;
//         switch (choice)
//         {
//         case 1:
//         { // 로그인할 때 저장된거랑 비교해서 맞으면 로그인 아니면 실패 후 종료
//             if (login_count > 0)
//             {
//                 std::cout << "로그인상태입니다." << std::endl;
//                 break;
//             }
//             if (id_v.size() == 0)
//             {
//                 std::cout << "회원가입 먼저 해주세요." << std::endl;
//                 break;
//             }
//             log_in();
//             break;
//         }

//         case 2:
//             file_save();
//             break;

//         case 3:
//             find();
//             break;

//         case 4:
//             system("clear");
//             std::cout << "1. 예매하기" << std::endl;
//             std::cout << "2. 예매확인" << std::endl;
//             ticketing();
//         }
//         // default:
//         //     break;
//     }

// case 2:
//     if (login_count == 0)
//     {
//         std::cout << "로그인 후 이용해주세요" << std::endl;
//         break;
//     }
//     else
//     {
//         std::string line;
//         std::ifstream file("ticket.csv");
//         if (!file.is_open())
//         {
//             std::cout << "file open error" << endl;
//             break;
//         }
//         else
//         {
//             "파일에서 회원과 일치하는 예매내역 출력하기";
//         }
//     }
// default:
//     break;
// }
// break;

// case 5:
// {
//     system("clear");
//     std::cout << "1. 경기 일정, 개최지, 중계 등 기본정보" << std::endl;
//     std::cout << "2. 참가국 및 조별 정보" << std::endl;
//     std::cout << "3. 조별 경기일정" << std::endl;
//     std::cout << "4. 한국 감독/선수 명단 선수 정보" << std::endl;
//     int choice;
//     std::cin >> choice;
//     switch (choice)
//     {
//     case 1:
//     {
//         system("clear");
//         std::string line;
//         std::ifstream file("basic.txt");
//         if (!file.is_open())
//         {
//             std::cout << "file open error" << std::endl;
//             break;
//         }
//         else
//         {
//             while (getline(file, line))
//                 std::cout << line << std::endl;
//         }
//         std::cout << "\n\n메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
//         std::cin >> choice;
//         if (choice > 0)
//             menu_display();
//         file.close();
//         break;
//     }
//     case 2:
//     {
//         system("clear");
//         std::string line;
//         std::ifstream file("country.txt");
//         if (!file.is_open())
//         {
//             std::cout << "file open error" << std::endl;
//             break;
//         }
//         else
//         {
//             while (getline(file, line))
//                 std::cout << line << std::endl;
//         }
//         std::cout << "\n\n메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
//         std::cin >> choice;
//         if (choice > 0)
//             menu_display();
//         file.close();
//         break;
//     }
//     case 3:
//     {
//         std::string line;
//         std::ifstream file("game_schedule.txt");
//         if (!file.is_open())
//         {
//             std::cout << "file open error" << std::endl;
//             break;
//         }
//         else
//         {
//             while (getline(file, line))
//                 std::cout << line << std::endl;
//         }
//         std::cout << "\n\n메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
//         std::cin >> choice;
//         if (choice > 0)
//             menu_display();
//         file.close();
//         break;
//     }
//     case 4:
//     {
//         std::string line;
//         std::ifstream file("korean.txt");
//         if (!file.is_open())
//         {
//             std::cout << "file open error" << std::endl;
//             break;
//         }
//         else
//         {
//             while (getline(file, line))
//                 std::cout << line << std::endl;
//         }
//         std::cout << "\n\n메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
//         std::cin >> choice;
//         if (choice > 0)
//             menu_display();
//         file.close();
//         break;
//     }
//     default:
//         break;
//     }
// }
// }
// }
// }