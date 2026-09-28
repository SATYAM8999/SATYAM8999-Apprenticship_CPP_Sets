#include <iostream>
using namespace std;

class Stack
 {
    int a[5];
    int index=0;

public:
    void push(int element)
     {
        if (index<5)
        {
            a[index++]=element;
            cout<<"\nPushed the element into stack successfully"<<element;
        }
        else
        {
            cout<<"Stack is full\n";
        }
    }

    void pop()
     {
        if(index==0)
        {
            cout<<"Stack is empty\n";

        }
        int del=a[--index];
        cout<<"\nPopped element is: "<<del;
    }

    void display()
    {
        if (index ==0)
        {
            cout <<"Stack is empty\n";

        }
        cout << "Stack is ";
        for (int i =0;i<index;i++)
            cout << a[i] <<", ";

    }
};

int main()
{
    Stack s;
    int choice, cont;
    do {
        cout << "1.PUSH 2.POP 3.DISPLAY.\n Enter Your Choice: ";
        cin >>choice;
        if(choice == 1)
        {
            int x;
            cout<<"Enter element: ";
            cin>>x;
            s.push(x);
        }
        else if(choice == 2)
        {
            s.pop();

        }
        else if (choice == 3)
        {

            s.display();
        }
        else
        {
            cout << "Invalid choice\n";
        }
        cout << "\nDo YOu Want to Continue? press 1.Yes 0. for No: ";
        cin >> cont;
    } while(cont == 1);
    return 0;
}

