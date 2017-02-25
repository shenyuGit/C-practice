#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cout << "please input a num:"<<endl;
    cin >>n;
    int *p = new int[n];
    int a[10]={0};
    int *q = new int;
    *q = n;
    cout <<"the value of n is "<<q[0]<<endl;
    cout <<"the value of n is "<<*q<<endl;
    cout <<"the length of array p is :"<<sizeof p<<endl;  //the length of address is the same in one system
    cout <<"the length of array q is :"<<sizeof q<<endl;  //so sizeof p = sizeof q
    cout <<"the length of array a is :"<<sizeof a<<endl;
    cout <<"the length of n is :"<<sizeof n<<endl;
    cout << "Hello World!" << endl;
    delete q;
    delete [] p;

    return 0;
}
