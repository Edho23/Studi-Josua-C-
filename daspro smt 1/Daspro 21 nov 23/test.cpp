#include <iostream>
#include <cstring>

using namespace std;

void jumlahKarakter(string kalimat) {
    int jumlah[100] = {0}; 

    
    int panjangKalimat = strlen(kalimat);
    for (int i = 0; i < panjangKalimat; ++i) {
        jumlah[kalimat[i]]++;
    }

    
    for (int i = 0; i < 100; ++i) {
        if (jumlah[i] > 0) {
            cout << "Karakter " << static_cast<char>(i) << " = " << jumlah[i] <<endl;
        }
    }
}

int main() {
    string kalimat;
    
    cout << "Masukan kata untuk di hitung tiap karakternya : ";
    getline(cin, kalimat);
    jumlahKarakter(kalimat);

    return 0;
}