#include <iostream>

using namespace std;

class GameObject
{
    public:
        int key;
        string name;

        GameObject(int key, string name)
        {
            this->key = key;
            this->name = name;
        }
};