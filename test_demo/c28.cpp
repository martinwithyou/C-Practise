#include <iostream>
using namespace std;
int my_max(int x, int y){
    if(x>y) return x;
    else return y;
}
int main(){
    int res;
    res = my_max(3,9);
    cout << "res___"<< res << endl;
}