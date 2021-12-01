#include <iostream>
using namespace std;
class Circle{
    public:
       double PI;
       double Radius;
       void set_r(double r);
       double get_area();
};
void Circle::set_r(double r){
        Radius = r;
}
double Circle::get_area(){
        return PI * Radius * Radius;
}
int main(){
    Circle c;
    double s;
    c.PI = 3.14;
    c.set_r(50);
    s = c.get_area();
    cout << "___" << s <<endl; 
    c.Radius = 20;
    s = c.get_area();
    cout << "___" << s <<endl; 
    return 0;
}