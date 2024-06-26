#include <iostream>
using namespace std;

// Struktur untuk elemen queue
struct QueueElement {
    int data;
    QueueElement* next;
};

// Klas untuk Queue
class Queue {
private:
    QueueElement* front;
    QueueElement* rear;

public:
    Queue() {
        front = NULL;
        rear = NULL;
    }

    
    void enqueue(int value) {
        QueueElement* newElement = new QueueElement;
        newElement->data = value;
        newElement->next = NULL;

        if (rear == NULL) {
            front = rear = newElement;
        } else {
            rear->next = newElement;
            rear = newElement;
        }
    }

    
    void dequeue() {
        if (front == NULL) {
            cout << "\n\nQueue is empty." << endl;
            return;
        }

        QueueElement* temp = front;
        front = front->next;

        if (front == NULL) {
            rear = NULL;
        }

        cout<<"\nDequeued: "<< temp->data << endl;
        delete temp;
    }

    
    void display() {
        QueueElement* temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    int choice;
    int value;

    while (true) {

        

        cout << "\n========QUEUE OPERATIONS========\n" << endl;

        cout<<"Queue: ";
        q.display();
        cout<<endl;

        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}