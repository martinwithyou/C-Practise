#include <iostream>
using namespace std;
class time{
    public:
       time(int, int, int);
       void show_time();
    private:
       int hour;
       int minuter;
       int sec;
};
time::time(int h,int m, int s){
       hour = h;
       minuter = m;
       sec = s;
};
void time::show_time(){
        cout << "___"<< hour <<endl;
        cout << "___"<< minuter <<endl;  
        cout << "___"<< sec <<endl; 
};
void main(){ 
    time t1(13,57,30);
    time t2(13,57,30);
    t1.show_time();
    t2.show_time();
}