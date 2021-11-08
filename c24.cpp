#include <iostream>
using namespace std;
int main(){
    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e;
    e = (a+b) * c/d;
    cout << "result___" << e << endl;
    e = ((a+b)*c)/d;
    cout << "result___" << e << endl;
    e = (a+b)*(c/d);
    cout << "result___" << e << endl;
    e = a+(b*c)/d;
    cout << "result___" << e << endl;
}