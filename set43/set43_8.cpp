#include<iostream>
#include<math.h>
using namespace std;
class Point
{


    public:  int x,y;

    void getData(int p,int q)
    {
        x=p;
        y=q;

    }


};
class Distance
{
public:

      float getDistance(Point d1,Point d2)
      {
          float value1=(float)pow((d1.x-d2.x),2);
          float value2=(float)pow((d1.y-d2.y),2);
          float distance=(float)sqrt(value1+value2);
          return distance;
      }
};
class Area
{
public:
        float getArea(int a,int b,int c)
        {
            float s=(a+b+c)/2;
            float area=sqrt(s*(s-a)*(s-b)*(s-c));
            return area;
        }
};

int main()
{


    Point p1,p2,p3;
    p1.getData(34,34);
    p2.getData(11,3);

    Distance d1;

    float a =d1.getDistance(p1,p2);
    float b=d1.getDistance(p2,p3);
    float c=d1.getDistance(p1,p3);

    Area ar;

    cout<<"Area is="<<ar.getArea(a,b,c)<<endl;
    return 0;

}
