#include<iostream>
using namespace std;
class Customer
{
    int account_no;
    float balance;
    string name;
    string address;
public:
    void createAccount()
    {
        cout<<"Enter the account no,name ,address and amount of Customer:"<<endl;
        cin>>account_no>>name>>address>>balance;

    }
    void displayAccount(int acc_no,Customer c[],int size)
    {
        int position=-1;
        for(int i=0;i<size;i++)
        {
            if(c[i].account_no==acc_no)
            {
                position=i;
                break;
            }

        }
        if(position==-1)
        {
            cout<<acc_no<<"is not exist\n"<<endl;
        }
        else
        {
            cout<<"ACCOUNT NO           :"<<c[position].account_no<<endl;
            cout<<"NAME                 :"<<c[position].name<<endl;
            cout<<"ADDRESS              :"<<c[position].address<<endl;
            cout<<"AMOUNT               :"<<c[position].balance<<endl;
          }
     }

    void depositAmount(int acc_no,Customer c[],int size,int amount)
    {
        int position=-1;
        for(int i=0;i<size;i++)
        {
            if(c[i].account_no==acc_no)
            {
                position=i;
                break;
            }

        }
        if(position==-1)
        {
            cout<<acc_no<<"is not exist\n"<<endl;
        }
        else
        {
           c[position].balance=c[position].balance+amount;
           cout<<"Amount is deposited in bank is "<<amount<<"and current balance is"<< c[position].balance<<endl;
        }


    }

    void withdrowAmount(int acc_no,Customer c[],int size,int withdrowamount)
    {
        int position=-1;
        for(int i=0;i<size;i++)
        {
            if(c[i].account_no==acc_no)
            {
                position=i;
                break;
            }

        }
        if(position==-1)
        {
            cout<<acc_no<<"is not exist\n"<<endl;
        }
        else
        {
          if(c[position].balance>=withdrowamount)
          {
            c[position].balance=c[position].balance-withdrowamount;
            cout<<"Amount is withdrawal in bank is "<<withdrowamount<<"and current balance is"<< c[position].balance<<endl;
          }

        }


    }
};
int main()
{
    Customer c[5];
    int i=0;
    int cont;
    do
    {
        cout<<" YOUR OPTIONS \n 1.CREATE ACCOUNT\n2.DEPOSIT\n3.WITHDROW\n4.DISPLAY AMOUNT\N";
        int choice;
        cout<<"\n \nENTER YOUR CHOICE:"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"YOU ARE IN A CREATE ACCOUNT:"<<endl;
                   if(i<5)
                   {
                     c[i].createAccount();
                     i++;
                   }
                 else
                  {
                      cout<<"TOU CAN NOT CREATE MORE ACCOUNT PLEASE CONTACT TO ADMIN AFFICE:"<<endl;

                  }
                  break;
            case 2:cout<<"YOU ARE IN A DEPOSIT MENU"<<endl;

                  cout<<"Enter the account no and amount to be deposited in back"<<endl;
                  int acnn;
                  int amount;
                  cin>>acnn>>amount;
                  c[0].depositAmount(acnn,c,i,amount);
                  break;



            case 3: cout<<"YOU ARE IN A WITHDROW MENU"<<endl;
                    cout<<"Enter the account no and amount to be withdrawal in back"<<endl;
                    int acnn1;
                    int wamount;
                    cin>>acnn1>>wamount;
                    c[0].withdrowAmount(acnn1,c,i,wamount);
                     break;




            case 4:cout<<"YOU ARE IN A DISPLAY MENU"<<endl;
                   cout<<"Enter the account number to be display\n";
                   int acn;
                   cin>>acn;
                   c[0].displayAccount(acn,c,i);
                   break;


            default:cout<<"Wrong choice please try again later"<<endl;

        }

      cout<<"DO YOU WANT TO CONTINUE PRESS 1 FOR YES AND 0 FOR N"<<endl;
      cin>>cont;
    }while(cont==1);
}
