#include "display.h"

int choice = 0;
int count = 0;
void display::dis()
{
    while (choice < 6)
    {
        if (choice > 6)
            break;
        menu_display();
        cin >> choice;
        switch (choice)
        {
        case 1:
        { // 로그인할 때 저장된거랑 비교해서 맞으면 로그인 아니면 실패 후 종료
            if (login_count > 0)
            {
                std::cout << "로그인상태입니다." << std::endl;
                break;
            }
            if (id_v.size() == 0)
            {
                std::cout << "회원가입 먼저 해주세요." << std::endl;
                break;
            }
            log_in();
            break;
        }

        case 2:
            file_save();
            break;

        case 3:
            find();
            break;

        case 4:
        {
            system("clear");
            std::cout << "1. 예매하기" << std::endl;
            std::cout << "2. 예매확인" << std::endl;
            std::cin >> choice;
        
            switch (choice)
            {
            case 1:
            {
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
                        std::cout << line << std::endl;
                        std::cout << "구역을 선택하세요" << std::endl;
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
                            cout << "결제는 1번 아니면 2번";
                            int pay_choice;
                            cin >> pay_choice;
                            if (pay_choice == 1)
                            {
                                cout << "결제금액" << bucket *headcount << "원 결제되었습니다." << endl;
                                break;
                            }
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
                            std::cout << "1. 결제\n2. 아니오";
                            int pay_choice;
                            cin >> pay_choice;
                            if (pay_choice == 2)
                                break;
                        }
                        default:
                            break;
                        }
                    }
                }
                default:
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
                        std::cout << line << std::endl;
                        std::cout << "구역을 선택하세요" << std::endl;
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
                        break;
                    }
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
                        std::cout << line << std::endl;
                        std::cout << "구역을 선택하세요" << std::endl;
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
                    // default:
                }   //     break; // 파란색 스위치 탈출
            }
            default:
                break;
            }
        }
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
            case 1:
            {
                system("clear");
                std::string line;
                std::ifstream file("basic.txt");
                if (!file.is_open())
                {
                    std::cout << "file open error" << std::endl;
                    break;
                }
                else
                {
                    while (getline(file, line))
                        std::cout << line << std::endl;
                }
                std::cout << "\n\n메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
                std::cin >> choice;
                file.close();
                break;
            }
            case 2:
            {
                system("clear");
                std::string line;
                std::ifstream file("country.txt");
                if (!file.is_open())
                {
                    std::cout << "file open error" << std::endl;
                    break;
                }
                else
                {
                    while (getline(file, line))
                        std::cout << line << std::endl;
                }
                std::cout << "\n\n메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
                std::cin >> choice;
                file.close();
                break;
            }
            case 3:
            {
                std::string line;
                std::ifstream file("game_schedule.txt");
                if (!file.is_open())
                {
                    std::cout << "file open error" << std::endl;
                    break;
                }
                else
                {
                    while (getline(file, line))
                        std::cout << line << std::endl;
                }
                std::cout << "\n\n메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
                std::cin >> choice;
                file.close();
                break;
            }
            case 4:
            {
                std::string line;
                std::ifstream file("korean.txt");
                if (!file.is_open())
                {
                    std::cout << "file open error" << std::endl;
                    break;
                }
                else
                {
                    while (getline(file, line))
                        std::cout << line << std::endl;
                }
                std::cout << "\n\n메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
                std::cin >> choice;
                file.close();
                break;
            }
            default:
                break;
            }
        }
        default:
            break;    
        
        }
    }

}
