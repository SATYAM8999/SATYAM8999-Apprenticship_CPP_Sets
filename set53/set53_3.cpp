#include<iostream>
using namespace std;
class One
{
public:
       virtual void fun()
       {
           cout<<"inside the fun() of One class"<<endl;
       }
};
class Two:public One
{
public:
       void fun()
       {
           cout<<"inside in the fun() of Two Class"<<endl;
       }
};
class Three:public Two
{
public:
        void fun()
        {
            cout<<"Inside in fun() of Three class"<<endl;
        }
};
int main()
{
    One o1,*optr;
    optr=&o1;
    optr->fun();


    Two t;
    optr=&t;
    optr->fun();

    Three th;
    optr=&th;
    optr->fun();
    return 0;
}
