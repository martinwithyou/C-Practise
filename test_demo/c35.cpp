#include <iostream>
using namespace std;
long f2(int q){
    long c = 1;
    int i;
    for(i=1;i<=q;i++){
        c = c*i;
    }
    return c;
}
long f1(int p){
    int k;
    long r;
    long f2(int);
    k=p*p;
    r=f2(k);
    return r;
}
int main(){
    int i;
    long s = 0;
    for(i=2;i<=2;i++){
        s = s + f1(i);
    }
    cout << "********"<< s << endl;
}