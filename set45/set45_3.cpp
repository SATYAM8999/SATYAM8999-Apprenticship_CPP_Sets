#include<iostream>
using namespace std;
class Test
{
public:
     int mat[3][3];
     void getData()
     {
         cout<<"Enter the Matrix Element:"<<endl;
         for(int i=0;i<3;i++)
         {
             for(int j=0;j<3;j++)
             {
                 cin>>mat[i][j];
             }
         }
     }
     void display()
     {

         for(int i=0;i<3;i++)
         {
             for(int j=0;j<3;j++)
             {
                 cout<<mat[i][j]<<"  ";
             }
             cout<<endl;
         }
     }
     void prntPDElement()
     {
         for(int i=0;i<3;i++)
         {
             for(int j=0;j<3;j++)
             {
                 if(i==j)
                 {
                     cout<<mat[i][j]<<" ";
                 }
                 else
                    cout<<" ";

             }
             cout<<endl;
         }


     }
      void secondaryElement()
     {
         for(int i=0;i<3;i++)
         {
             for(int j=0;j<3;j++)
             {
                 if(i+j==2)
                 {
                     cout<<mat[i][j]<<" ";
                 }
                 else
                    cout<<" ";

             }
             cout<<endl;
         }
     }

};

int main()
{
    Test t;
    t.getData();
    t.display();

    cout<<"Principle Diagonal Elements"<<endl;
    t.prntPDElement();
    cout<<"Secondary Diagonal Elements"<<endl;
    t.secondaryElement();

}
