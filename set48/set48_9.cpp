#include<iostream>
using namespace std;
class Two;
class Three;
class One
{
private:
    int a;
 public:
       One(int x)
       {
           a=x;
       }
    friend float average(One,Two,Three);
};
class Two
{
private:
    int b;
     public:
       Two(int x)
       {
           b=x;
       }
       friend float average(One,Two,Three);

};
class Three
{
private:
    int c;
     public:
       Three(int x)
       {
           c=x;
       }
        friend float average(One,Two,Three);

};
float average(One a1,Two t2,Three t3)
{
    float avg=(float)(a1.a+t2.b+t3.c)/3;
    return avg;
}
int main()
{
    One o1(10);
    Two t(20);
    Three th(5);
   float avg=average(o1,t,th);
   cout<<"Average of numbers is"<<avg<<endl;
    return 0;
}

