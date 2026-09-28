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
          int return_B()
          {
              return b;
          }



};
class Three:public Two
{
    private:int c;
            void get_C(int z)
            {
             c=z;
            }

   public: void set_C(int z)
           {
               get_C(z);
           }


           float getAverage()
           {
               int tempa=return_A();
               int tempb=return_B();
               float avg=(float)(tempa+tempb+c)/3;
               return avg;
           }
};
int main()
{
    Three th;
    th.set_A(30);
    th.set_B(41);
    th.set_C(50);
    cout<<"Average of Three Numbers is:"<<th.getAverage();

    return 0;
}
