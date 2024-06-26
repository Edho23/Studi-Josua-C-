#include <iostream>
using namespace std;

struct LinkL
{
    int x;

    
    LinkL *next;
};

LinkL *head, *tail, *cur, *newNode, *del;
LinkL l;

void addFirst(int x)
{
    newNode = new LinkL();
    newNode->x = x;
    newNode->next = head;
    head = newNode;
}

void addLast(int x)
{
    newNode = new LinkL();
    newNode->x = x;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}


void firstLink(int x)
{
    
    head = new LinkL();
    head->x= x;
    head->next = NULL;
}



void output()
{
    cur = head;
    while(cur != NULL)
    {   
        
        cout<<"Data: "<<cur->x;
        cur = cur->next;
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    int choice;
    int x = l.x;

    while(true)
    {
        cout << "========[ LINK LIST PROGRAM ]========" << endl;
        cout << "1. Link" << endl;
        cout << "2. Add front" << endl;
        cout << "6. Add last" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: 
                cout << "\nEnter the value to be inserted: ";
                cin >> l.x;
                firstLink(l.x);
                break;
            case 2:
                cout << "\n-----[ ADD NUMBERS AT FRONT ]-----"<<endl;
                cout << "Enter the value to be inserted: ";
                cin >> l.x;
                addFirst(l.x);
                break;
            case 6:
                cout << "\n-----[ ADD NUMBERS AT LAST ]-----"<<endl;
                cout << "Enter the value to be inserted: ";
                cin >> l.x;
                addLast(l.x);
                break;

            case 4:
                cout<<"\n------[ LINK LIST DATA ]------"<<endl;
                output();
                break;

            case 5:
                cout<< "\n-----[ EXIT ]-----"<<endl;
                cout<< "THANK YOU. . ."<<endl;
                
                exit(0);
                break;
        }

    }
    
}