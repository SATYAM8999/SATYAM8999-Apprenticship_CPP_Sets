#include<iostream>
#include<math.h>
using namespace std;
class DataKeeper
{
public:
      float mean,sd;
};
class MSD
{

public:

       DataKeeper getMeanSD(int x[])
       {
           int sum=0;
           for(int i=0;i<5;i++)
           {
               sum=sum+x[i];

           }
           float mean=(float)sum/5;
           //cout<<"Mean:"<<mean<<endl;

           float variance=0;
           for(int i=0;i<5;i++)
           {
              variance=variance+pow((x[i]-mean),2);
           }
           float standardD=(float)sqrt(variance/5);
           //cout<<"Standard Deviation:"<<standardD<<endl;

           DataKeeper dk;
           dk.mean=mean;
           dk.sd=standardD;
           return dk;


       }
};
class One
{
public:
      int a;
      void getA(int x)
      {
          a=x;
      }
};
class Two:public One
{
    public:
          int b;
      void getB(int x)
      {
          b=x;
      }
};
class Three:public Two
{
    public:
          int c;
      void getC(int x)
      {
          c=x;
      }
};
class Four:public Three
{
    public:
          int d;
      void getD(int x)
      {
          d=x;
      }
};
class Five:public Four
{
    public:
          int e;
      void getE(int x)
      {
          e=x;
      }

      void createArray()
      {
          int x[5]={a,b,c,d,e};

          cout<<"Array IS:"<<endl;
          for(int i=0;i<5;i++)
          {
              cout<<x[i]<<" , ";
          }
          cout<<endl;

       MSD m;
       DataKeeper dk=m.getMeanSD(x);
       cout<<"Mean="<<dk.mean<<endl;
       cout<<"Standard Deviation="<<dk.sd<<endl;


      }

};
int main()

{
    Five f;
     f.getA(1);
    f.getB(2);
    f.getC(3);
    f.getD(4);
    f.getE(5);



     f.createArray();


    return 0;


}


