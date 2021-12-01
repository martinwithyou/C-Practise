#include <iostream>
using namespace std;
int x;
int y;
int addtwonum()
{
    //extern int x;
    //extren int y;
    x = 105;
    y = 106;
    return x+y;
}
int main(){
    int result;
    result = addtwonum();
     cout << "105+106=" << result << endl;
}