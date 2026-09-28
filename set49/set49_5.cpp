#include<iostream>
using namespace std;
class Test
{

    int mat[3][3];
    int trnpseMatrix[3][3];
public:
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
    void showMatrix()
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
   friend void getTransposeMatrix(Test);
};
void getTransposeMatrix(Test t)
{
    int trnpseMatrix[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           t.trnpseMatrix[j][i]=t.mat[i][j];
        }
    }
    cout<<"Transpose Matrix is:"<<endl;

    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<t.trnpseMatrix[i][j]<<" ";
            }
            cout<<endl;
        }


}
int main()
{
    int w[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    Test t(w);
    t.showMatrix();

    getTransposeMatrix(t);


    return 0;
}

