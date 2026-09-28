#include<iostream>
using namespace std;
class Test
{
  public:
      int n;
      void getData();


};
void Test::getData()
{
    cout<<"Enter the number for addition:";
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;

    }
    cout<<"Sum ="<<sum<<endl;
}

int main()
{
    Test t;
    t.getData();
    return 0;
}
