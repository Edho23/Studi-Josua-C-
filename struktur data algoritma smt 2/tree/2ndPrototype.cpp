#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;

// Struktur untuk node dalam tree
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Fungsi untuk membuat node baru
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Fungsi untuk membuat tree dari array
Node* buildTree(int A[], int start, int end) {
    if (start > end) {
        return nullptr;
    }
    int mid = start + (end - start) / 2;
    Node* root = createNode(A[mid]);
    root->left = buildTree(A, start, mid - 1);
    root->right = buildTree(A, mid + 1, end);
    return root;
}

// Fungsi untuk mencari data dengan cara mendahulukan tree sebelah kiri
Node* searchLeft(Node* root, int target, string& path) {
    if (root == nullptr) {
        return nullptr;
    }
    path += " "; 
    path += to_string(root->data) + " ";
    if (root->data == target) {
        cout<<" ";
        return root;
    }
    if (target < root->data) {
        Node* result = searchLeft(root->left, target, path) ;
        cout<<" ";
        if (result != nullptr) {
            return result;
        }
    }
    path.pop_back(); // Remove the last node from the path
    cout <<" "<< path <<" "<< endl;
    return searchLeft(root->right, target, path);
}

// Fungsi untuk mencari data dengan cara mendahulukan tree level atasnya
Node* searchLevel(Node* root, int target, queue<Node*>& q, string& path) {
    if (root == nullptr) {
        return nullptr;
    }
    q.push(root);
    path += to_string(root->data) + " ";
    if (root->data == target) {
        cout<<" ";
        return root;
    }
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        if (current->left != nullptr) {
            q.push(current->left);
            path += to_string(current->left->data) + " ";
            if (current->left->data == target) {
                return current->left;
            }
        }
        if (current->right != nullptr) {
            q.push(current->right);
            path += to_string(current->right->data) + " ";
            if (current->right->data == target) {
                return current->right;
            }
        }
    }
    path.pop_back(); // Remove the last node from the path
    return nullptr;
}

// Fungsi untuk menampilkan tree dalam layar menggunakan inorder traversal
void printTree(Node* root) {
    if (root == nullptr) {
        return;
    }
    printTree(root->left);
    cout << root->data << " ";
    printTree(root->right);
}

int main() {
    int A[] = {3, 9, 15, 19, 25, 29, 37, 50, 53, 68, 71, 82, 88, 95, 100};
    int n = sizeof(A) / sizeof(A[0]);
    Node* root = buildTree(A, 0, n - 1);
    Node* resultLeft = nullptr;
    Node* resultLevel = nullptr;

    string pathDFS;
    string pathBFS;
    queue<Node*> q;

    int choice;
    int data;

    while(true){
    cout << "1. Print Tree" << endl;
    cout << "2. Search DFS" << endl;
    cout << "3. Search BFS" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Print Out Tree: ";
            printTree(root);
            cout << endl;
            break;

        case 2:
            cout << "Enter data to search: ";
            cin >> data;
            pathDFS = "";
            resultLeft = searchLeft(root, data, pathDFS);
            if (resultLeft != nullptr) {
                cout << "\nData " << data << " ditemukan dengan cara mendahulukan tree sebelah kiri dengan DFS." << endl;
                cout << "Rute jalannya: " << pathDFS <<" "<< endl;
            } else {
                cout << "\nData " << data << " tidak ditemukan dengan cara mendahulukan tree sebelah kiri." << endl;
            }
            break;

        case 3:
            cout << "Enter data to search: ";
            cin >> data;
            
            pathBFS = "";
            q = queue<Node*>();
            
            resultLevel = searchLevel(root, data, q, pathBFS);
            if (resultLevel != nullptr) {
                cout << "\nData " << data << " ditemukan dengan cara mendahulukan tree level atasnya dengan BFS." << endl;
                cout << "Rute jalannya: " << pathBFS <<" "<< endl;
            } else {
                cout << "\nData " << data << " tidak ditemukan dengan cara mendahulukan tree level atasnya." << endl;
            }
            break;

        case 4:
            cout << "Exiting..." << endl;
            exit(0);
            break;

        default: 
            cout<<"Invalid Option Studpid!!!";
            break;
    }
    }
}