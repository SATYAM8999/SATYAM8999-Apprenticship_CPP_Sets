#include<iostream>
using namespace std;

class DeleteElement
{
 public:


    void deleteElement(int x[],int element)
    {

      int pos=-1;
      for(int i=0;i<10;i++)
      {
          if(x[i]==element)
            pos=i;
      }

      if(pos!=-1)
      {
          for(int i=pos;i<10;i++)
          {
              x[i]=x[i+1];
          }

      }
    }
};


int main()
{

    int a[]={12,32,45,6,65,765,3,43,21,45};


   cout<<"Before deleting Array is "<<endl;
    for (int i=0;i<10;i++)
    {
         cout<<a[i]<<" , ";
    }

    int element;
    cout<<"enter the element that we wont to delete"<<endl;
    cin>>element;

    DeleteElement de;
    de.deleteElement(a,element);

    cout<<"After deleting Array is "<<endl;
    for (int i=0;i<10;i++)
    {
         cout<<a[i]<<" , ";
    }

    return 0;
}
