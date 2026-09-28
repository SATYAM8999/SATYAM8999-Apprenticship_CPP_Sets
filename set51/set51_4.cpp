#include<iostream>
using namespace std;
class One
{
public:
    int a;
    void getDataA(int a)
    {
        this->a=a;
    }

};
class Two:public One
{
public:
      int b;
      void getDataB(int b)
       {
           this->b=b;
       }
       int findBig()
       {
           return(a>b)?a:b;
       }
};
int main()
{
    Two t;
    t.getDataA(30);
    t.getDataB(60);
    cout<<"Giggest Number is:"<<t.findBig();
    return 0;

}
