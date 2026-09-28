#include<iostream>
using namespace std;
class Circle
{
public:

      float pi=3.14;
};
class Area:public Circle
{
public:
       float getArea(int radius)
       {
           return(pi*radius*radius);
       }


};
class Circumference:public Circle
{
public:
      float getCircumference(int radius)
      {
          return(2*pi*radius);
      }

};
int main()
{
    Area a1;
    cout<<"Area of Circle is :"<<a1.getArea(5);

    Circumference f1;
    cout<<"\nCircumference of Circle is :"<<f1.getCircumference(5);
    return 0;
}
