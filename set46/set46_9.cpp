#include<iostream>
using namespace std;
class Test
{
  public:int a[5];

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
                cout<<a[i]<<" ' ";
            }
            cout<<endl;
        }
        void mergeArray(Test t1,Test t2)
        {
            int pos=0,mergeArray[10];

            for(int i=0;i<5;i++)
            {
                mergeArray[pos++]=t1.a[i];
            }
            for(int i=0;i<5;i++)
            {
               mergeArray[pos++]=t2.a[i];
            }

            cout<<"Merge Array is:"<<endl;
            for(int i=0;i<10;i++)
            {
                cout<<mergeArray[i]<<" ' ";
            }
            cout<<endl;

        }

};
int main()
{
    int ar[5]={10,20,30,40,50};

    Test t1,t2(ar);
   cout<<"First Array is\n"<<endl;
    t1.showArray();
     cout<<"\nsecond Array is\n"<<endl;
    t2.showArray();

    t1.mergeArray(t1,t2);
    return 0;
}
