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
void f(struct student stu);
int main(){
    struct student stu = {"mei", 'm', 21, "20200101", 20};
    f(stu);
    return 0;
}
void f(struct student stu){
    cout << stu.name << "___" << stu.sex << "___" << stu.age  << "___" << stu.sid  << "___" << stu.score <<endl;
}