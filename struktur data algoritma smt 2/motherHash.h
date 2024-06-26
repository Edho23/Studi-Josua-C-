#include "GameObject.h"
#include <iostream>

using namespace std;

class motherHash
{
    GameObject** data;
    int size;
    int HashFunction(int key)
    {
        return key % size;
    }

    public:
    motherHash(int size)
    {
        this->size = size;
        data = new GameObject*[size];
        for(int i = 0; i < size; i++)
        {
            data[i] = NULL;
        }
    }

    void Display()
    {
        for(int i=0; i < size; i++)
        {
            if (data[i] != NULL)
            {
                cout<< "Index : " <<i 
                << " Key: " << data[i]->key
                << " NBI: " << data[i]->name<<endl;
            }
        }
    }

    void Input (GameObject* item)
    {
        int key = item->key;
        int hash = HashFunction(key);
        while (data[hash] != NULL)
        {
            ++hash;
            hash %=size;
        }
        data[hash] = item;


    }

    GameObject* Find()
    {
        int key;
        cin>>key;
        int hash = HashFunction(key);
        while (data[hash] != NULL)
        {
            if (data[hash]->key == key)
            {
                return data[hash];
            }
            hash++;
            hash = hash %=size;
        }
        return NULL;
    }
    
};
