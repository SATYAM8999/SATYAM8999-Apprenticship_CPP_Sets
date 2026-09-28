#include<iostream>
#include<string>
using namespace std;
class Test
{
    public:

    int mat[3][3];
       void display()
       {
           for(int i=0;i<3;i++)
           {
               for(int j=0;j<3;j++)
               {
                   cout<<mat[i][j]<<"  ";

               }
               cout<<"\n";
           }
       }
       int getSum()
       {
           int sum=0;
           for(int i=0;i<3;i++)
           {
               for(int j=0;j<3;j++)
               {
                   sum=sum+mat[i][j];
               }
           }
           return sum;

       }
};
int main()
{
    Test t;
    int m[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    copy(&m[0][0],&m[0][0]+3*3,&t.mat[0][0]);
    t.display();

    int sum=t.getSum();
    cout<<"Sum="<<sum<<endl;
    return 0;
}
