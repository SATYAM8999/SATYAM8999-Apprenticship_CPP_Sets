#include<iostream>
using namespace std;

class DataKeeper
{
    public:
    int big,small;
};
class BigSmall
{
public:

    int a;
    void getData(int x)
    {
        a=x;
    }

    DataKeeper findBigSmall(BigSmall x[])
    {
        int b=x[0].a,s=x[0].a;
        for(int i=0;i<10;i++)
        {
            if(x[i].a>b)
                b=x[i].a;
            if(x[i].a<s)
                s=x[i].a;
        }
        DataKeeper dk;
        dk.big=b;
        dk.small=s;
        return dk;

    }
};
int main()
{
    BigSmall f[10];

    cout<<"enter the array Element:"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>f[i].a;
    }
     cout<<"array Elements are:"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<f[i].a<<" , ";
    }

    DataKeeper d=f[0].findBigSmall(f);
    cout<<"\n Big Element is:"<<d.big<<endl<<"\n Small Element is:"<<d.small<<endl;
    return 0;
}
