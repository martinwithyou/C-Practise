#include <iostream>
using namespace std;
double circle(float r)
{
    double s;
    s = 3.14 * r * r;
    return s;
}
int main(){
    float t;
    double area;
    t = 100;
    area  = circle(t);
    cout << "unuse___"<< area << endl;
}