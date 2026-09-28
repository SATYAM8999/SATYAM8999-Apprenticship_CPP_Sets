#include<iostream>
using namespace std;
class Test
{

    int a;
  public:

      Test()
      {
          a=10;
      }
      void showData()
      {
          cout<<" a="<<a<<endl;
      }
      void operator--()
      {
          --a;
      }
};
int main()
{
    Test t1;
    t1.showData();
    --t1;
    t1.showData();
    --t1;
    t1.showData();
    --t1;
    t1.showData();
    return 0;

}

