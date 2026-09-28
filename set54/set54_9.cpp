#include<iostream>
using namespace std;
class One
{
    protected:int a;
              void getOne(int x)
              {
                  a=x;
              }
};
class Two:public One
{
    protected:int b;
              void getTwo(int y)
              {
                  b=y;
              }
};
class Three:public Two
{
    protected:int c;
              void getThree(int z)
              {
                  c=z;
              }
};
class Four:public Three
{
    protected:int d;
              void getFour(int p)
              {
                  d=p;
              }
};
class Five:public Four
{
    protected:int e;
              void getFive(int q)
              {
                  e=q;
              }
};
class Array:public Five
{
public:

         void formArray(int p,int q,int r,int s,int t)
         {
             /*
             int a=getOne(p);
             int b=getTwo(q);
             int c=getThree(r);
             int d=getFour(s);
             int e=getFive(t);
             */
            getOne(p);
            getTwo(q);
            getThree(r);
            getFour(s);
            getFive(t);


             int x[]={a,b,c,d,e};
             cout<<"Array Elements is:"<<endl;
             for(int i=0;i<5;i++)
             {
                 cout<<x[i]<<" "<<endl;
             }

           for(int i=0;i<4;i++)
            {
               for(int j=i+1;j<5;j++)
               {
                 if(x[i]%2==0 && x[j]%2==0)
                 {
                    if(x[i]>x[j])
                    {
                        int temp=x[i];
                        x[i]=x[j];
                        x[j]=temp;
                    }
                }
              }
             }
             cout<<"After Sorting Array Elements is:"<<endl;
             for(int i=0;i<5;i++)
             {
                 cout<<x[i]<<" "<<endl;
             }
         }
};
int main()
{
   Array a1;
   a1.formArray(81,22,31,12,10);
   return 0;
}
