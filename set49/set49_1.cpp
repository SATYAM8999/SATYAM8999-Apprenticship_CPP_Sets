#include<iostream>
#include<math.h>
using namespace std;

class Point2;
class Point1
{
    int x,y;
public:
    Point1(int a,int b)
    {
        x=a;
        y=b;
    }
    friend float getDistance(Point1,Point2);
};
class Point2
{
    int x,y;
public:
    Point2(int a,int b)
    {
        x=a;
        y=b;
    }
    friend float getDistance(Point1,Point2);
};
float getDistance(Point1 p1,Point2 p2)
{
    float distance=(float)sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));

    return distance;

}
int main()
{
    Point1 p1(2,3);
    Point2 p2(-2,0);

    cout<<"Distance is:"<<getDistance(p1,p2);
    return 0;



}
