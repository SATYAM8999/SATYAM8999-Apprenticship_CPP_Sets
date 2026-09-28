#include<iostream>
using namespace std;
class Square
{
public: int side;
         virtual void findArea()
         {
             side=10;
             int area=side*side;
             cout<<"\nArea of Square is:"<<area;
         }

};
class Rectangle:public Square
{
public: int length,bredth;
         void findArea()
         {
             length=10;
             bredth=7;
             int area=length*bredth;
             cout<<"\nArea of Rectangle is:"<<area;
         }
};
class Triangle:public Rectangle
{
public: int bredth,height;
         void findArea()
         {
             bredth=10;
             height=20;
             float area=(float)0.5*(bredth*height);
             cout<<"\nArea of Triangle is:"<<area;
         }
};
class Circle:public Triangle
{
public:int red;
         void findArea()
         {
             red=20;
             float area=(float)3.14*red*red;
             cout<<"\nArea of circle is:"<<area;
         }
};
int main()
{
    Square s;
    Square *ptr;
    ptr=&s;
    ptr->findArea();


    Rectangle re;
    ptr=&re;
    ptr->findArea();

    Triangle tr;
    ptr=&tr;
    ptr->findArea();

    Circle cr;
    ptr=&cr;
    ptr->findArea();



}


