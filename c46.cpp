#include <string>
#include <iostream>
using namespace std;
struct Students{
    char name[50];
    char sex[10];
    int age;
};
int main(){
    struct Students Stu1;
    struct Students Stu2;
    strcpy_s(Stu1.name, sizeof(Stu1.name), "lixue");
    strcpy_s(Stu1.sex, sizeof(Stu1.sex), "femela");
    Stu1.age = 19;
    strcpy_s(Stu2.name, sizeof(Stu2.name), "zhangyan");
    strcpy_s(Stu2.sex, sizeof(Stu2.sex), "femela");
    Stu2.age = 20;
    cout << "********" <<endl;
    return 0;
}