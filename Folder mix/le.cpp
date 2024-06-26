#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;
    cout << "Bilangan genap dari 1 sampai " << n << " adalah: ";
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}