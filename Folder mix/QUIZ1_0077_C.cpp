#include <iostream>
using namespace std;

int main() {
    int bilangan, sisa, terbalik = 0;
    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    while (bilangan != 0) {
        sisa = bilangan % 10;
        terbalik = terbalik * 10 + sisa;
        bilangan /= 10;
    }

    cout << "Bilangan terbalik: " << terbalik << endl;

    return 0;
}
