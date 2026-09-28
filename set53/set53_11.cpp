#include<iostream>
using namespace std;
class One
{
    private:int a;

            void get_A(int x)
            {
                a=x;
            }
    public:
            void set_A(int x)
            {
                get_A(x);
            }
            int return_A()
            {
                return a;
            }
};
class Two:public One
{
    private:int b;
            void get_B(int y)
            {
                b=y;
            }

   public:void set_B(int y)
          {
              get_B(y);

          }
          int getBig()
          {
              int tempa=return_A();
              int big=(tempa>b)?tempa:b;
              return big;
          }


};
int main()
{
    Two t;
    t.set_A(30);
    t.set_B(40);
    cout<<"Biggest element is:"<<t.getBig()<<endl;
    return 0;
}
