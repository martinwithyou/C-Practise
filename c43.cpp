#include <iostream>
using namespace std;
int main(){
    int i, a[10];
    for(i=0;i<10;i++){
        a[i] = i;
    }
    for(i=0;i<=10;i++){
        cout << "********"<< a[i] <<endl;
    }
}