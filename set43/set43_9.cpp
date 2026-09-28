#include<iostream>>
using namespace std;
class DataKeeper
{
    public:
        int big,small;
};
class FindBigSmall
{

    public:
           DataKeeper getData(int x[])
           {
               int b=x[0];
               int s=x[0];
               for(int i=1;i<10;i++)
               {
                   if(x[i]>b)
                    b=x[i];
                   if(x[i]<s)
                    s=x[i];
               }




              DataKeeper dk;
              dk.big=b;
              dk.small=s;
              return dk;

           }
};
int main()
{
    int a[]={1,43,54,67,444,-6,65,10,87,-3};
    cout<<"Array is:";
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" , ";
    }

    FindBigSmall b;
    DataKeeper d=b.getData(a);
    cout<<"\n";
    cout<<"Big="<<d.big<<endl;
    cout<<"\n"<<"Small ="<<d.small<<endl;
    return 0;



}
