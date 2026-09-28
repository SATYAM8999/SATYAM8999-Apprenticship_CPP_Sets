#include<iostream>
using namespace std;
int main()
{
    int a,b;
    float result;
    try
    {
        cout<<"Enter two Numbers:"<<endl;
        cin>>a>>b;
        result=(float)a/b;

        throw b;
    }
    catch(int arg)
    {
        if(arg==0)
        {
              result=0;
            cout<<"Exception is:"<<arg<<"\tand Divide by zero Exception"<<endl;


        }
    }
      cout<<"Result is:"<<result<<endl;
      return 0;
}
