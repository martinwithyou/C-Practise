#include <iostream>
using namespace std;
int main()
{
    cout << "short___:" << "area__:" << sizeof(short) << endl;
    cout << "biggest___:" << (numeric_limits<short>::max)() << endl;
    cout << "smallest___:" << (numeric_limits<short>::min)() << endl; 

    cout << "int___:" << "area__:" << sizeof(int) << endl;
    cout << "biggest___:" << (numeric_limits<int>::max)() << endl;
    cout << "smallest___:" << (numeric_limits<int>::min)() << endl; 

    cout << "unsigned___:" << "area__:" << sizeof(unsigned) << endl;
    cout << "biggest___:" << (numeric_limits<unsigned>::max)() << endl;
    cout << "smallest___:" << (numeric_limits<unsigned>::min)() << endl; 

    cout << "long___:" << "area__:" << sizeof(long) << endl;
    cout << "biggest___:" << (numeric_limits<long>::max)() << endl;
    cout << "smallest___:" << (numeric_limits<long>::min)() << endl; 

    cout << "unsigned long___:" << "area__:" << sizeof(unsigned long) << endl;
    cout << "biggest___:" << (numeric_limits<unsigned long>::max)() << endl;
    cout << "smallest___:" << (numeric_limits<unsigned long>::min)() << endl; 
}