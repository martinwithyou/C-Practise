#include <iostream>
using namespace std;
int cube(float x){
    float z;
    z = x * x * x;
    return z;
}
int main(){
    float a = 6;
    float b;
    b = cube(a);
    cout << "res___"<< b << endl;
}