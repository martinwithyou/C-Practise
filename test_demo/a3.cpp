#include <iostream>
using namespace std;
int main()
{
    cout << "char___:" << "area__:" << sizeof(char) << endl;
    cout << "biggest___:" << (numeric_limits<char>::max)() << endl;
    cout << "smallest___:" << (numeric_limits<char>::min)() << endl; 

    cout << "double___:" << "area__:" << sizeof(double) << endl;
    cout << "biggest___:" << (numeric_limits<double>::max)() << endl;
    cout << "smallest___:" << (numeric_limits<double>::min)() << endl; 

    cout << "long double___:" << "area__:" << sizeof(long double) << endl;
    cout << "biggest___:" << (numeric_limits<long double>::max)() << endl;
    cout << "smallest___:" << (numeric_limits<long double>::min)() << endl; 

}