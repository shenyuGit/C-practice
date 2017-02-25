#include <iostream>

using namespace std;
void swap(int&,int&);
int main()
{

    int a = 100;
    int b = 200;

    cout << "before:a="<<a<<endl;
    cout << "before:b="<<b<<endl;

    swap(a,b);

    cout <<"after:a="<<a<<endl;
    cout <<"after:b="<<b<<endl;
    return 0;
}

void swap(int& x,int& y)
{
    int temp;
    temp = x;
    x  = y;
    y = temp;
}
