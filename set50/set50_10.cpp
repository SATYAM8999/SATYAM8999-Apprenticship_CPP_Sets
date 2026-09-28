#include<iostream>
using namespace std;
class Test
{

    public:
         int a[5];
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
        }
        int operator[](int index)
        {
            return a[index];
        }

};
int main()
{
    int w1[5]={1,2,3,4,5};
    Test t1(w1);

    t1.showArray();

    cout<<"\nValue of a[2]="<<t1[2]<<endl;
    cout<<"Value of a[4]="<<t1[4]<<endl;
    cout<<"Value of a[0]="<<t1[0]<<endl;
    return 0;

}
