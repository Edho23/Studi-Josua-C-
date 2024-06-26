#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size;
    int* arr;

public:
    Queue(int n) {
        size = n;
        front = 0;
        rear = 0;
        arr = new int[size];
    }

    ~Queue() {
        delete[] arr;
    }

    void enqueue(int value) {
    if ((rear + 1) % size == front) {
        cout << "Queue is full. Cannot enqueue." << endl;
        return;
    }
    arr[rear % size] = value;
    rear = (rear + 1) % size;
}

   void dequeue() {
    if (front == rear) {
        cout << "Queue is empty. Cannot dequeue." << endl;
        return;
    }
    cout << "Dequeued: " << arr[front] << endl;
    front = (front + 1) % size;
}

    void display() {
        if (front == rear) {
            cout << "Queue is empty." << endl;
            return;
        }
        for (int i = front; i != rear; i = (i + 1) % size) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(6);
    int choice, value;

    while (true) {
        cout << "========QUEUE OPERATIONS========" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
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
}