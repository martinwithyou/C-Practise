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
        {"zhang", 'm', 21, '20200101', 30},
        {"xiao", 'm', 21, '20200101', 60},
        {"mei", 'm', 21, '20200101', 20},
    };
    cout << "name" << "___" << "sex" << "___" << "age"  << "___" << "sid"  << "___" << "score" <<endl;
    int i;
    for(i=0;i<3;i++){
        cout << stu[i].name << "___" << stu[i].sex << "___" << stu[i].age  << "___" << stu[i].sid  << "___" << stu[i].score <<endl;
    } 
    return 0;
}