#include <iostream>
using namespace std;
int main(){
    int a,b;
    a = 5;
    b = 6;
    int c;
    if(a&&b){
        cout << "条件为真" << endl;
    }else{
       cout << "条件为假" << endl; 
    }

    if(a||b){
        cout << "条件为真" << endl;
    }else{
       cout << "条件为假" << endl; 
    }

    a = 0;
    b = 10;
    if(a&&b){
        cout << "条件为真" << endl;
    }else{
       cout << "条件为假" << endl; 
    }

    if(!(a&&b)){
        cout << "条件为真" << endl;
    }


}