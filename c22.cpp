#include <iostream>
using namespace std;
int main(){
    int a;
    a = 5;
    int c;
    c = a;
    cout << "result___" << c << endl;
    c += a;
    cout << "result___" << c << endl;
    c -= a;
    cout << "result___" << c << endl;
    c *= a;
    cout << "result___" << c << endl;
    c /= a;
    cout << "result___" << c << endl;
    c = 100;
    c %= a;
    cout << "result___" << c << endl;
    c <<= 2;
    cout << "result___" << c << endl;
    c >>= 2;
    cout << "result___" << c << endl;
    c &= 2;
    cout << "result___" << c << endl;
    c ^= 2;
    cout << "result___" << c << endl;
    c |= 2;
    cout << "result___" << c << endl;
}