#include<iostream>
using namespace std;
class Complex
{
    int real,imag;
public:
      void getData(int x,int y)
      {
          real=x;
          imag=y;
      }
      void showComplex()
      {
          cout<<real<<" + i"<<imag<<endl;
      }
      Complex operator+(Complex c2)
      {
          Complex sum;
          sum.real=real+c2.real;
          sum.imag=imag+c2.imag;
          return sum;
      }
};
int main()
{

    Complex c1,c2,c3;
    c1.getData(8,6);
    c2.getData(4,6);
    c3.getData(4,5);
    c1.showComplex();
    c2.showComplex();
    c3.showComplex();
    Complex sum=(c1+c2)+c3;
    cout<<"\n-----------------------------------"<<endl;
    sum.showComplex();


    return 0;
}
