#include<iostream>
using namespace std;
class Data
{
public:
        int pde[2];
        int sde[2];
};
class DiagonalElement
{
public:
       Data getPDEAndSDE(int x[2][2])
       {

           int pde[2],sde[2];
           for(int i=0;i<2;i++)
           {
               for(int j=0;j<2;j++)
               {
                   if(i==j)
                   {
                       pde[i]=x[i][j];
                   }
               }
           }
           for(int i=0;i<2;i++)
           {
               for(int j=0;j<2;j++)
               {
                   if(i+j==1)
                   {
                       sde[i]=x[i][j];
                   }
               }
           }
          /* cout<<"\nPrinciple Diagonal Element"<<endl;
           for(int i=0;i<2;i++)
           {
             cout<<pde[i]<<" , ";
           }
           cout<<"\nSecondary Diagonal Element"<<endl;

           for(int i=0;i<2;i++)
           {
             cout<<sde[i]<<" , ";
           }
           */
           Data d;
          for(int i=0;i<2;i++)
           {
               d.pde[i]=pde[i];
           }
           for(int i=0;i<2;i++)
           {
               d.sde[i]=sde[i];
           }
           return d;


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
       void showA()
       {
           cout<<"Value of A is"<<a<<endl;
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
       void showB()
       {
           cout<<"Value of B is"<<b<<endl;
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
       void showC()
       {
           cout<<"Value of C is"<<c<<endl;
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
       void showD()
       {
           cout<<"Value of D is"<<d<<endl;
       }
       Data createMAtrix()
       {
           //int x[]={a,b,c,d};
           //int pos=0;
           int mat[2][2]={{a,b},{c,d}};

          /* for(int i=0;i<2;i++)
           {
               for(int j=0;j<2;j++)
               {
                   mat[i][j]=x[pos++];
               }
           }
           */
           cout<<"Matrix is:"<<endl;
            for(int i=0;i<2;i++)
           {
               for(int j=0;j<2;j++)
               {
                   cout<<mat[i][j]<<" ";
               }
               cout<<endl;
           }
           DiagonalElement de;
           //de.getPDEAndSDE(mat);
           Data dk=de.getPDEAndSDE(mat);

          /* cout<<"\nPrinciple Diagonal Element"<<endl;
           for(int i=0;i<2;i++)
           {
               cout<<dk.pde[i]<<" , ";
           }
           cout<<"\nSecondary Diagonal Element"<<endl;
           for(int i=0;i<2;i++)
           {
               cout<<dk.sde[i]<<" , ";
           }
           */

         return dk;


       }
};
int main()
{
    Four f1;
    f1.getA(10);
    f1.showA();
    f1.getB(20);
    f1.showB();
    f1.getC(30);
    f1.showC();
    f1.getD(40);
    f1.showD();


    Data dk=f1.createMAtrix();



    cout<<"\nPrinciple Diagonal Element"<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<dk.pde[i]<<" , ";
    }
    cout<<"\nSecondary Diagonal Element"<<endl;
    for(int i=0;i<2;i++)
    {
       cout<<dk.sde[i]<<" , ";
    }



    return 0;
}
