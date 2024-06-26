#include <iostream>
using namespace std;

#define max 5

string dat[max];
int top=0;

bool isFull()
    {
        if(top>=max)
        {
            return true;
        } else 
        {
            return false;
        }
    }

bool isEmpty()
{
    if(top==0)
    {
        return true;
    } else 
    {
        return false;
    }
}

void display()
{
    if(!isEmpty())
    {
        cout<<"Queue data: "<<endl;
        for(int i= top - 1 ;i>=0;i--)
        {
            cout<<i+1<<". "<<dat[i]<<endl;
        }
    } else {
        cout<<"Queue is empty!"<<endl;
    }

    if(isFull()){
        cout << "Queue is full!" << endl;
    }
}

void enqueue()
{
    if(!isFull())
    {
        cout << "\nEnter data: ";
        cin >> dat[top];
        top++;
    } else {
        cout << "Queue is full!" << endl;
    }
}

void dequeue()
{
    if(!isEmpty())
    {
        for(int a= 0; a < top-1; a++)
        {
            dat[a] = dat[a+1];
            cout << "Dequeeu: "<< dat[a] << endl;
        }
        top--;
    } else {
        cout << "Queue is empty!" << endl;
    }
}

int main()
{
    int choice;
    string isi;

    

    queue:
        system("cls");
        display();
        cout << "\n========QUEUE OPERATIONS========\n" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

    if(choice==1)
    {
        system("cls");
        cout<<"Enqued" <<endl;
        enqueue();
        goto queue;
    } else if(choice==2)
    {
        system("cls");
        cout<<"Dequed" <<endl;
        dequeue();
        goto queue;
    } else if(choice==3){
        system("cls");
        cout<<"Thankyou for using this program!" <<endl;
        return 0;
    
    } else {
        system("cls");
        cout<<"Invalid input!" <<endl;
        goto queue;
    }
}