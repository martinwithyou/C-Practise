#include <cstring>
#include <iostream>
using namespace std;
struct student{
    char name[50];
    char sex;
    int age;
    char sid[50];
    float score;
};
int main(){
    struct student stu[3] = {
        {"zhang", 'm', 21, "20200101", 30},
        {"xiao", 'm', 21, "20200101", 60},
        {"mei", 'm', 21, "20200101", 20},
    };
    struct student *p;
    cout << "name" << "___" << "sex" << "___" << "age"  << "___" << "sid"  << "___" << "score" <<endl;
    p = stu;
    for(int i=0;i<3;i++,p++){
        cout << (*p).name << "___" << (*p).sex << "___" << (*p).age  << "___" << (*p).sid  << "___" << (*p).score <<endl;
    } 
    return 0;
}