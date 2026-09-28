#include<iostream>
using namespace std;
class Test
{

    public:int a=10;
           virtual void fun()
           {
               cout<<"inside fun() of Test Class: "<<a<<endl;
           }
};
class Sample:public Test
{
public:
        void fun()
        {
            cout<<"Inside fun() of Sample class"<<endl;
        }
};
int main()
{
    Test t,*tptr;
    tptr=&t;

    tptr->fun();

    Sample s;
    tptr=&s;
    tptr->fun();
}
