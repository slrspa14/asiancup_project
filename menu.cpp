#include <iostream>
#include <cstring>
#include "menu.h"
using namespace std;
void console::display()
{
    cout << "1. 로그인" << endl;
    cout << "2. 회원가입" << endl;
    cout << "3. ID/PW 찾기" << endl;
    cout << "4. 예매/예매확인" << endl;
    cout << "5. 아시안컵 정보" << endl;
    cout << "6. 종료" << endl;
}
void console::login_display()
{
    cout << "ID:____\b\b\b\b " << endl;
    char id[10];
    cin >> id;
    cout << "PW:____\b\b\b\b " << endl;
    char pw[10];
    cin >> pw;
}
void console::join_display()
{
    cout << "성명:___ \b\b\b" << endl;
    cout << "ID:____ \b\b\b\b" << endl;
    cout << "PW:____ \b\b\b\b" << endl;
    cout << "핸드폰번호(-제외):___________\b\b\b\b\b\b\b\b\b\b\b" << endl;
}
void console::forget_display()
{
    cout << "이름:___ \b\b\b" << endl;
    char name[30];
    cin >> name;
    cout << "핸드폰번호(-제외):___________\b\b\b\b\b\b\b\b\b\b\b" << endl;
    char pnum[15];
    cin >> pnum;
}
// void ticket_display()
// {

// }
// void asiancup_display()
// {

// }