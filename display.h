#ifndef DISPLAY_H
#define DISPLAY_H
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <unistd.h>
#include <vector>

using namespace std;

class display
{
    private:
    int login_count = 0;
    vector<string> name_v;
    vector<string> id_v;
    vector<string> pw_v;
    vector<string> pnum_v;
    public:
    void start_asciiart();
    void korea_asciiart();
    void dis();
    void menu_display();
    void log_in();
    void file_save();
    void find();
    void ticketing();
    int while_vector1(string name);
    int while_vector2(string id);
    int while_vector3(string pw);
    int while_vector4(string pnum);
    int strcmp_id(string log_id);
    int strcmp_pw(string log_pw);
    int strcmp_name(string user_name);
    int strcmp_pnum(string user_pnum);
};
#endif