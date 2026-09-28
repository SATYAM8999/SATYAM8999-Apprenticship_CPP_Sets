#include<iostream>
#include<math.h>
using namespace std;
class Center
{
public:
        int x1,y1;
          void getCenter(int a,int b)
          {
              x1=a;
              y1=b;
          }
};
class Point1:public Center
{
public:
       int x2,y2;
       void  getPoint1(int a,int b)
       {
           x2=a;
           y2=b;
       }
       void isPointLiesOnCricumference1(int red)
       {

           float value1=(float)pow(x1-x2,2);
           float value2=(float)pow(y1-y2,2);
           float dist=sqrt(value1+value2);
           if(dist==red)
           {
               cout<<"point lies on Circumference\n";
           }
           else
           {
               cout<<"\npoint does not lies on Circumference";
           }
       }
};
class Point2:public Center
{
public:
       int x2,y2;
       void  getPoint2(int a,int b)
       {
           x2=a;
           y2=b;
       }
       void isPointLiesOnCricumference1(int red)
       {

           float value1=(float)pow(x1-x2,2);
           float value2=(float)pow(y1-y2,2);
           float dist=sqrt(value1+value2);
           if(dist==red)
           {
               cout<<"Point2 lies on Circumference\n";
           }
           else
           {
               cout<<"\nPoint2 does not lies on Circumference";
           }
       }
};
class Point3:public Center
{
public:
       int x2,y2;
       void  getPoint3(int a,int b)
       {
           x2=a;
           y2=b;
       }
       void isPointLiesOnCricumference3(int red)
       {

           float value1=(float)pow(x1-x2,2);
           float value2=(float)pow(y1-y2,2);
           float dist=sqrt(value1+value2);
           if(dist==red)
           {
               cout<<"Point3 lies on Circumference\n";
           }
           else
           {
               cout<<"\nPoint3 does not lies on Circumference";
           }
       }
};
int main()
{
    Point1 p1;
    p1.getCenter(5,10);
    p1.getPoint1(5,5);
    p1.isPointLiesOnCricumference1(5);
    cout<<endl;
    Point2 p2;
    p2.getCenter(5,10);
    p2.getPoint2(5,5);
    p2.isPointLiesOnCricumference1(5);
    Point3 p3;
    p3.getCenter(5,10);
    p3.getPoint3(5,4);
    p3.isPointLiesOnCricumference3(6);


    return 0;
}

