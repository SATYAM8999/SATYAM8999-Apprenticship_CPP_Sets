#include<iostream>
using namespace std;
class Small
{

public:
        void getSmall(int odd[])
        {
            int small=odd[0];
            for(int i=0;i<5;i++)
            {
                if(odd[i]<small)
                    small=odd[i];
            }
            cout<<"\nSmall Element is:"<<small<<endl;
        }
};
class Big
{
public:
        void getBig(int even[])
        {
            int big=even[0];
            for(int i=1;i<5;i++)
            {
                if(even[i]>big)
                    big=even[i];
            }
            cout<<"\nBig Element is:"<<big<<endl;
        }
};
class EvenOdd
{
public:

      void getEvenOddArray(int x[])
      {

          int ecount=0,ocount=0;
          for(int i=0;i<5;i++)
          {
              if(x[i]%2==0)
                  ecount++;
              else
                ocount++;

          }
         // cout<<ecount<<endl;
          //cout<<ocount<<endl;
         int even[ecount],odd[ocount];
         int pos1=0,pos2=0;
          for(int i=0;i<5;i++)
          {
              if(x[i]%2==0)
                 even[pos1++]=x[i];

              else
                 odd[pos2++]=x[i];
          }

          cout<<"\neven Array iS:"<<endl;
          for(int i=0;i<ecount;i++)
          {
              cout<<even[i]<<" , ";
          }
          cout<<"\nodd Array iS:"<<endl;
          for(int i=0;i<ocount;i++)
          {
              cout<<odd[i]<<" , ";
          }

          Big b;
          b.getBig(x);

          Small s;
          s.getSmall(x);
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


           EvenOdd evod;
    evod.getEvenOddArray(x);
      }

};
int main()

{
    Five f;
     f.getA(45);
    f.getB(5);
    f.getC(98);
    f.getD(34);
    f.getE(76);
    f.createArray();

    return 0;


}

