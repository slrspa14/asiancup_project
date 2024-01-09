#include "join.h"
void join_data::file_save()
{
    string line;
    ofstream file("join.csv",ios::app);
    if(file.is_open())
    {
        cout << "회원가입" << endl;
        cout << "성명: ___\b\b\b";
        string user_name;
        cin >> user_name;
        //cout << name_v[0] << endl; // 확인용
        while(1)
        {
            if(while_vector(user_name) == 1)
            {
                cout << "중복된 이름 다시입력" << endl << "_____\b\b\b\b\b";
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
            if(while_vector(user_id) == 1)
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
        file << user_pw << ",";
        pw_v.push_back(user_pw);

        cout << "핸드폰번호(-제외) ___________\b\b\b\b\b\b\b\b\b\b\b";
        string user_pnum;
        cin >> user_pnum;
        file << user_pnum << ",";
        pnum_v.push_back(user_pnum);

        cout << "회원가입 완료" << endl;
        cout << "고유회원번호: " << rand()%10000 << endl;
        file << '\n';
        file.close();
    }
    else
        cout << "error" << endl;
    
}
int join_data::while_vector(string fuck)
{
    if(name_v.size() != 0)
    {
        for (int i = 0; i < name_v.size(); i++)
        {
            if(name_v[i] == fuck)
            {
                return 1;
            }
        }
    }
    else if (name_v.size() == 0)
    {
        return 0;
    }
}

int main()
{
    join_data a;
    while(1)
    {
        a.file_save();
    }
    return 0;
}