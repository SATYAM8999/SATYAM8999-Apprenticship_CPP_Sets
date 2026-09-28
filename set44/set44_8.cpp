#include<iostream>
#include<string>
using namespace std;
class Test
{
public:
    int a[10];


    void showData()
    {
        for(int i=0;i<10;i++)
        cout<<a[i]<<" , ";
    }

    bool isFibonacci()
    {
        bool flag=true;
        int f1=a[0],f2=a[1];
       for(int i=2;i<10;i++)
       {
           if((f1+f2)!=a[i])
           {
               flag=false;
               break;
           }
           f1=f2;
           f2=a[i];

       }
       return flag;

    }

};
int main()
{
 int x[]={1,2,3,5,8,13,21,34,55,89};
 Test t;
 copy(begin(x),end(x),(t.a));

 t.showData();

 if(t.isFibonacci())
    cout<<"\n Given Array is Fibonacci series";
 else
    cout<<"\n Given Array is Not a Fibonacci Series";



 return 0;
}

