#include <iostream>

using namespace std;

class Line
{
   public:
      void setLength( double len );
      double getLength( void );
      Line();
      ~Line();
private:
       double length;
};

//Line::Line(double len)
//{
//    cout<<"Object is being created,length = "<<len<<endl;
//    length = len;
//}
//Line::Line(double len):length(len)
//{
//    cout<<"Object is being created,length = "<<len<<endl;
//}

Line::Line()
{
    cout << "Object is being created"<<endl;
}
Line::~Line()
{
    cout <<"Object is being deleted"<<endl;
}
// 成员函数定义
double Line::getLength(void)
{
    return length ;
}

void Line::setLength( double len )
{
    length = len;
}

// 程序的主函数
int main( )
{
   Line line;
   // 设置长度
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;
   return 0;
}
