#include<iostream>
using namespace std;
class Unit
{
public:
         void isUnitMatrix(int mat[2][2])
         {
             int flag=true;
             for(int i=0;i<2;i++)
             {
                 for(int j=0;j<2;j++)
                 {
                     if((i==j && mat[i][j]!=1) || (i!=j && mat[i][j])!=0)
                     {
                         flag=false;
                         break;
                     }
                 }
                 if(flag==false)
                     break;
             }
             if(flag==true)
                cout<<"The Given Matrix is a Unit Matrix"<<endl;
             else
                 cout<<"The Given Matrix is Not a Unit MAtrix"<<endl;
         }
};
class One
{
    private:int a;
            void getA(int x)
            {
                a=x;
            }

    public:
            void setA(int x)
            {
                getA(x);
            }
            int returnOne()
            {
                return a;
            }
};
class Two
{
    private:int b;
            void getB(int y)
            {
                b=y;
            }

    public:
            void setB(int y)
            {
                getB(y);
            }
            int returnTwo()
            {
                return b;
            }
};
class Three
{
    private:int c;
            void getC(int x)
            {
                c=x;
            }

    public:
            void setC(int x)
            {
                getC(x);
            }
            int returnThree()
            {
                return c;
            }
};
class Four
{
    private:int d;
            void getD(int x)
            {
                d=x;
            }

    public:
            void setD(int x)
            {
                getD(x);
            }
            int returnFour()
            {
                return d;
            }
};
class Matrix:public One,public Two,public Three,public Four
{
public:
        void formMatrix()
        {
            int w=returnOne();
            int x=returnTwo();
            int y=returnThree();
            int z=returnFour();

            int mat[2][2]={{w,x},{y,z}};
            cout<<"Given Matrix is:"<<endl;
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    cout<<mat[i][j]<<" ";
                }
                cout<<endl;
            }
            Unit ut1;
            ut1.isUnitMatrix(mat);
        }
};
int main()
{
    Matrix m1;
    m1.setA(1);
    m1.setB(0);
    m1.setC(0);
    m1.setD(1);

    m1.formMatrix();
    return 0;
}
