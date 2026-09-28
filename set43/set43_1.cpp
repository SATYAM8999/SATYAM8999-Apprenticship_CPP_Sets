#include<iostream>
#include<math.h>
using namespace std;

class Point
{


    public: int x,y;
            void getData(int p,int q)
            {
                x=p;
                y=q;


            }
            float getDistance(Point p)
            {
                float value1=(float)pow((x-p.x),2);
                float value2=(float)pow((y-p.y),2);
                float distance=(sqrt)(value1+value2);
                return distance;

            }


};
int main()
{
    Point p1,p2;

    p1.getData(10,20);
    p2.getData(5,3);

    float dist=p1.getDistance(p2);
    cout<<"Distance="<<dist;
    return 0;

}
