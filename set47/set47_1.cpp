#include<iostream>
using namespace std;
class Complex
{
public:
     int real,imag;
     Complex()
     {
         real=10;
         imag=20;

     }
    Complex(int r,int i)
    {
        real=r;
        imag=i;
    }
    void display()
    {
        cout<<real<<"+ i"<<imag<<endl;
    }
};
class Sum
{
public:
      Complex getComplexSum(Complex c1,Complex c2)
      {
          Complex temp;
          temp.real=c1.real+c2.real;
          temp.imag=c1.imag+c2.imag;
          return temp;
      }
};
int main()
{
    Complex c1,c2(6,4);
    c1.display();
    c2.display();

    Sum s;
    Complex csum=s.getComplexSum(c1,c2);
    csum.display();
    return 0;
}
