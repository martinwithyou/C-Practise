#include <iostream>
using namespace std;
int main(){
    int sales = 999;
    switch(sales){
        case 'a':
            cout << "a___" << endl;
            break;
        case 'b':
            cout << "b___" << endl;
            break;
        case 'c':
            cout << "c___" << endl;
            break;
        case 'd':
            cout << "d___" << endl;
            break;
        case 'e':
            cout << "e___" << endl;
            break;
        case 999:
            cout << 999 << endl;
            break;
        default:
            cout << "unuse___" << endl;
    }
}