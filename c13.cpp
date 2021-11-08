#include <iostream>
using namespace std;
int ar1,ar2,ar3;
int vol(int a,int b,int c)
{
    int v;
    v=a*b*c;
    ar1 = a*b;
    ar2 = b*c;
    ar3 = a*c;
    return v;
};
int main(){
    int v,l,w,h;
    l=100;
    w=200;
    h=300;
    v=vol(l,w,h);
    cout << "square_" << v << endl;
}