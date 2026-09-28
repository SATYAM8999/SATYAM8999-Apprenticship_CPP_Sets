#include<iostream>
using namespace std;
class Student
{
public:
     int roll;
     string name;
     float percentage;
     void getData()
     {
         cin>>roll>>name>>percentage;

     }
     void showData()
     {
         cout<<"   "<<roll<<"  "<<name<<"  "<<percentage<<endl;
     }
};
class Sorter
{
public:

      void  getSortedData(Student s[])
       {
           for(int i=0;i<4;i++)
           {
               for(int j=i+1;j<5;j++)
               {
                   if(s[i].percentage<s[j].percentage)
                   {
                       Student temp=s[i];
                       s[i]=s[j];
                       s[j]=temp;
                   }
               }
           }
       }
};
int main()
{


  Student s[5];

  cout<<"Enter the Student information:\n";
  for(int i=0;i<5;i++)
  {
     cout<<"Enter the Student roll no,name,percentage:"<<i+1<<endl;
     s[i].getData();

  }
  for(int i=0;i<5;i++)
  {
     s[i].showData();

  }
  Sorter sor;
  sor.getSortedData(s);

  cout<<"After Sorting  Student information:\n";

 for(int i=0;i<5;i++)
  {
     s[i].showData();

  }

  return 0;
}
