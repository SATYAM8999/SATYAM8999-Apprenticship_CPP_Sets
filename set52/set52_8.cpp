#include<iostream>
using namespace std;
class One
{
public:
      int a;
      One()
      {
          a=10;
      }
};
class Two:public One
{
public:
       int b;
       Two()
       {
           b=20;
       }
       void getSum()
       {
           cout<<"Sum of Two Numbers is:"<<(a+b);
       }
};
int main()
{
    Two th;
    th.getSum();



    return 0;

}
