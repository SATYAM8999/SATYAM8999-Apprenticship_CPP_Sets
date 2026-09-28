#include<iostream>
using namespace std;
class Two;
class One
{

    int mat1[3][3];

public:
    One(int x[3][3])
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                mat1[i][j]=x[i][j];
            }
        }
    }
    void showMatrixA()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<mat1[i][j]<<" ";
            }
            cout<<endl;
        }
    }
   friend void getMatrixSum(One,Two);
};
class Two
{

    int mat2[3][3];

public:
    Two(int x[3][3])
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                mat2[i][j]=x[i][j];
            }
        }
    }
    void showMatrixB()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<mat2[i][j]<<" ";
            }
            cout<<endl;
        }
    }
   friend void getMatrixSum(One,Two);
};
void getMatrixSum(One on ,Two tw)
{
    int summat[3][3];
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                summat[i][j]=on.mat1[i][j]+tw.mat2[i][j];
            }
        }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

         cout<<summat[i][j]<<" ";
        }

      cout<<endl;

    }


}
int main()
{
    int w1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    One on(w1);
    cout<<"First Matrix is:"<<endl;
    on.showMatrixA();
    cout<<"Second Matrix is:"<<endl;
    int w2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    Two tw(w2);
    tw.showMatrixB();

    cout<<"Addirion of Matrix is:"<<endl;
    getMatrixSum(on,tw);


    return 0;
}


