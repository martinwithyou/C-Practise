#include <iostream>
using namespace std;
int main()
{
    cout << "float___:" << "area__:" << sizeof(float) << endl;
    cout << "biggest___:" << (numeric_limits<float>::max)() << endl;
    cout << "smallest___:" << (numeric_limits<float>::min)() << endl; 

    cout << "double___:" << "area__:" << sizeof(double) << endl;
    cout << "biggest___:" << (numeric_limits<double>::max)() << endl;
    cout << "smallest___:" << (numeric_limits<double>::min)() << endl; 

    cout << "long double___:" << "area__:" << sizeof(long double) << endl;
    cout << "biggest___:" << (numeric_limits<long double>::max)() << endl;
    cout << "smallest___:" << (numeric_limits<long double>::min)() << endl; 

}