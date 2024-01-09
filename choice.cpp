#include "choice.h"
// #include <vector>

void join_data::file_save()
{
    string line;
    ofstream file("join.csv",ios::app);
    if(!file.is_open())
        cout << "error" << endl;
    else
    {
        cout << "회원가입" << endl;
        cout << "성명: ___\b\b\b";
        string user_name;
        cin >> user_name;
        //name_v.push_back(user_name);
        //cout << name_v[0] << endl; // 확인용
        while(1)
        {
            if(while_vector1(user_name) == 1)
            {
                cout << "중복된 이름 다시입력" << endl << "___\b\b\b";
                cin >> user_name;
            }
            else
            {
                file << user_name << ",";
                name_v.push_back(user_name);
                break;
            }
        }

        cout << "ID: _____\b\b\b\b\b";
        string user_id;
        cin >> user_id;
        while(1)
        {
            if(while_vector2(user_id) == 1)
            {
                cout << "중복된 ID 다시입력" << endl << "_____\b\b\b\b\b";
                cin >> user_id;
            }
            else
            {   
                file << user_id << ",";
                id_v.push_back(user_id);
                break;
            }
        }

        cout << "PW: _____\b\b\b\b\b";
        string user_pw;
        cin >> user_pw;
        while(1)
        {
            if(while_vector3(user_pw) == 1)
            {
                cout << "중복된 PW 다시입력" << endl << "_____\b\b\b\b\b";
                cin >> user_pw;
            }
            else
            {   
                file << user_pw << ",";
                pw_v.push_back(user_pw);
                break;
            }
        }
        
        cout << "핸드폰번호(-제외) ___________\b\b\b\b\b\b\b\b\b\b\b";
        string user_pnum;
        cin >> user_pnum;
        while(1)
        {
            if(while_vector4(user_pnum) == 1)
            {
                cout << "중복된 핸드폰번호 다시입력" << endl << "_____\b\b\b\b\b";
                cin >> user_pnum;
            }
            else
            {   
                file << user_pnum << ",";
                pnum_v.push_back(user_pnum);
                break;
            }
        }
        cout << "회원가입 완료" << endl;
        cout << "회원번호: " << rand()%10000 << endl; //회원번호 랜덤값
        file << '\n';
        sleep(1);
        file.close(); // 닫기
    }
    system("clear");
}
int join_data::while_vector1(string name)
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
int join_data::while_vector2(string id)
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
int join_data::while_vector3(string pw)
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
int join_data::while_vector4(string pnum)
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