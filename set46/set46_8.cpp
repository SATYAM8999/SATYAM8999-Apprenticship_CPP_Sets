#include<iostream>
#include<math.h>
using namespace std;
class Point
{
    public:
        int x,y;
           Point()
           {
               x=2;
               y=1;
           }
           Point(int x,int y)
           {
               this->x=x;
               this->y=y;
           }
           Point(Point &p)
           {
               x=p.x;
               y=p.y;
           }
           void showData()
           {
               cout<<x<<"  "<<y<<endl;
           }
};
class Area
{
public:
      float getArea(Point p1,Point p2,Point p3)
      {
          float a=getDistance(p1,p2);
          float b=getDistance(p2,p3);
          float c=getDistance(p1,p3);

          float s=(float)(a+b+c)/2;

          float dist1=sqrt(s*(s-a)*(s-b)*(s-c));
          return dist1;
      }
      float getDistance(Point p1,Point p2)
      {
          int  v1=pow((p1.x-p2.x),2);
          int  v2=pow((p1.y-p2.y),2);
          float dist=sqrt(v1+v2);
          return dist;
      }
};
int main()
{
    Point p1,p2(6,4),temp(4,7);
    Point p3(temp);
    p1.showData();
    p2.showData();
    p3.showData();


    Area a1;

    float area=(float)a1.getArea(p1,p2,p3);
    cout<<"Area is: "<<area;

    return 0;
}

