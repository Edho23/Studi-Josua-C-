#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};


class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    
    void display() {
        Node* temp = head;

        cout << "\n-----[ DATA LIST ]-----"<<endl;
        while (temp != nullptr) {
            cout <<"Data List: "<< temp->data << " "<<endl;
            temp = temp->next;
        }
        cout << endl;
    }

    
    void addFromFront(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    
    void addFromEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    
    void addFromMiddle(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            int count = 1;
            while (temp->next != nullptr && count < (size() / 2)) {
                temp = temp->next;
                count++;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }


    void remove(int value) {
        if (head == nullptr) {
            return;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            if (temp->next->data == value) {
                Node* nodeToDelete = temp->next;
                temp->next = temp->next->next;
                delete nodeToDelete;
                return;
            }
            temp = temp->next;
        }
    }

   
    bool search(int value) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == value) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    
    int size() {
        int count = 0;
        Node* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }
};

int main() {
    LinkedList list;

    int choice;
    int value;

    while (true) {

        list.display();
        cout << "\n\n========[ LINK LIST PROGRAM ]========" << endl;
        cout << "1. Display Linked List" << endl;
        cout << "2. Add from Front" << endl;
        cout << "3. Add from End" << endl;
        cout << "4. Add from Middle" << endl;
        cout << "5. Remove" << endl;
        cout << "6. Search" << endl;
        cout << "7. Exit" << endl;
        cout << "=======================================";
        cout << "\nChoose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                list.display();
                break;
            case 2:
                system("cls");
                cout << "\n-----[ ADD NUMBERS AT FRONT ]-----"<<endl;
                cout << "Enter value to be inserted: ";
                cin >> value;
                list.addFromFront(value);
                break;
            case 3:
                system("cls");
                cout << "\n-----[ ADD NUMBERS AT LAST ]-----"<<endl;
                cout << "Enter value to be inserted: ";
                cin >> value;
                list.addFromEnd(value);
                break;
            case 4:
                system("cls");
                cout << "\n-----[ ADD NUMBERS AT MIDDLE ]-----"<<endl;
                cout << "Enter value to be inserted: ";
                cin >> value;
                list.addFromMiddle(value);
                break;
            case 5:
                system("cls");
                cout << "\n-----[ REMOVE NUMBERS ]-----"<<endl;
                cout << "Enter value : ";
                cin >> value;
                list.remove(value);
                break;
            case 6:
                system("cls");
                cout << "\n-----[ SEARCH NUMBERS ]-----"<<endl;
                cout << "Enter value : ";
                cin >> value;
                cout << "\nValue found: " << (list.search(value) ? "Data found!" : "Can't find data!") << endl;
                break;
            case 7:
            system("cls");
            cout << "\n-----[ EXIT ]-----"<<endl;
            cout << "Thank you for using this program!" << endl;
            system("pause");
                return 0;
            default:
                cout << "Invalid choice. Please choose again." << endl;
        }
    }

    return 0;
}