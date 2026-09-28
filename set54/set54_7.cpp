#include<iostream>
using namespace std;
class One
{
protected:
        int a;

        void getDataOne()
        {
            a=30;
        }
};
class Two:public One
{
public:
        int b;
        void getDataTwo(int y)
        {
            b=y;
        }
        int getBeggest()
        {
            getDataOne();
            int big=(a>b)?a:b;
            return big;
        }
};
int main()
{
    Two t;
    //t.getDataOne();
    t.getDataTwo(50);
    cout<<"Biggest of Two Number is:"<<t.getBeggest();
    return 0;
}
