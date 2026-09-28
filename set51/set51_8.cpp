#include<iostream>
#include<math.h>
using namespace std;
class Point1
{
public:int x1,y1;

      void getdata(int a,int b)
      {
          x1=a;
          y1=b;
      }

};
class Point2
{
    public:int x2,y2;
           void accept(int a,int b)
           {
               x2=a;
               y2=b;
           }
};
class Distance:public Point1,public Point2
{
public:
        float getDistance()
        {
            float value1=(float)pow(x1-x2,2);
            float value2=(float)pow(y1-y2,2);
            float dist=sqrt(value1+value2);
            return dist;
        }
};
int main()
{
    Distance d1;
    d1.getdata(5,4);
    d1.accept(7,4);
    cout<<"Distance Between Two Points is:"<<d1.getDistance();
    return 0;
}
