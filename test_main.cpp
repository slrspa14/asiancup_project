#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

using namespace std;

void start_asciiart()
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
        system("clear");
        file.close(); // 열었으면 닫아야지
    }
    else
    {
        cout << "error" << endl;
    }
}
void korea_asciiart()
    {
        string line;
        ifstream file("/home/aiot11/cfold/c++/asian/KFA_ASCIIART.txt");
        if(file.is_open())
        {
            while(getline(file,line))
            {
                cout << line << endl;
            }
            sleep(2);
            system("clear");
            file.close();
        }
        else
        {
            cout << "error" << endl;
        }
    }
void menu_display()
{
    cout << "1. 로그인" << endl;
    cout << "2. 회원가입" << endl;
    cout << "3. ID/PW 찾기" << endl;
    cout << "4. 예매/예매확인" << endl;
    cout << "5. 아시안컵 정보" << endl;
    cout << "6. 종료" << endl;
}
void display()
{
    int count=0;
    int choice=0;
    while (choice<6) 
    {
        menu_display();
        cin >> choice;
        switch (choice)
        {
        case 1:{// 로그인할 때 저장된거랑 비교해서 맞으면 로그인 아니면 실패 후 종료
            system("clear");
            string line;
            ofstream file("login.txt");
            if(file.is_open())
            {
                cout << "ID: _____\b\b\b\b\b";
                char id[15];
                cin >> id;
                file << id << endl;
                cout << "PW: _____\b\b\b\b\b";
                char pw[15];
                cin >> pw;
                file << pw << endl;
                file.close();
            }
            else
                cout << "error" << endl;
            break;
        }

        case 2:{//초기화 안되게
            system("clear");
            string line;
            ofstream file("join.csv",ios::app);
            if(file.is_open())
            {
                count++; // 중복검사용 카운트
                cout << "회원가입" << endl;
                cout << "성명: ___\b\b\b";
                char name[15];
                cin >> name;
                file << name << ",";
                cout << "ID: _____\b\b\b\b\b";
                char user_id[15];
                cin >> user_id;
                file << user_id << ",";
                string line;
                ifstream file("join.csv");
                if(file.is_open())
                {
                    while(getline(file,line)) // 한줄씩 읽어온다.
                        cout << line << endl;
                    // for (int i = 1; i < 2; i++)
                    // {
                    //     for (int j = 0; j < count; j++)
                    //     {
                    //         cout << line << endl;
                    //         // if (name == )
                    //         // {
                    //         //     cout << "중복된 ID입니다.";
                    //         //     break;
                    //         // }
                    //     }
                    // }
                }
                cout << "PW: _____\b\b\b\b\b";
                char user_pw[15];
                cin >> user_pw;
                file << user_pw << ",";
                cout << "핸드폰번호(-제외) ___________\b\b\b\b\b\b\b\b\b\b\b";
                char user_pnum[15];
                cin >> user_pnum;
                file << user_pnum << ",";
                cout << "회원가입 완료" << endl;
                cout << "고유회원번호: " << rand()%1000 << rand()%1000 << endl;
                file << '\n';
                file.close();
            }
            else
                cout << "error" << endl;
            break;
        }
        case 3:
            system("clear");
            cout << "ID/PW 찾기" << endl;
            cout << "성명:___\b\b\b";
            char user_name[15];
            cin >> user_name;
            cout << "핸드폰번호(-제외) ___________\b\b\b\b\b\b\b\b\b\b\b\b";
            // int user_pnum[15];
            // cin >> user_pnum;
            break;
        case 4:
            cout << "예매/예매확인" << endl;
            break;
        case 5:
        {
            system("clear");
            cout << "1. 경기 일정, 개최지, 중계 등 기본정보" << endl;
            cout << "2. 참가국 및 조별 정보" << endl;
            cout << "3. 조별 경기일정" << endl;
            cout << "4. 한국 감독/선수 명단 선수 정보" << endl;
            int choice;
            cin >> choice;
            switch (choice)
            {
            case 1:{
                system("clear");
                string line;
                ifstream file("basic.txt");
                if(file.is_open())
                {
                    while(getline(file,line))
                        cout << line << endl;
                }
                cout << "메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
                cin >> choice;
                if(choice>0)
                    menu_display();
                file.close();
                break;
            }
            case 2:{
                system("clear");
                string line;
                ifstream file("country.txt");
                if(file.is_open())
                {
                    while(getline(file,line))
                        cout << line << endl;
                }
                cout << "메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
                cin >> choice;
                if(choice>0)
                    menu_display();
                file.close();
                break;
            }
            case 3:{
                string line;
                ifstream file("game_schedule.txt");
                if(file.is_open())
                {
                    while(getline(file,line))
                        cout << line << endl;
                }
                cout << "메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
                cin >> choice;
                if(choice>0)
                    menu_display();
                file.close();
                break;
            }
            case 4:{
                string line;
                ifstream file("korean.txt");
                if(file.is_open())
                {
                    while(getline(file,line))
                        cout << line << endl;
                }
                cout << "메인페이지 이동을 원하시면 아무 숫자를 눌러주세요";
                cin >> choice;
                if(choice>0)
                    menu_display();
                file.close();
                break;
            }
            }
        }
        }
    }
}
int main()
{   
    start_asciiart();
    korea_asciiart();
    display();
    return 0;
}