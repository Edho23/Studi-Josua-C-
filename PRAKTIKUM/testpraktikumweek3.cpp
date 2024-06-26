#include <iostream>
using namespace std;

int faktorial(int n) {
    if (n == 0) {
        
        return 1;
    } else {
        
        return n * faktorial(n - 1);
    }
}

int permutasi(int n, int r) {
    return faktorial(n) / faktorial(n - r);
}

int main() {
    int n, r;
    cout << "Masukkan nilai n: ";
    cin >> n;
    cout << "Masukkan nilai r: ";
    cin >> r;
    cout << "Permutasi dari " << n << " dan " << r << " adalah " << permutasi(n, r) << endl;
    return 0;
}