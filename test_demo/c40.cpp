#include <iostream>
using namespace std;
int max(int, int);
int main(){
    extern int a , b;
    int z = max(a,b);
    cout << "********"<< z << endl;
}
int a = 15;
int b = 10;
int max(int x, int y){
    int z;
    z = x > y ? x:y;
    return z;
}