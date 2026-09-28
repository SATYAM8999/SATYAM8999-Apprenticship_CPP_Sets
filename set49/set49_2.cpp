#include<iostream>
using namespace std;
#include<math.h>
class Two;
class Three;
class One
{
    int x,y;
public:
      One()
      {
          x=8;
          y=7;
      }
      void showOne()
      {
          cout<<x<<" "<<y<<endl;
      }
      friend float getDistance(One,Two,Three);

};
class Two
{
    int x,y;
    public:
      Two(int x,int y)
      {
          this->x=x;
          this->y=y;
      }
      void showTwo()
      {
          cout<<x<<" "<<y<<endl;
      }
      friend float getDistance(One,Two,Three);

};
class Three
{
    int x,y;
public:
      Three(int x,int y)
      {
          this->x=x;
          this->y=y;
      }
      void showThree()
      {
          cout<<x<<" "<<y<<endl;
      }
      friend float getDistance(One,Two,Three);

};
float getDistance(One o1,Two t2,Three t3)
{
    float a=(float)sqrt(pow(o1.x-t2.x,2)+pow(o1.y-t2.y,2));
    float b=(float)sqrt(pow(t2.x-t3.x,2)+pow(t2.y-t3.y,2));
    float c=(float)sqrt(pow(o1.x-t3.x,2)+pow(o1.y-t3.y,2));

    float s=(a+b+c)/2;
    float distance=sqrt(s*(s-a)*(s-b)*(s-c));

    return distance;

}
int main()
{
    One on;
    Two tw(5,6);
    Three th(1,3);
    on.showOne();
    tw.showTwo();
    th.showThree();

    cout<<"Distance is:"<<getDistance(on,tw,th);
    return 0;
}

