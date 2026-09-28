#include<iostream>
using namespace std;
class Test
{
int a;
    public:

     Test(int a)
     {
         this->a=a;
     }
     void display()
     {
         cout<<"a="<<a<<endl;
     }
     void operator<<(int value)
     {
         a=a<<value;
     }
     void operator>>(int value)
     {
         a=a>>value;
     }
};
int main()
{
    Test t1(3),t2(4);
    t1.display();

    cout<<"left shift:"<<endl;
    t1<<1;
    t1.display();

     t1.display();

     cout<<"right shift:"<<endl;
    t2>>2;
    t2.display();
    return 0;

}
