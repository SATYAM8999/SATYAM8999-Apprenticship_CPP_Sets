#include<iostream>
using namespace std;
class Test
{
   public:
       int a;
       Test(int x)
       {
           a=x;
       }
      Test *operator->()
      {
          return this;
      }

};
int main()
{
    Test t(10);

    cout<<"Value of a is:"<<t.a<<endl;
    cout<<"value of A with -> Operator:"<<t->a<<endl;
    return 0;
}
