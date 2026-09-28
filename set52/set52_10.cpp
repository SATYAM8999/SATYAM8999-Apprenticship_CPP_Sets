#include<iostream>
using namespace std;
class Reverse
{
public:

       void doReverse(int x[])
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
public:
        int a;
        One(int a)
        {
            this->a=a;
        }
};
class Two:public One
{
public:
        int b;
        Two(int a,int b):One(a)
        {
            this->b=b;
        }
};
class Three:public Two
{
public:
        int c;
        Three(int a,int b,int c):Two(a,b)
        {
            this->c=c;
        }

};
class Four:public Three
{
public:
         int d;
         Four(int a,int b,int c,int d):Three(a,b,c)
         {
             this->d=d;
         }
};
class Five:public Four
{
public:
         int e;
         Five(int a,int b,int c,int d,int e):Four(a,b,c,d)
         {
             this->e=e;
         }

         void getArray()
         {
             int x[]={a,b,c,d,e};
             cout<<"Array Element is:"<<endl;
             for(int i=0;i<5;i++)
             {
                 cout<<x[i]<<" , ";
             }

             Reverse r1;
             r1.doReverse(x);
             cout<<"\nAfter Reversing Array Element is:"<<endl;
             for(int i=0;i<5;i++)
             {
                 cout<<x[i]<<" , ";
             }
         }


};

int main()
{
    Five f1(10,20,30,40,50);
    f1.getArray();


    return 0;
}


