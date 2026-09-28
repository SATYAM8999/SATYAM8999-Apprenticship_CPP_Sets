#include<iostream>
#include<math.h>
using namespace std;
class DataKeeper
{
public:
        int trace;
        float normal;
};
class TraceNormal
{
public:
        DataKeeper getTraceAndNormal(int mat[2][2])
        {
            int trace=0;
            float normal=0;
            for(int i=0;i<2;i++)
            {
              for(int j=0;j<2;j++)
              {
                  if(i==j)
                     trace=trace+mat[i][j];



              }
            }
            for(int i=0;i<2;i++)
            {
              for(int j=0;j<2;j++)
              {
                  normal=normal+pow(mat[i][j],2);
              }
            }
             normal=sqrt(normal);
            //cout<<"trace:"<<trace<<endl;
            //cout<<"Normal="<<normal<<endl;

            DataKeeper dk;
            dk.trace=trace;
            dk.normal=normal;
            return dk;
        }
};
class Row1
{
private:int x,y;
       getRow1(int x,int y)
       {
           this->x=x;
           this->y=y;
       }

public:
       setRow1(int x,int y)
       {
           getRow1(x,y);
       }
       int returnX()
       {
           return x;
       }
       int returnY()
       {
           return y;
       }
};
class Row2
{
private:int x1,y1;
       getRow2(int x1,int y1)
       {
           this->x1=x1;
           this->y1=y1;
       }

public:
       setRow2(int x1,int y1)
       {
           getRow2(x1,y1);
       }
       int returnX1()
       {
           return x1;
       }
       int returnY1()
       {
           return y1;
       }
};
class Matrix:public Row1,public Row2
{
public:
        void formMatrix(int mat[2][2])
        {
            int a=returnX();
            int b=returnY();
            int c=returnX1();
            int d=returnY1();


            //int mat[2][2]={{a,b},{c,d}};
            mat[0][0]=a;
            mat[0][1]=b;
            mat[1][0]=c;
            mat[1][1]=d;

        }
};
int main()
{
    Matrix m1;
    m1.setRow1(1,2);
    m1.setRow2(3,4);


    int mat[2][2];
    m1.formMatrix(mat);
    cout<<"Matrix elements are"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

   TraceNormal tn;
   //tn.getTraceAndNormal(mat);
   DataKeeper d=tn.getTraceAndNormal(mat);
   cout<<"Trace of the Matrix is:"<<d.trace<<endl;
   cout<<"Normal of Matrix is:"<<d.normal<<endl;
    return 0;

}
