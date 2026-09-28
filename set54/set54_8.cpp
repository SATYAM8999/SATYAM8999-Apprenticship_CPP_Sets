#include<iostream>
using namespace std;
class One
{
    protected:int a;
              void getOne(int x)
              {
                  a=x;
              }
};
class Two:public One
{
    protected:int b;
              void getTwo(int y)
              {
                  b=y;
              }
};
class Three:public Two
{
    protected:int c;
              void getThree(int z)
              {
                  c=z;
              }
    public:
              float getAverage(int x,int y,int z)
              {
                  getOne(x);
                  getTwo(y);
                  getThree(z);

                  float avg=(float)(a+b+c)/3;
                  return avg;
              }
};
int main()
{
    Three th;
    cout<<"Average of Numbers is:"<<th.getAverage(10,20,30);
    return 0;

}
