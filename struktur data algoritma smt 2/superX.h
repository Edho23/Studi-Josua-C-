#include <iostream>

using namespace std;

class superX
{
    public:
        int key;
        string x;

        superX(int key, string x)
        {
            this->key = key;
            this->x = x;
        }

         ~superX()
        {
            // Destructor for superX class
        }
};