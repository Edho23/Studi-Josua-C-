#include <iostream>
#include <conio.h>

using namespace std;

int rowRows(int rows)
{
    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        
        cout <<endl;
    }
    return rows;
}

int main() {
    int rows;

    
    cout<< "Enter the number of rows: ";
    cin>> rows;
    rows = rowRows(rows);
    getch();
}