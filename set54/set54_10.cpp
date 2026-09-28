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
    public:
           void formMAtrix(int p,int q,int r,int s)
           {
               getOne(p);
               getTwo(q);
               getThree(r);
               getFour(s);


               int mat[2][2]={{a,b},{c,d}};
               cout<<"Matrix Elements are:"<<endl;
               for(int i=0;i<2;i++)
               {
                   for(int j=0;j<2;j++)
                   {
                       cout<<mat[i][j]<<" ";
                   }
                   cout<<endl;
               }
             /* if(mat[0][0]>mat[1][1])
              {
                  int temp=mat[0][0];
                  mat[0][0]=mat[1][1];
                  mat[1][1]=temp;
              }
               */
               for(int i=0;i<2;i++)
               {
                   for(int j=0;j<2;j++)
                   {
                       if(i==j && mat[0][0]>mat[1][1])
                       {
                           int temp=mat[0][0];
                              mat[0][0]=mat[1][1];
                              mat[1][1]=temp;
                       }
                   }
               }


               cout<<"After sorting diagonal elements Matrix is:"<<endl;
               for(int i=0;i<2;i++)
               {
                   for(int j=0;j<2;j++)
                   {
                       cout<<mat[i][j]<<" ";
                   }
                   cout<<endl;
               }
           }
};
int main()
{
    Five f1;
    f1.formMAtrix(10,20,5,2);
    return 0;
}
