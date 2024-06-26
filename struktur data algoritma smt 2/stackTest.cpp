#include <iostream>
using namespace std;

int top = -1;
int arr[10];

void push(int x);
int pop();
int getTop();
bool isEmpty();

int main() {
    push(10);
    push(20);
    push(30);

    cout << "Top element is: " << getTop() << endl;

    pop();

    cout << "Top element is: " << getTop() << endl;

    return 0;
}

void push(int x) {
    if (top >= 9) {
        cout << "Stack is full";
        return;
    }
    arr[++top] = x;
}

int pop() {
    if (top < 0) {
        cout << "Stack is empty";
        return 0;
    }
    return arr[top--];
}

int getTop() {
    if (top < 0) {
        cout << "Stack is empty";
        return 0;
    }
    return arr[top];
}

bool isEmpty() {
    return (top < 0);
}