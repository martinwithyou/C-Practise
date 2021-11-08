#include <iostream>
using namespace std;
int add(int x, int y){
    return x+y;
}
int main(){
    int res;
    res = add(3,9);
    cout << "res___"<< res << endl;
    res = add(10,90);
    cout << "res___"<< res << endl;
    res = add(10,9);
    cout << "res___"<< res << endl;
}