#include<iostream>
using namespace std;
class Test
{
public: int a;
         void getdata()
         {
             a=10;

         }
         void showData()
         {
             cout<<"Value of A :"<<a<<endl;

         }

};
int main()
{
   Test* t1=new Test();
   t1->getdata();
   t1->showData();
   return 0;
}

