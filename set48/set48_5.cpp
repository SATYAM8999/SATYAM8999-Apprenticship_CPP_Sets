#include<iostream>
using namespace std;

class Queue
{
    int q[5];
    int index=0;

public:
    void pushElement(int element)
    {
        if (index<5)
        {
            q[index++]=element;
            cout<<"Element "<< element<<" is pushed successfully"<< endl;
        }
        else
        {
            cout<<"Queue is full"<<element<<endl;
        }
    }

    void popElement()
    {
        if (index == 0)
        {
            cout << "Queue is empty. Nothing to pop." << endl;
            return;
        }

        int deleted_element = q[0];
        for (int i = 0; i < index - 1; i++)
        {
            q[i] = q[i + 1];
        }
        index--;

        cout << "Popped element is: " << deleted_element << endl;
    }

    void displayQueue()
    {
        if (index==0)
        {
            cout<<"Queue is empty."<<endl;

        }

        cout << "Queue is: ";
        for (int i= 0;i< index;i++)
        {
            cout << q[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue que;
    int cont;

    do
    {
        cout <<"\nYOUR CHOICES ARE\n";
        cout << "1. PUSH\n2. POP\n3. DISPLAY\n";
        cout << "Enter your choice: ";

        int choice;
        cin>>choice;

        switch (choice)
        {
            case 1:
            {
                int element;
                cout<<"Enter the element to be pushed: ";
                cin >>element;
                que.pushElement(element);
                break;
            }

            case 2:
                que.popElement();
                break;

            case 3:
                que.displayQueue();
                break;

            default:
                cout<<"Invalid choice! Please try again." << endl;
                break;
        }

        cout <<"\nDO YOU WANT TO CONTINUE? 1.YES 0.NO:";
        cin >>cont;
        cout << "--------------------------------------------------" << endl;

    } while (cont == 1);

    return 0;
}
