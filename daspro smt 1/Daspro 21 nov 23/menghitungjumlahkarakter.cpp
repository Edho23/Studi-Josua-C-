#include <iostream>
#include <cstring>

using namespace std;

void jumlahKarakter(const char* kalimat) {
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
    const char* kalimat = "CUKABLYAT";
    cout << "String: " << kalimat <<endl;
    jumlahKarakter(kalimat);

    return 0;
}