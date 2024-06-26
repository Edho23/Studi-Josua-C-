#include <iostream>
#include <vector>

using namespace std;

int main() {
    int bilangan1, bilangan2;
    cout << "Masukkan bilangan 1: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan 2: ";
    cin >> bilangan2;

    
    int fpb = 1;
    for (int i = 1; i <= bilangan1 && i <= bilangan2; i++) {
        if (bilangan1 % i == 0 && bilangan2 % i == 0) {
            fpb = i;
        }
    }

    
    vector<int> fpb_list;
    for (int i = 1; i <= fpb; i++) {
        if (bilangan1 % i == 0 && bilangan2 % i == 0) {
            fpb_list.push_back(i);
        }
    }

    
    cout << "Faktor Persekutuan Bersama = ";
    for (int i = 0; i < fpb_list.size(); i++) {
        cout << fpb_list[i] << " ";
    }
    cout << endl;

    return 0;
}