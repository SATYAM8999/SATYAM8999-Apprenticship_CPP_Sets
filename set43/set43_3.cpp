#include<iostream>
using namespace std;
class Complex
{


    public: int real,imag;

    void getData(int r,int i)
    {
        real=r;
        imag=i;

    }
    void display()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
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

    Complex com1,com2;
    com1.getData(10,20);
    com2.getData(10,20);

    com1.display();
    com2.display();
    cout<<"-----------------------"<<endl;
    Complex result= com1.getComplexSum(com1,com2);
    cout<<result.real<<"+i"<<result.imag<<endl;




}
