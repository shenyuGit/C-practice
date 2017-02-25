#include <iostream>

using namespace std;

class Box
{
public :
    double length;
    double breadth;
    double height;

    double getVolume();
    void setLength(double len);
    void setBreadth(double bre);
    void setHeight(double hei);
};

double Box::getVolume()
{
    return length*breadth*height;
}
void Box::setLength(double len)
{
    length = len;
}
void Box::setHeight(double hei)
{
    height = hei;
}
void Box::setBreadth(double bre)
{
    breadth = bre;
}
int main()
{
    Box Box1;
    Box Box2;
    double volume = 0.0;

   Box1.setLength(2.0);
   Box1.setHeight(3.0);
   Box1.setBreadth(4.0);

   Box2.setLength(4.0);
   Box2.setHeight(8.0);
   Box2.setBreadth(8.0);

   // volume = Box1.height*Box1.length*Box1.breadth;
   volume = Box1.getVolume();
    cout<<"the volume of Box1 is :"<<volume<<endl;

   // volume = Box2.height*Box2.length*Box2.breadth;
    volume = Box2.getVolume();
    cout<<"the volume of Box2 is :"<<volume<<endl;
    return 0;
}
