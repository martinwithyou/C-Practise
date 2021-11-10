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
    struct student stu = {"mei", 'm', 21, "20200101", 20};
    struct student *p;
    p = &stu;
    cout << (*p).name << "___" << (*p).score <<endl;
    return 0;
}