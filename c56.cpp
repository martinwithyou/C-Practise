#include <iostream>
using namespace std;
class Goods{
    public:
        int Amount;
        float Price;
        double Total_Price();
        void G_Amount(int value1);
        void G_Price(double value2);
};
double Goods::Total_Price(){
    return Amount * Price;
}
void Goods::G_Amount(int value1){
    Amount = value1;
}
void Goods::G_Price(double value2){
    Price = value2;
}
int main(){
    Goods myPen;
    Goods myBook;
    double t = 0;
    myPen.G_Amount(10);
    myPen.G_Price(0);
    myBook.G_Amount(10);
    myBook.G_Price(120);

    t = myPen.Total_Price();
    cout << "___" << t<<endl;
     t = myBook.Total_Price();
    cout << "___" << t <<endl;
    return 0;
}