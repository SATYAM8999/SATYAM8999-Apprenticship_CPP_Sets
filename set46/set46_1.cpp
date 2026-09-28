#include<iostream>
using namespace std;
class Test
{
    public:
    int a,b,c;
    int getSum(int a1,int b1,int c1)
    {
        a=a1;
        b=b1;
        c=c1;
        return(a+b+c);
    }
    int  getSum( int x[],int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+x[i];
        }
        return sum;
    }

};
int main()
{
    Test t1;
    int a[]={1,2,3,4,5,6,7,8};
    int n=8;
    cout<<"Sum of Two Numbers="<<t1.getSum(10,20,30)<<endl;
    cout<<"Sum of Array element is ="<<t1.getSum(a,n)<<endl;
    return 0;
}
