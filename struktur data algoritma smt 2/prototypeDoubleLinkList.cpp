#include <iostream>
#include <string>

using namespace std;


struct Node {
    int data;
    Node* next;
    Node* prev;
};


class LD {
private:
    Node* head;
    Node* tail;

public:
    LD() {
        head = nullptr;
        tail = nullptr;
    }

    
    void addNodeFront(int value) {
        
            Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        newNode->prev = nullptr;

        if (head != nullptr) {
            head->prev = newNode;
        } else {
            tail = newNode;
        }
        head = newNode;
        

    }

   
    void addNodeBack(int value) {
        
            Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;
        newNode->prev = tail;

        if (tail != nullptr) {
            tail->next = newNode;
        } else {

            head = newNode;
        }
        tail = newNode;
        
    }

    
    void addNodeAt(int value, int position) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;
        newNode->prev = nullptr;

        
            if (position == 0) {
            addNodeFront(value);
        } else if (position > 0) {
            Node* current = head;
            for (int i = 1; i < position - 1; i++) {
                current = current->next;
            }
            newNode->next = current->next;
            newNode->prev = current;
            if (newNode->next != nullptr) {
                newNode->next->prev = newNode;
            } else {
                tail = newNode;
            }
            current->next = newNode;
        } else {
            addNodeBack(value);
        }
        
    }

    
    void deleteNode(int value) {
        
        if(head== nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node* current = head;
        while (current != nullptr) {
            if (current->data == value) {
                if (current->prev != nullptr) {
                    current->prev->next = current->next;
                } else {
                    head = current->next;
                }
                if (current->next != nullptr) {
                    current->next->prev = current->prev;
                } else {
                    tail = current->prev;
                }
                delete current;
                return;
            }
            
            current = current->next;
        }cout<<"The data you input is unavaible in the list!"<<endl;
        
    }

    
    void searchForward(int value) {
        
            
            Node* current = head;
            while (current != nullptr) {
            if (current->data == value) {
                cout << "Value found in the forward search." << endl;
                return;
            }
            current = current->next;
            }
        cout << "Value not found in the forward search." << endl;
        
    }

    
    void searchBackward(int value) {
        
            Node* current = tail;
        while (current != nullptr) {
            if (current->data == value) {
                cout << "Value found in the backward search." << endl;
                return;
            }
            current = current->prev;
        }
        cout << "Value not found in the backward search." << endl;
        
        
    }

   
    void display() {
        
        Node* current = head;
        cout << "\n-----[ DISPLAY NUMBERS ]-----"<<endl;
        while (current != nullptr) {
            cout <<"Data: "<< current->data << " "<<endl;
            current = current->next;
        }
        

        cout << endl;
        
    }
};

int main() {
    LD dll;

    int choice;
    int value;
    int position;

    while (true) {
        dll.display();
        cout << "\n\n========[ LINK LIST PROGRAM ]========" << endl;
        cout << "1. Add from front" << endl;
        cout << "2. Add from back" << endl;
        cout << "3. Add at specific position" << endl;
        cout << "4. Delete " << endl;
        cout << "5. Search Forward" << endl;
        cout << "6. Search Backward" << endl;
        cout << "7. Display" << endl;
        cout << "8. Exit" << endl;
        cout << "=======================================";
        cout << "\nChoose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
            system("cls");
                cout << "\n-----[ ADD NUMBERS AT FRONT ]-----"<<endl;
                cout << "Enter value to add: ";
                cin >> value;
                dll.addNodeFront(value);
                break;
            case 2:
            system("cls");
                cout << "\n-----[ ADD NUMBERS AT BACK ]-----"<<endl;
                cout << "Enter value to add: ";
                cin >> value;
                dll.addNodeBack(value);
                break;
            case 3:
            system("cls");
                cout << "\n-----[ ADD NUMBERS AT SPECIFIC POSITION ]-----"<<endl;
                cout << "Enter value to add: ";
                cin >> value;
                cout << "Enter position to add: ";
                cin >> position;
                dll.addNodeAt(value, position);
                break;
            case 4:
            system("cls");
                cout << "\n-----[ DELETE NUMBERS ]-----"<<endl;
                cout << "Enter value to delete: ";
                cin >> value;
                dll.deleteNode(value);
                break;
            case 5:
            system("cls");
                cout << "\n-----[ SEARCH FORWARD ]-----"<<endl;
                cout << "Enter value to search: ";
                cin >> value;
                dll.searchForward(value);
                break;
            case 6:
            system("cls");
                cout << "\n-----[ SEARCH BACKWARD ]-----"<<endl;
                cout << "Enter value to search: ";
                cin >> value;
                dll.searchBackward(value);
                break;
            case 7:
                cout << "\n-----[ DISPLAY NUMBERS ]-----"<<endl;
                dll.display();
                break;
            case 8:
            system("cls");
                cout << "\n-----[ EXIT PROGRAM ]-----"<<endl;
                cout << "Thank you for using this program." << endl;
                cout << "Have a nice day!" << endl;
                system("pause");
                exit(0);

                break;
                return 0;
            default:
                cout << "Invalid choice. Please choose again." << endl;
        }
    }

    return 0;
}