#include<iostream>
using namespace std;
class Reverse
{
public:
        void getReverse(int x[])
        {
            int last_pos=4;
            for(int i=0;i<5/2;i++)
            {
                int temp=x[i];
                x[i]=x[last_pos];
                x[last_pos]=temp;
                last_pos--;
            }
        }
};
class One
{
    private:int a;
            void getA(int x)
            {
                a=x;
            }

    public:
            void setA(int x)
            {
                getA(x);
            }
            int returnOne()
            {
                return a;
            }
};
class Two:public One
{
    private:int b;
            void getB(int y)
            {
                b=y;
            }

    public:
            void setB(int y)
            {
                getB(y);
            }
            int returnTwo()
            {
                return b;
            }
};
class Three:public Two
{
    private:int c;
            void getC(int x)
            {
                c=x;
            }

    public:
            void setC(int x)
            {
                getC(x);
            }
            int returnThree()
            {
                return c;
            }
};
class Four:public Three
{
    private:int d;
            void getD(int x)
            {
                d=x;
            }

    public:
            void setD(int x)
            {
                getD(x);
            }
            int returnFour()
            {
                return d;
            }
};
class Five:public Four
{
    private:int e;
            void getE(int x)
            {
                e=x;
            }

    public:
            void setE(int x)
            {
                getE(x);
            }
            int returnFive()
            {
                return e;
            }
            void formArray()
            {
                int m=returnOne();
                int n=returnTwo();
                int o=returnThree();
                int p=returnFour();
                int q=returnFive();
                int x[]={m,n,o,p,q};
                cout<<"Array Elements Are:"<<endl;
                for(int i=0;i<5;i++)
                {
                    cout<<x[i]<<" , ";
                }


                Reverse r1;
                r1.getReverse(x);

                cout<<"\n\nAfter Reversing Array Elements are:"<<endl;
                for(int i=0;i<5;i++)
                {
                    cout<<x[i]<<" , ";
                }
            }
};
int main()
{
    Five f1;
    f1.setA(10);
    f1.setB(20);
    f1.setC(30);
    f1.setD(40);
    f1.setE(50);

    f1.formArray();
    return 0;
}
