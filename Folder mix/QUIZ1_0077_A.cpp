#include <iostream>
using namespace std;

int main() {
    int bil1, bil2, fpb;
    cout << "Masukkan bilangan 1: ";
    cin >> bil1;
    cout << "Masukkan bilangan 2: ";
    cin >> bil2;

    for (int i = 2; i <= bil1 && i <= bil2; i++) {
        if (bil1 % i == 0 && bil2 % i == 0) {
            fpb = i;
        }
    }

    cout << "Faktor Persekutuan Bersama dari 1 " << bil1 << " dan 2 " << bil2 << " adalah: ";
    for (int i = 2; i <= fpb; i++) {
        if (fpb % i == 0) {
            cout << i << " ";
        }
    }

    return 0;
}