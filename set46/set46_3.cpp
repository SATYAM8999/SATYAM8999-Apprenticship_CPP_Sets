#include<iostream>
using namespace std;
class Average
{
    public:
    int a,b,c;

    float getAverage(int a1,int b1)
    {
        a=a1;
        b=b1;
        float avg1=(float)(a+b)/2;
        return avg1;
    }
    float getAverage(int a11,int b11,int c11)
    {
        a=a11;
        b=b11;
        c=c11;
        float avg2=(float)(a+b+c)/3;
        return avg2;
    }
    float getAverage(int x[],int n)
    {
        int sum=0;

        for(int i=0;i<n;i++)
        {
            sum=sum+x[i];
        }
        float avg3=(float)sum/n;
        return avg3;
    }
};
int main()
{
    int a[]={1,2,3,4,5,6,7,8};
    int n=8;
    Average av1;
    float v1=av1.getAverage(10,20);
    float v2=av1.getAverage(1,2,3);
    float v3=av1.getAverage(a,n);
    cout<<"Average of two numbers"<<v1<<endl;
    cout<<"Average of three numbers"<<v2<<endl;
    cout<<"Average of Array numbers"<<v3<<endl;

}
