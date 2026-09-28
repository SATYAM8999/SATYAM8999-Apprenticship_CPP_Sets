#include<iostream>
using namespace std;
class Reverse
{
public:

       void doReverseEachElement(int x[])
       {

           for(int i=0;i<5;i++)
           {
               int num=x[i];
                int rev=0;
               while(num>0)
               {
                   int rem=num%10;
                   rev=rev*10+rem;
                   num=num/10;
               }
               x[i]=rev;
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

            Reverse re1;
            re1.doReverseEachElement(x);
            cout<<"\nAfter reversing Each Element in Array:"<<endl;
             for(int i=0;i<5;i++)
             {
                 cout<<x[i]<<" , ";
             }

         }


};

int main()
{
    Five f1(123,201,30,476,501);
    f1.getArray();


    return 0;
}



