#include<iostream>
using namespace std;
class Two
{
public:int a=10,b=30;
      virtual void findBiggest()
      {
          int big1=(a>b)?a:b;
          cout<<"\nThe Biggest Number is:"<<big1;
      }


};
class Three
{
public:int a=10,b=200,c=40;
       virtual void findBiggest()
        {
            int big=(a>b && a>c)?a:(b>a && b>c)?b:c;
            cout<<"\nThe Biggest Number is:"<<big;
        }

};
class n_No:public Two,public Three
{
public: //int x[]={43,56,54,95,34,03};
        virtual void findBiggest()
        {
            int x[]={43,56,54,95,34,03};
            int big=x[0];
            for(int i=1;i<6;i++)
            {
                if(x[i]>big)
                    big=x[i];
            }
            cout<<"\nBiggest Number is:"<<big<<endl;
        }

};
int main()
{
    Two th,*tptr;

    tptr=&th;
    tptr->findBiggest();


    Three t,*thptr;
    thptr=&t;
    thptr->findBiggest();


    n_No n,*nptr;
    nptr=&n;
    nptr->findBiggest();
    return 0;
}
