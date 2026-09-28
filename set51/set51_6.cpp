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
    public:int b;
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
        int getBig()
        {
            return((a>b && a>c)?a:(b>a && b>c)?b:c);
        }
};
int main()
{
    Three th;
    th.getDataA(10);
    th.getDataB(300);
    th.getDataC(100);
    cout<<"Biggest among three numbers is:"<<th.getBig();
    return 0;
}
