#include<iostream>
using namespace std;
class mergeArray
{

 public:

    void getMergeTwoArray(int x[],int y[])
    {

       int size1=6;
       int size2=4;

       int ma=size1+size2;
       int p=0;
       int mergeArray[ma];
       for(int i=0;i<size1;i++)
       {
           mergeArray[p++]=x[i];
       }
       for(int i=0;i<size2;i++)
       {
           mergeArray[p++]=y[i];
       }
     cout<<"After merging Array is:"<<endl;
       for(int i=0;i<10;i++)
       {
           cout<<mergeArray[i]<<" , ";

       }

    }
};


int main()
{
    int a[]={1,2,3,4,5,6};
    int b[]={7,8,9,0};

    mergeArray mer;
    mer.getMergeTwoArray(a,b);

    return 0;


}
