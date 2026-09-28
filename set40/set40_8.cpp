#include<iostream>
#include<math.h>
using namespace std;
int main()
{

   int x1,x2,x3,y1,y2,y3;
   cout<<"Enter first Two points"<<endl;
   cin>>x1>>y1;
   cout<<"Enter second Two points"<<endl;
   cin>>x2>>y2;
   cout<<"Enter Third Two points"<<endl;
   cin>>x3>>y3;

   int a=pow((x1-x2),2)+pow((y1-y2),2);
   int b=pow((x2-x3),2)+pow((y2-y3),2);
   int c=pow((x1-x3),2)+pow((y1-y3),2);
   cout<<a<<endl;
   cout<<b<<endl;

   cout<<c<<endl;



   if(((a+b)>c) && ((b+c)>a) &&((a+c)>b))
   {
       cout<<"Triangle is Formed"<<endl;

       if(a==b && a==c)
       {
           cout<<"Qduiletral Triangle"<<endl;
       }
       else if(a==b || b==c || a==c)
       {
           cout<<"Isoscale Triangle"<<endl;

       }
       else
       {
          cout<<"Scelene Triangle"<<endl;
       }
   }
   else
   {
       cout<<"Triangle is  Not Formed"<<endl;
   }




    return 0;
}

