#include <string>
#include <iostream>
using namespace std;
struct Students{
    char name[50];
    char sex;
    int age;
    char sid[50];
    float score;
};
int main(){
    struct Students Stu1[3] = {
        {"zhang", 'm', 21, '20200101', 90},
        {"zhang", 'm', 21, '20200101', 90},
        {"zhang", 'm', 21, '20200101', 90},
    };
    return 0;
}