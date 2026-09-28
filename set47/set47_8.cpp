#include<iostream>
using namespace std;
class Test
{
public:
    int mat[3][3];
    int pde[3];
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
    void showArray()
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
      Test getPrincipleElement(Test t)
       {
           for(int i=0;i<3;i++)
           {
               for(int j=0;j<3;j++)
               {
                   if(i==j)
                   {
                       t.pde[i]=t.mat[i][j];
                   }
               }
           }
           return t;

       }
};
int main()
{
    int w[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    Test t(w);
    t.showArray();

    Element e;

    cout<<"Principle Diagonal Element is:"<<endl;
    Test res=e.getPrincipleElement(t);
    for(int i=0;i<3;i++)
    {
        cout<<res.pde[i]<<endl;
    }
    return 0;
}
