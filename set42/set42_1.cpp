#include<iostream>
using namespace std;
class Addition
{
    int a,b,sum;

    public:
    void getData(int x,int y)
    {
        a=x;
        b=y;
    }
    void findSum()
    {
        sum=a+b;
    }
    void display()
    {
        cout<<"Addition="<<sum<<endl;
    }


};

int main()
{
    Addition a1;
    a1.getData(10,20);
    a1.findSum();
    a1.display();
    return 0;
}
