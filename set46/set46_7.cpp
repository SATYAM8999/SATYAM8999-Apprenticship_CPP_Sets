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

           void showData()
           {
               cout<<x<<"  "<<y<<endl;
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
    Point p1,p2(6,4);

    p1.showData();
    p2.showData();





    float area=p1.getDistance(p1,p2);
    cout<<"Area is: "<<area;

    return 0;
}

