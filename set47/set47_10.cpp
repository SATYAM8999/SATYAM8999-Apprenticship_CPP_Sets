#include<iostream>
using namespace std;
class Test
{
public:
    int mat[3][3];
    int BonMatrix[3][3];


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
};
class Element
{
public:

       Test getBoundaryElement(Test t)
       {
        for(int i=0;i<3;i++)
        {
          for(int j=0;j<3;j++)
          {
            if(i==0 || j==0 || i==2 ||j==2)
            {
                t.BonMatrix[i][j]=t.mat[i][j];

            }
           // t.mat[i][j]=0;
          }
        }

            return t;
       }

};
int main()
{
    int w[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    Test t(w);
    t.showMatrix();

    Element e;
    Test t1=e.getBoundaryElement(t);

    cout<<"Boundary elements are :\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<t1.BonMatrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}
