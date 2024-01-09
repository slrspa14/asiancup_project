#ifndef JOIN_H
#define JOIN_H
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <unistd.h>
#include <vector>

using namespace std;

class join_data
{
    public:

    vector<string> name_v;
    vector<string> id_v;
    vector<string> pw_v;
    vector<string> pnum_v;

    void file_save();
    int while_vector1(string name);
    int while_vector2(string id);
    int while_vector3(string pw);
    int while_vector4(string pnum);
};
#endif