#include <iostream>

using namespace std;

int main()
{
    enum color {red =21,green,blue};
    color c;
    c = blue;
    cout << c <<endl;
    cout << "Hello World!" << endl;
    cout << "size of char:" << sizeof(char)<<endl;
    cout << "size of int:" <<sizeof(int)<<endl;
    cout << "size of short int:" << sizeof(short int)<<endl;
    cout << "size of long int:" <<sizeof(long int)<<endl;
    cout << "size of float:" << sizeof(float)<<endl;
    cout << "size of double:" <<sizeof(double)<<endl;
    cout << "size of wchar_t:" <<sizeof(wchar_t)<<endl;
    return 0;
}
