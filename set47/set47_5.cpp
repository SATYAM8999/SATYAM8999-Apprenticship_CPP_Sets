#include<iostream>
using namespace std;
class Test
{
public:

      int a[5];
      Test()
      {
          int x=1;
          for(int i=0;i<5;i++)
          {
              a[i]=x++;
          }
      }
      Test(int x[])
      {
          for(int i=0;i<5;i++)
          {
              a[i]=x[i];
          }
      }
      void showArray()
      {
          for(int i=0;i<5;i++)
          {
              cout<<a[i]<<" , ";
          }
          cout<<endl;
      }

};
class CommonElement
{
public:
       void getCommonElement(Test t1,Test t2)
      {
          for(int i=0;i<5;i++)
          {
            for(int j=0;j<5;j++)
            {

              if(t1.a[i]==t2.a[j])
              {
                cout<<t1.a[i]<<" , ";
              }
            }

          }
         cout<<endl;

      }
};
int main()
{
    int ar[5]={20,1,5,43,4};
    Test t1,t2(ar);
    cout<<"First Array:"<<endl;
    t1.showArray();

    cout<<"second Array:"<<endl;
    t2.showArray();

    cout<<"Common Element is:"<<endl;
    CommonElement com1;
    com1.getCommonElement(t1,t2);



    return 0;

}
