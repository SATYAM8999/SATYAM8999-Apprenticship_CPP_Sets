#include<iostream>
#include<math.h>
using namespace std;
class Point1
{
public:
       int x1,y1;
       void getP1(int a,int b)
       {
           x1=a;
           y1=b;
       }
};
class Point2
{
public:
       int x2,y2;
       void getP2(int a,int b)
       {
           x2=a;
           y2=b;
       }
};
class Point3
{
public:
       int x3,y3;
       void getP3(int a,int b)
       {
           x3=a;
           y3=b;
       }
};
class Triangle:public Point1,public Point2,public Point3
{
public:
        void GetAreaOfTriangle()
        {
        float a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        float b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
        float c=sqrt(pow((x1-x3),2)+pow((y1-y3),2));

        //cout<<a<<"\n"<<b<<"\n"<<c<<endl;
         float s=(float)(a+b+c)/2;
         //cout<<s<<endl;

         float area=sqrt(s*(s-a)*(s-b)*(s-c));

         cout<<"Area of Triangle is:"<<area<<endl;

        }


};
int main()
{
    Triangle t1;
    t1.getP1(1,2);
    t1.getP2(4,6);
    t1.getP3(5,2);
    t1.GetAreaOfTriangle();
    return 0;
}
