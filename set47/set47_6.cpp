#include<iostream>
using namespace std;
class Test
{
public:
       int mat[2][2];
       Test(int x[2][2])
       {
           for(int i=0;i<2;i++)
           {
               for(int j=0;j<2;j++)
               {
                   mat[i][j]=x[i][j];
               }
           }
       }
     void showMatrix()
    {
     for(int i=0;i<2;i++)
     {
          for(int j=0;j<2;j++)
          {
                cout<<mat[i][j]<<"  ";
          }
          cout<<endl;
     }
     }
     Test getTranspose(Test t)
     {
         for(int i=0;i<2;i++)
         {
             for(int j=0;j<2;j++)
             {
                 t.mat[j][i]=mat[i][j];
             }
         }
         return t;
     }

};
int main()
{
    int w[2][2]={{1,2},{3,4}};
    Test t(w);
    t.showMatrix();

    cout<<"Transpose Matrix:"<<endl;
    Test trnspose=t.getTranspose(t);
    trnspose.showMatrix();

    return 0;
}
