#include <iostream>
using namespace std;
void t1();
int main(){
    t1();
    t1();
}
void t1(){
    static int y = 1;
    y++;
    cout << "********"<< y << endl;
}