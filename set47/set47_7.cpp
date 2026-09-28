#include<iostream>
#include<math.h>
using namespace std;
class Test
{
public:
      int mat[3][3];
       Test(int x[3][3])
       {
           for(int i=0;i<3;i++)
           {
               for(int j=0;j<3;j++)
               {
                   mat[i][j]=x[i][j];
               }
           }
       }
       void displayMatrix()
       {
           for(int i=0;i<3;i++)
           {
               for(int j=0;j<3;j++)
               {
                   cout<<mat[i][j]<<" ";
               }
               cout<<endl;
           }
       }
};
class DataKeeper
{
public:
    float trace;
    float normal;
};
class Transform
{
public:

    DataKeeper getTraceNormal(Test t)
    {
           int trace=0;
           for(int i=0;i<3;i++)
           {
               for(int j=0;j<3;j++)
               {
                   if(i==j)
                   {
                       trace=trace+t.mat[i][j];
                   }
               }
           }
           int normal;
           for(int i=0;i<3;i++)
           {
               for(int j=0;j<3;j++)
               {
                   normal=normal+t.mat[i][j]*t.mat[i][j];
               }
           }
           float fnormal=sqrt(normal);


           DataKeeper dk;
           dk.trace=trace;
           dk.normal=fnormal;
           return dk;


       }
};
int main()
{
    int w[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    Test t(w);
    t.displayMatrix();
    Transform tn;
    DataKeeper d= tn.getTraceNormal(t);
    cout<<"Trace is:"<<d.trace<<endl;
    cout<<"Normal is:"<<d.normal<<endl;





    return 0;

}
