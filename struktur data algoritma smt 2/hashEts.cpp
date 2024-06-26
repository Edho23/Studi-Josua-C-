#include <iostream>
#include <vector>

using namespace std;

class HashTable {
private:
    vector<int> table;
    int capacity;

    int hash1(int key) {
        return key % capacity;
    }

    int hash2(int key) {
        return 7 - (key % 7);
    }

public:
    HashTable(int capacity) {
        this->capacity = capacity;
        table.resize(capacity, -1);
    }

    void insert(int key) {
        int index = hash1(key);
        if (table[index] == -1) {
            table[index] = key;
        } else {
            int index2 = hash2(key);
            int i = 1;
            while (true) {
                int newIndex = (index + i * index2) % capacity;
                if (table[newIndex] == -1) {
                    table[newIndex] = key;
                    break;
                }
                i++;
            }
        }
    }

    bool search(int key) {
        int index = hash1(key);
        int index2 = hash2(key);
        int i = 0;
        while (table[(index + i * index2) % capacity] != key && table[(index + i * index2) % capacity] != -1 && i < capacity) {
            i++;
        }
        return table[(index + i * index2) % capacity] == key;
    }
};

int main() {
    HashTable hashTable(10);

    hashTable.insert(1462300072);
    
    int existingElement = 1462300072;
    if (hashTable.search(existingElement)) {
        cout << "Elemen " << existingElement << " ditemukan dalam tabel hash." << endl;
    } else {
        cout << "Elemen " << existingElement << " tidak ditemukan dalam tabel hash." << endl;
    }

    int nonExistingElement = 123456789;
    if (hashTable.search(nonExistingElement)) {
        cout << "Elemen " << nonExistingElement << " ditemukan dalam tabel hash." << endl;
    } else {
        cout << "Elemen " << nonExistingElement << " tidak ditemukan dalam tabel hash." << endl;
    }

    return 0;
}



