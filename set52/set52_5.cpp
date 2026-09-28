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
    };



};
class One
{
    public:
        int a;
        void getOne(int x)
        {
            a=x;
        }
};
class Two
{
    public:
        int b;
        void getTwo(int x)
        {
            b=x;
        }
};
class Three
{
    public:
        int c;
        void getThree(int x)
        {
            c=x;
        }
};
class Four
{
    public:
        int d;
        void getFour(int p)
        {
            d=p;
        }
};

class Five:public One,public Two,public Three,public Four
{
    public:
        int e;
        void getFive(int p)
        {
            e=p;
        }

        void formArray()
        {
            int x[5]={a,b,c,d,e};
            cout<<"array elements Are"<<endl;
            for(int i=0;i<5;i++)
            {
                 cout<<x[i]<<" , ";
            }

            Reverse r1;
            r1.getReverse(x);
            cout<<"\n After Reversing array elements Are"<<endl;
            for(int i=0;i<5;i++)
            {
                 cout<<x[i]<<" , ";
            }


        }

};
int main()
{
    Five f;
    f.getOne(1);
    f.getTwo(2);
    f.getThree(3);
    f.getFour(4);
    f.getFive(5);
    f.formArray();
}

