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
    Complex getComplexSum(Complex c1)
    {
        Complex temp;

        temp.real=real+c1.real;
        temp.imag=imag+c1.imag;
        return temp;



    }
};


int main()
{

    Complex com1,com2;
    com1.getData(10,20);
    com2.getData(10,330);

    com1.display();
    com2.display();
    cout<<"-----------------------"<<endl;
    Complex result= com1.getComplexSum(com2);
    cout<<result.real<<"+i"<<result.imag<<endl;

   return 0;


}

