#include <iostream>
using namespace std;
void swap(int x, int y){
    int t;
    t = x;
    x = y;
    y = t;
}
int main(){
    int a = 9;
    int b = 100;
    cout << "res___"<< a << "res___"<< b << endl;
    swap(a,b);
    cout << "res___"<< a << "res___"<< b << endl;
}