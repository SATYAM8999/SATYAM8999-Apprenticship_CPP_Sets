#include<iostream>
using namespace std;
class Sum
{
public:
         int getMatrixSum(int x[2][2])
         {
             int sum;
             for(int i=0;i<2;i++)
             {
                 for(int j=0;j<2;j++)
                 {
                     sum=sum+x[i][j];
                 }
             }
            return sum;
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
class Two
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
class Three
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
class Four:public One,public Two,public Three
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
       void createMAtrix()
       {
           int x[]={a,b,c,d};
           int pos=0;
           int mat[2][2];

           for(int i=0;i<2;i++)
           {
               for(int j=0;j<2;j++)
               {
                   mat[i][j]=x[pos++];
               }
           }
           cout<<"Matrix is:"<<endl;
            for(int i=0;i<2;i++)
           {
               for(int j=0;j<2;j++)
               {
                   cout<<mat[i][j]<<" ";
               }
               cout<<endl;
           }
        Sum s;
        cout<<"Sum Of MAtrix Elements is:"<<s.getMatrixSum(mat);



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


    f1.createMAtrix();






    return 0;
}
