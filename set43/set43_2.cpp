#include<iostream>
#include<math.h>
using namespace std;

class Point
{

    public:int a,b;
    void getData(int x,int y)
    {

        a=x;
        b=y;
    }
    float getDistance(Point p1,Point p2)
    {
        float value1=(float)pow((p1.a-p2.a),2);
        float value2=(float)pow((p1.b-p2.b),2);
        float distance=(float)sqrt(value1+value2);
        return distance;


    }
};
int main()
{

    Point P1,P2;

    P1.getData(5,10);
    P2.getData(51,20);

    float dist=P1.getDistance(P1,P2);

    cout<<"Distance="<<dist;
    return 0;

}
