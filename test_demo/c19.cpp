#include <iostream>
using namespace std;
int main(){
    int x,y;
    x = 5;
    y = x++;
    cout << "square_" << y << endl;
    cout << "square_" << x << endl;
    x = 5;
    y = x--;
    cout << "square_" << y << endl;
    cout << "square_" << x << endl;
    x = 5;
    y = ++x;
    cout << "square_" << y << endl;
    cout << "square_" << x << endl;
    x = 5;
    y = --x;
    cout << "square_" << y << endl;
    cout << "square_" << x << endl;
}