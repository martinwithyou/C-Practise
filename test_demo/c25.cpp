#include <iostream>
using namespace std;
int main(){
    int sales = 200000;
    if(sales<=3000){
        cout << "unfinish___" << endl;
    }else{
       if(sales<=4000){
        cout << "finished___" << endl;
       }else{
           if(sales<=6000){
                cout << "middle___" << endl;
           }else{
                if(sales<=8000){
                        cout << "nice___" << endl;
                }else{
                        cout << "good___" << endl;
                }
           }
       }
    }
}