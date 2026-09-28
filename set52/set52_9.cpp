#include<iostream>
using namespace std;
class One
{
public:
        int a;
        One(int a)
        {
            this->a=a;
        }
};
class Two:public One
{
public:
        int b;
        Two(int a,int b):One(a)
        {
            this->b=b;
        }
};
class Three:public Two
{
public:
        int c;
        Three(int a,int b,int c):Two(a,b)
        {
            this->c=c;
        }
        int findBig()
        {
            int big=(a>b && a>c)?a:(b>a && b>c)?b:c;
        }

};

int main()
{
    Three t(10,200,30);
    cout<<"Biggest Number is:"<<t.findBig();





    return 0;
}


