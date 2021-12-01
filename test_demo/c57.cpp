#include <iostream>
using namespace std;
class student{
    public:
        int id;
        int age;
        float score;
        void say(){
           cout << "___" << id <<endl;
           cout << "___" << age <<endl;  
           cout << "___" << score <<endl; 
        }

};
int main(){
    student stu;
    student *pStu = &stu;
    pStu->id = 1000;
    pStu->age = 10;
    pStu->score = 20;
    pStu->say();
    return 0;
}