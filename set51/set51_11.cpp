#include<iostream>
using namespace std;
class Test
{



  public:
        int mat[3][3];

    Test() {}
    Test(int m[3][3])
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                mat[i][j]=m[i][j];
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
     Test operator~()
     {
         Test Transpose;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                Transpose.mat[j][i]=mat[i][j];
            }
        }
        return Transpose;
     }
};
int main()
{
    int w1[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    Test t(w1);
    cout<<"Given MAtrix are:"<<endl;
    t.showMatrix();


    Test transposeMAtrix=~t;

    cout<<"After Transpose MAtrix is"<<endl;
    transposeMAtrix.showMatrix();


    return 0;
}

