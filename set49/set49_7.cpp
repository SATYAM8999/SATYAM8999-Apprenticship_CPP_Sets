#include<iostream>
using namespace std;
class Test
{

    int a,b,c;
  public:
    Test(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void showData()
    {
        cout<<"A   ="<<a<<endl;
        cout<<"B   ="<<b<<endl;
        cout<<"C   ="<<c<<endl<<"\n \n \n";
    }
    void operator-()
    {
        a=-a;
        b=-b;
        c=-c;
    }
};
int main()
{
    Test t(10,20,30);
    t.showData();
    -t;
    t.showData();
}
