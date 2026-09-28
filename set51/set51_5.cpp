#include<iostream>
using namespace std;
class One
{
  public:int a;
       void getDataA(int x)
       {
           a=x;
       }
};
class Two:public One
{
public:
       int b;
       void getDataB(int x)
       {
           b=x;
       }
};
class Three:public Two
{
    public:int c;
          void getDataC(int x)
          {
              c=x;
          }
          float getAverage()
          {
              float avg=(float)(a+b+c)/3;
              return avg;
          }
};
int main()
{
    Three th;
    th.getDataA(10);
    th.getDataB(30);
    th.getDataC(20);
    cout<<"Average of Numbers is:"<<th.getAverage();
    return 0;
}
