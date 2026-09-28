#include<iostream>
using namespace std;
class Complex
{
public:int real1=10,imag1=20;
       int real2=20,imag2=10;


     virtual int findAddition()
      {
        //int add1= real1+real2+(imag1 + imag2);
        cout << "Addition of Complex Numbers: " << real1+real2 << " + " << imag1 + imag2<< "i" << endl;
        return add1;
      }


};
class Array
{
public:
    virtual int findAddition()
    {
        int sum=0;
        int x[]={1,2,3,4,5,6,7,8,9,10};
        for(int i=0;i<10;i++)
        {
            sum=sum+x[i];
        }
        return sum;

    }



};
class Matrix
{
public: virtual int findAddition()
        {
            int mat1[2][2]={{1,2},{3,4}};
            int mat2[2][2]={{1,2},{3,4}};
            int sum[2][2];
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    sum[i][j]=mat1[i][j]+mat2[i][j];
                }
            }

        }


};

class Addition:public Complex,public Array,public Matrix
{
    public:
       int findAddition()
        {
            findAddition();
            findAddition();
            findAddition();


        }
};
int main()
{
    Complex c1,*cptr;
    cptr=&c1;
    cout<<"Addition of Complex Number "<<cptr->findAddition()<<endl;

    Array a1,*aptr;
    aptr=&a1;
    cout<<"Addition of Array Elements:"<< aptr->findAddition()<<endl;

    Matrix m1,*mptr;

    mptr=&m1;
     cout<<"Addition of Matrix Elements:"<<mptr->findAddition();

    return 0;
}
