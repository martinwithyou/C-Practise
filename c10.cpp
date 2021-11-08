#include <iostream>
using namespace std;
int main()
{
    const int LENGTH = 5;
    const int WIDTH = 8;
    int area;
    int cir;
    area = LENGTH * WIDTH;
    cir = 2*(LENGTH * WIDTH);
    cout << "square:" << cir << endl;
}