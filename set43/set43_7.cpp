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

int main()
{


    Point p1,p2;
    p1.getData(11,2);
    p2.getData(4,3);

    Distance d1;

    float dist =d1.getDistance(p1,p2);
    cout<<"Distance="<<dist<<endl;
    return 0;

}
