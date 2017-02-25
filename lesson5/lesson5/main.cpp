#include <iostream>

using namespace std;

class Line
{
public:
    int getLength();
    Line(int len);                       // 简单的构造函数
    Line(const Line &obj);       // 拷贝构造函数
    ~Line();                               // 析构函数
private:
    int *ptr;
};

Line::Line(int len)
{
    cout<<"Normal constructor allocating ptr" << endl;
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj)
{
    cout<<"Copy constructor allocating ptr."<<endl;
    ptr = new int;
    *ptr = *obj.ptr;
}
Line::~Line()
{
    cout << "Freeing memory!"<<endl;
    delete ptr;
}
int Line::getLength()
{
    return *ptr;
}
void display(Line obj)
{
    cout<<"length of line:"<<obj.getLength()<<endl;
    cout <<"sizeof length:"<<sizeof  obj.getLength()<<endl;
}
int main()
{
    Line line1(10);
    Line line2 = line1;

    display(line1);
    display(line2);
    return 0;
}
