#include<iostream>
using namespace std;
class Test
{

  public:
    int mat[2][2];
         Test(){}
    Test(int m[2][2])
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
     Test operator *(Test t2)
     {
        Test product;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                product.mat[i][j]=0;
                for(int k=0;k<2;k++)
                {
                    product.mat[i][j]=product.mat[i][j]+mat[i][k] * t2.mat[k][j];

                }

            }

        }
         return product;

     }
};
int main()
{
    int w1[2][2]={{2,3},{1,4}};
    int w2[2][2]={{0,1},{5,2}};

    Test t1(w1),t2(w2);
    cout<<" First MAtrix is:"<<endl;
    t1.showMatrix();

    cout<<"Second Matrix is:"<<endl;
    t2.showMatrix();

    Test Matrixproduct=t1*t2;

    cout<<"\n\nAfter Multiplication of MAtrix:"<<endl;
    Matrixproduct.showMatrix();



    return 0;
}

