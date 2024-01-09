#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <unistd.h>
#include <vector>
using namespace std;
class join_data{
    public:
    vector<string> name_v;
    vector<string> id_v;
    vector<string> pw_v;
    vector<string> pnum_v;
    void file_save();
    int while_vector(string fuck);
};