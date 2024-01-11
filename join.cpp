#include "display.h"

void display::file_save()
{
    system("clear");
    ofstream file("join.csv",ios::app);
    if(!file.is_open())
        cout << "error" << endl;
    else
    {
        cout << "회원가입" << endl;
        cout  << "성명:______\b\b\b\b\b\b";//박하늘별님구름햇님보다사랑스러우리
        string user_name;
        cin >> user_name;
        
        while(while_vector1(user_name) == 1)
        {
            cout << "중복된 이름 다시입력" << endl << "___\b\b\b";
            cin >> user_name;
        }
        file << user_name << ",";
        name_v.push_back(user_name);

        cout << "ID:_____\b\b\b\b\b";
        string user_id;
        cin >> user_id;

        while (while_vector2(user_id) == 1) // 중복검사
        {
            std::cout << "중복된 ID 다시입력" << std::endl << "ID:______\b\b\b\b\b\b";
            std::cin >> user_id;
        }
        file << user_id <<",";
        id_v.push_back(user_id);

        cout << "PW는 5글자이하로 입력해주세요" << endl;
        cout << "PW:_____\b\b\b\b\b";
        string user_pw;
        cin >> user_pw;
        
        while(user_pw.size() > 5)
            cout << "5글자이하로 입력해주세요.\n" << "PW:_____\b\b\b\b\b";

        while(while_vector3(user_pw) == 1)
        {
            cout << "중복된 PW 다시입력" << endl << "PW:_____\b\b\b\b\b";
            cin >> user_pw;
        }
        file << user_pw << ",";
        pw_v.push_back(user_pw);
    
        cout << "핸드폰번호(11자리, -제외) H.P:___________\b\b\b\b\b\b\b\b\b\b\b";
        string user_pnum;
        cin >> user_pnum;
        while(while_vector4(user_pnum) == 1)
        {
            cout << "중복된 핸드폰번호 다시입력" << endl << "H.P:___________\b\b\b\b\b\b\b\b\b\b\b";
            cin >> user_pnum;
        }
        file << user_pnum << ",";
        pnum_v.push_back(user_pnum);
        
        cout << "회원가입 완료" << endl;
        cout << "회원번호: " << rand()%10000 << endl; //회원번호 랜덤값
        file << '\n';
        sleep(2);
        file.close(); // 닫기
    }
    system("clear");
}

int display::while_vector1(string name)
{
    if(name_v.size() != 0)
    {
        for (int i = 0; i < name_v.size(); i++)
        {
            if(name_v[i] == name)
                return 1;
        }
    }
    return 0;
}
int display::while_vector2(string id)
{
    if (id_v.size() !=0)
    {
        for (int i = 0; i < id_v.size(); i++)
        {
            if(id_v[i] == id)
                return 1;
        }
    }
    return 0;
}
int display::while_vector3(string pw)
{
    if (pw_v.size() !=0)
    {
        for (int i = 0; i < pw_v.size(); i++)
        {
            if(pw_v[i] == pw)
                return 1;
        }
    }
    return 0;
}
int display::while_vector4(string pnum)
{
    if (pnum_v.size() !=0)
    {
        for (int i = 0; i < pnum_v.size(); i++)
        {
            if(pnum_v[i] == pnum)
                return 1;
        }
    }
    return 0;
}