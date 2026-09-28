#include<iostream>
using namespace std;
class Two;
class One
{
private:
    float a;
 public:
       One(float x)
       {
           a=x;
       }
    friend float findBig(One,Two);
};
class Two
{
private:
    float b;
     public:
       Two(float x)
       {
           b=x;
       }
       friend float findBig(One,Two);

};

float findBig(One a1,Two t2)
{
    float big=0;
      if(a1.a>t2.b)
      {
          big=a1.a;
      }
      else
        big=t2.b;
    return big;
}
int main()
{
    One o1(10.44);
    Two t(60.77);
   float big=findBig(o1,t);
   cout<<"Biggest numbers is"<<big<<endl;
    return 0;
}


