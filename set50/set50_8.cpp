#include<iostream>
using namespace std;
class Test
{


  public:
      int a;

      Test()
      {
          a=10;
      }
      void showData()
      {
          cout<<"a="<<a<<endl;
      }

      void operator&(int value)
      {
         a=a&value;
      }
      void operator|(int value)
      {
          a=a|value;
      }
      void operator^(int value)
      {
          a=a^value;
      }

};
int main()
{
    Test t1,t2,t3;
    t1.showData();

    t1&4;
    t1.showData();

    t2|6;
    t2.showData();

    t3^4;
    t3.showData();

    return 0;

}

