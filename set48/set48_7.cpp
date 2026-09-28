#include<iostream>
using namespace std;
class Addition
{
private:
    int a,b;
public:
    Addition(int x,int y)
    {
        a=x;
        b=y;

    }
    friend int sum(Addition);

};
int sum(Addition a1)
{
    int sum=a1.a+a1.b;
    return sum;
}
int main()
{
    Addition ad(100,20);
    int sum1=sum(ad);
    cout<<"Addition of Two Numbers:"<<sum1<<endl;
    return 0;
}
