#include<iostream>
using namespace std;
class One
{
public:

       int a;
        One()
        {
            a=34;
        }
};
class Two:public One
{
public:
        int b;
        Two()
        {
            b=100;

        }
        int getBig()
        {
           return (a>b)?a:b;
        }
};
int main()
{
    Two th;
    cout<<"Biggest Element is:"<<th.getBig();
    return 0;

}
