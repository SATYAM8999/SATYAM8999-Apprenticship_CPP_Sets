#include<iostream>
using namespace std;
class Test
{
    public:

    static int count1;
    void fun1()
    {
        for(int i=0;i<1000;i++)

        {
            count1++;
        }
    }
    void fun2()
    {
        for(int j=0;j<654;j++)
        {
            count1++;
        }
    }
     void fun3()
    {
        for(int k=654;k>=5;k--)
        {
            count1++;

        }
    }
};
int Test::count1=0;
int main()
{
    Test t1,t2,t3,t4;

    t1.fun1();
    t1.fun2();
    t1.fun3();
    t2.fun1();
    t2.fun2();
    t2.fun3();
    t3.fun1();
    t3.fun2();
    t3.fun3();
    t4.fun1();
    t4.fun2();
    t4.fun3();
    t3.fun1();
    cout<<"Number of Function Calls is:"<<Test::count1<<endl;
    return 0;
}

