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
    Stu2.age = 20;
    cout << "********" << Stu2.age <<endl;
    return 0;
}