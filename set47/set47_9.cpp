#include<iostream>
using namespace std;
class Test
{
public:
    int mat[3][3];
    int aboveSDE[3];
    int belowSDE[3];

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

          Test getAboveSecondaryDE(Test t)
           {
               int pos1=0;
               for(int i=0;i<3;i++)
               {
                   for(int j=0;j<3;j++)
                   {
                       if(i+j<2)
                       {
                           t.aboveSDE[pos1++]=t.mat[i][j];
                       }
                   }
               }
               return t;
           }
           Test getBelowSecondaryDE(Test t)
           {
               int pos2=0;
               for(int i=0;i<3;i++)
               {
                   for(int j=0;j<3;j++)
                   {
                       if(i+j>2)
                       {
                           t.belowSDE[pos2++]=t.mat[i][j];
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
    Test t1=e.getAboveSecondaryDE(t);

    cout<<"Above Secondary diognal element:"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<t1.aboveSDE[i]<<endl;

    }
    Test t2=e.getBelowSecondaryDE(t);
    cout<<"Below Secondary diognal element:"<<endl;
    for(int j=0;j<3;j++)
    {

        cout<<t2.belowSDE[j]<<endl;
    }

    return 0;
}

