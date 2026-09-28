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

    bool isPrime()
    {
       bool flag=true;
       for(int i=0;i<10;i++)
       {
          int num=a[i];
           for(int j=2;j<num;j++)
           {
              if(num%j==0)
              {
                  flag=false;
                  break;
              }

           }
           if(flag==false)
            break;
       }
       return flag;


    }

};
int main()
{
 int x[]={1,2,5,7,11,17,23,29,41,43};
 Test t;
 copy(begin(x),end(x),(t.a));

 t.showData();

 if(t.isPrime())
    cout<<"the all elements are Prime\n"<<endl;
 else
    cout<<"The all Elements are not prime"<<endl;


 return 0;
}


