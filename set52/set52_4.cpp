#include<iostream>
using namespace std;
class Transpose
{
public:
       void getTranspose(int mat[2][2])
       {
           int trnpose[2][2];
           for(int i=0;i<2;i++)
           {
               for(int j=0;j<2;j++)
               {
                   trnpose[j][i]=mat[i][j];
               }
           }
           for(int i=0;i<2;i++)
           {
               for(int j=0;j<2;j++)
               {
                   cout<<trnpose[i][j];
               }
               cout<<endl;
           }

       }
};
class One
{
    public:
        int a;
        void getOne(int x)
        {
            a=x;
        }
};
class Two:public One
{
    public:
        int b;
        void getTwo(int x)
        {
            b=x;
        }
};
class Three:public Two
{
    public:
        int c;
        void getThree(int x)
        {
            c=x;
        }
};
class Four:public Three
{
    public:
        int d;
        void getFour(int p)
        {
            d=p;
        }

        void formArray()
        {
            int mat[2][2]={{a,b},{c,d}};
            cout<<"MAtrix elements Are"<<endl;
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    cout<<mat[i][j]<<" ";
                }
                cout<<endl;
            }
            Transpose t1;
            t1.getTranspose(mat);
        }

};
int main()
{
    Four f;
    f.getOne(1);
    f.getTwo(2);
    f.getThree(3);
    f.getFour(4);
    f.formArray();
}
