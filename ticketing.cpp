#include "display.h"
void display::ticketing()
{
    int choice = 0;
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        std::cout << "\t경기일정\n\n";
        std::cout << "1. 1.15 20:30 한국:바레인\n\n";
        std::cout << "2. 1.20 20:30 한국:요르단\n\n";
        std::cout << "3. 1.25 20:30 한국:말레이시아\n\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            system("clear");
            std::cout << "1. 1.15 20:30 한국:바레인\n\n";
            std::string line;
            ifstream file("stadium.txt");
            if (!file.is_open())
                std::cout << "file open error" << std::endl;
            else
            {
                int bucket = 0;
                while (getline(file, line))
                    std::cout << line << std::std::endl;
                std::cout << "구역을 선택하세요" << std::std::endl;
                std::cout << "1. MVIP 50000원\n";
                std::cout << "2. VIP 30000원\n";
                std::cout << "3. GOLD 25000원\n";
                std::cout << "4. SILVER 20000원\n";
                cin >> choice;
                if (choice == 1)
                    bucket += 50000;
                else if (choice == 2)
                    bucket += 30000;
                else if (choice == 3)
                    bucket += 25000;
                else if (choice == 4)
                    bucket += 20000;
                switch (choice)
                {
                case 1:
                {
                    std::cout << "4x4 좌석 +100000";
                    bucket += 100000;
                    std::cout << "인원수:";
                    int headcount = 0;
                    std::cin >> headcount;
                    std::cout << "결제금액:" << bucket * headcount << "원 입니다." << std::endl;
                    int pay_choice;
                    cin >> pay_choice;
                    if (pay_choice == 2)
                        break;
                    // break;
                }
                case 2:
                {
                    std::cout << "4x4 좌석+80000";
                    bucket += 80000;
                    std::cout << "인원수:";
                    int headcount = 0;
                    std::cin >> headcount;
                    std::cout << "결제금액:" << bucket * headcount << "원 입니다." << std::endl;
                    int pay_choice;
                    cin >> pay_choice;
                    if (pay_choice == 2)
                        break;
                    // break;
                }
                case 3:
                {
                    std::cout << "4x4 좌석+50000";
                    bucket += 50000;
                    std::cout << "인원수:";
                    int headcount = 0;
                    std::cin >> headcount;
                    std::cout << "결제금액:" << bucket * headcount << "원 입니다." << endl;
                    int pay_choice;
                    cin >> pay_choice;
                    if (pay_choice == 2)
                        break;
                    // break;
                }
                case 4:
                {
                    std::cout << "4x4 좌석+20000";
                    bucket += 20000;
                    std::cout << "인원수:";
                    int headcount = 0;
                    std::cin >> headcount;
                    std::cout << "결제금액:" << bucket * headcount << "원 입니다." << endl;
                    std::cout << "결제하시겠습니까?";
                    std::"1. 결제\n2. 아니오";
                    int pay_choice;
                    cin >> pay_choice;
                    if (pay_choice == 2)
                        break;
                }
                default:
                    break;
                }
            }
            break;
        }
        case 2:
        {
            system("clear");
            std::cout << "2. 1.20 20:30 한국:요르단\n\n";
            std::string line;
            ifstream file("stadium.txt");
            if (!file.is_open())
                std::cout << "file open error" << std::endl;
            else
            {
                int bucket = 0;
                while (getline(file, line))
                    std::cout << line << std::std::endl;
                std::cout << "구역을 선택하세요" << std::std::endl;
                std::cout << "1. MVIP 50000원\n";
                std::cout << "2. VIP 30000원\n";
                std::cout << "3. GOLD 25000원\n";
                std::cout << "4. SILVER 20000원\n";
                cin >> choice;
                if (choice == 1)
                    bucket += 50000;
                else if (choice == 2)
                    bucket += 30000;
                else if (choice == 3)
                    bucket += 25000;
                else if (choice == 4)
                    bucket += 20000;
                switch (choice)
                {
                case 1:
                {
                    std::cout << "4x4 좌석 +100000";
                    bucket += 100000;
                    std::cout << "인원수:";
                    int headcount = 0;
                    std::cin >> headcount;
                    std::cout << "결제금액:" << bucket * headcount << "원 입니다." << std::endl;
                    break;
                }
                case 2:
                {
                    std::cout << "4x4 좌석+80000";
                    bucket += 80000;
                    std::cout << "인원수:";
                    int headcount = 0;
                    std::cin >> headcount;
                    std::cout << "결제금액:" << bucket * headcount << "원 입니다." << std::endl;
                    break;
                }
                case 3:
                {
                    std::cout << "4x4 좌석+50000";
                    bucket += 50000;
                    std::cout << "인원수:";
                    int headcount = 0;
                    std::cin >> headcount;
                    std::cout << "결제금액:" << bucket * headcount << "원 입니다." << endl;
                    break;
                }
                case 4:
                {
                    std::cout << "4x4 좌석+20000";
                    bucket += 20000;
                    std::cout << "인원수:";
                    int headcount = 0;
                    std::cin >> headcount;
                    std::cout << "결제금액:" << bucket * headcount << "원 입니다." << endl;
                    break;
                }
                default:
                    break;
                }
            }
            break;
        }
        case 3:
        {
            system("clear");
            std::cout << "3. 1.25 20:30 한국:말레이시아\n\n";
            std::string line;
            ifstream file("stadium.txt");
            if (!file.is_open())
                std::cout << "file open error" << std::endl;
            else
            {
                int bucket = 0;
                while (getline(file, line))
                    std::cout << line << std::std::endl;
                std::cout << "구역을 선택하세요" << std::std::endl;
                std::cout << "1. MVIP 50000원\n";
                std::cout << "2. VIP 30000원\n";
                std::cout << "3. GOLD 25000원\n";
                std::cout << "4. SILVER 20000원\n";
                cin >> choice;
                if (choice == 1)
                    bucket += 50000;
                else if (choice == 2)
                    bucket += 30000;
                else if (choice == 3)
                    bucket += 25000;
                else if (choice == 4)
                    bucket += 20000;
                switch (choice)
                {
                case 1:
                {
                    std::cout << "4x4 좌석 +100000";
                    bucket += 100000;
                    std::cout << "인원수:";
                    int headcount = 0;
                    std::cin >> headcount;
                    std::cout << "결제금액:" << bucket * headcount << "원 입니다." << std::endl;
                    break;
                }
                case 2:
                {
                    std::cout << "4x4 좌석+80000";
                    bucket += 80000;
                    std::cout << "인원수:";
                    int headcount = 0;
                    std::cin >> headcount;
                    std::cout << "결제금액:" << bucket * headcount << "원 입니다." << std::endl;
                    break;
                }
                case 3:
                {
                    std::cout << "4x4 좌석+50000";
                    bucket += 50000;
                    std::cout << "인원수:";
                    int headcount = 0;
                    std::cin >> headcount;
                    std::cout << "결제금액:" << bucket * headcount << "원 입니다." << endl;
                    break;
                }
                case 4:
                {
                    std::cout << "4x4 좌석+20000";
                    bucket += 20000;
                    std::cout << "인원수:";
                    int headcount = 0;
                    std::cin >> headcount;
                    std::cout << "결제금액:" << bucket * headcount << "원 입니다." << endl;
                    break;
                }
                default:
                    break;
                }
            }
        }
        }
        break;
    }
}