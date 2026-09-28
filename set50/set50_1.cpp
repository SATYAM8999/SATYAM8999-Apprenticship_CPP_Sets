#include<iostream>
using namespace std;
class Matrix
{
    int mat[2][2];
public:
      Matrix(){}
       Matrix(int m[2][2])
       {
           for(int i=0;i<2;i++)
           {
               for(int j=0;j<2;j++)
               {
                   mat[i][j]=m[i][j];
               }
           }
       }
       void showMatrix()
       {
           for(int i=0;i<2;i++)
           {
               for(int j=0;j<2;j++)
               {
                   cout<<mat[i][j]<<" ";
               }
               cout<<endl;
           }
       }
       Matrix operator+(Matrix se)
       {
           Matrix sum;
           for(int i=0;i<2;i++)
           {
               for(int j=0;j<2;j++)
               {
                  sum.mat[i][j]=mat[i][j]+se.mat[i][j];
               }
           }
           return sum;

       }
};
int main()
{
    int w1[2][2]={{1,2},{3,4}};
    int w2[2][2]={{5,6},{7,8}};
    Matrix m1(w1);
    Matrix m2(w2);

    cout<<"First Matrix is:"<<endl;
    m1.showMatrix();
    cout<<"Second Matrix is:"<<endl;
    m2.showMatrix();

    Matrix sumMatrix=m1+m2;
    cout<<"\n \nSUM Matrix is:"<<endl;
    sumMatrix.showMatrix();
    return 0;
}
