#include<iostream>
using namespace std;
class Sort
{

public:
      void getSortInDesc(int x[])
      {
          for(int i=0;i<4;i++)
          {
              for(int j=i+1;j<5;j++)
              {
                  if(x[i]<x[j])
                  {
                      int temp=x[i];
                      x[i]=x[j];
                      x[j]=temp;
                  }
              }
          }
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
          int x[]={a,b,c,d,e};

          cout<<"Array are:"<<endl;
          for(int i=0;i<5;i++)
          {
              cout<<x[i]<<" , ";
          }
          cout<<endl;

         Sort s;
         s.getSortInDesc(x);

        cout<<"Sorted Array Is:"<<endl;
          for(int i=0;i<5;i++)
          {
              cout<<x[i]<<" , ";
          }
          cout<<endl;
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
