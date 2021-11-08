#include <iostream>
using namespace std;
int main(){
    int a,b;
    a = 5;
    b = 6;
    if(a==b){
        cout << "a==b" << endl;
    }else{
       cout << "a!=b" << endl; 
    }

    if(a>b){
        cout << "a>b" << endl;
    }else{
       cout << "a!>b" << endl; 
    }

    if(a<b){
        cout << "a<b" << endl;
    }else{
       cout << "a!<b" << endl; 
    }

    a = 7;
    b = 8;

    if(a>=b){
        cout << "a>=b" << endl;
    }else{
       cout << "a!>=b" << endl; 
    }
}