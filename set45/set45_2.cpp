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

       void swapRow(int r1,int r2)
       {
           r1=r1-1;
           r2=r2-1;
           for(int j=0;j<3;j++)
           {
               int temp=mat[r1][j];
               mat[r1][j]=mat[r2][j];
               mat[r2][j]=temp;
           }
       }
       void swapColumn(int c1,int c2)
       {
           c1=c1-1;
           c2=c2-1;
           for(int i=0;i<3;i++)
           {
               int temp=mat[i][c1];
               mat[i][c1]=mat[i][c2];
               mat[i][c2]=temp;
           }
       }
};
int main()
{
    Test t;
    int m[3][3]={{1,2,3},{4,5,6},{7,8,9}};


    copy(&m[0][0],&m[0][0]+3*3,&t.mat[0][0]);
    t.display();
    int con;
    do
    {
    cout<<"Your Choice";
    cout<<"\n1.Swap rows \n2.Swap Column\n 3.Display";
    int choice;
    cout<<"\n \nEnter your choice\n";
    cin>>choice;
    switch(choice)
    {
        case 1:cout<<"enter the rows that to be Swap :\n";
              int r1,r2;
              cin>>r1>>r2;

              if(r1>=1 && r1<=3 && r2>=1 && r2<=3)
              t.swapRow(r1,r2);
              else
                cout<<"out of range";
              break;
         case 2:cout<<"enter the Columns that to be Swap :\n";
              int c1,c2;
              cin>>c1>>c2;
              if(c1>=1 && c1<=3 && c2>=1 && c2<=3)
              t.swapColumn(c1,c2);
              else
                cout<<"out of range";
              break;
        case 3:t.display();
               break;

        default:cout<<"Invalid Choice";
                break;

    }
    cout<<"Do you want to continue press 1 for yes and 0 for no";
    cin>>con;
    }while(con==1);


    return 0;
}
