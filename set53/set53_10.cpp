#include<iostream>
#include<string>
using namespace std;
class Student
{
public:

      int regno;
      string name;
      float per;
      virtual void operation()
      {
          cout<<"Enter register no,name and percentage of Student :"<<endl;
          cin>>regno>>name>>per;
          cout<<"\nRegister Number of Student is:"<<regno<<"\n"<<"name of Student:"<<name<<"\n"<<"percentage of student is:"<<per<<endl<<"\n\n";
      }

};
class Customer:public Student
{
public:
         int account_no,balance;
         void operation()
         {


         cout<<"Enter the account number of and balance of Customer:"<<endl;
         cin>>account_no>>balance;
         cout<<"\nAccount number of Customer is:"<<account_no<<"And "<<"balance is:"<<balance<<endl;
         }
};
int main()
{
    Student s,*ptr;
    ptr=&s;
    ptr->operation();

    Customer cs;
    ptr=&cs;
    ptr->operation();

    return 0;
}
