#include<iostream>
#include<string>
using namespace std;
class Test
{
public:
    int a[5];


    void showData()
    {
        for(int i=0;i<5;i++)
        cout<<a[i]<<" , ";
    }

    void Reverse()
    {

        for(int i=0;i<5;i++)
        {
            int num=a[i],rev=0;
            while(num>0)
            {
                int rem=num%10;
                rev=rev*10+rem;
                num=num/10;
            }
            a[i]=rev;
        }
    }

};
int main()
{
 int x[5]={1234,5678,6547,8678,987};
 Test t;
 copy(begin(x),end(x),(t.a));

 t.showData();

 t.Reverse();

 cout<<"\n Reverse each element is:"<<endl;
 t.showData();
 return 0;
}
