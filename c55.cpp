#include <iostream>
using namespace std;
class Goods{
    public:
        int Amount;
        float Price;
};
int main(){
    Goods myPen;
    Goods myBook;
    double Total_Price = 0;
    myPen.Amount = 10;
    myPen.Price = 12;

    myBook.Amount = 10;
    myBook.Price = 1277;

    int total_Price = myPen.Price * myPen.Amount;
    cout << "___" << total_Price <<endl;
    total_Price = myBook.Price * myBook.Amount;
    cout << "___" << total_Price <<endl;
    return 0;
}