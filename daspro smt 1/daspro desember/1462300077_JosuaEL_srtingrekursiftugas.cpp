#include <iostream>
#include <cstring>
using namespace std;

int jumlahKarakter(const char* kalimat, int batas, int& count_a, int& count_b) {
    if (kalimat[batas] == 0 ) 
    {
        return 0;
    }
    if (kalimat[batas] == 'a') 
    {
        count_a++;
    } 
    else if (kalimat[batas] == 'b') 
    {
        count_b++;
    }
    return jumlahKarakter(kalimat, batas + 1, count_a, count_b);
}

int main() {
    char kalimat[100];
    cout << "Masukkan string: ";
    cin.getline(kalimat, 100);
    int count_a = 0, count_b = 0;
    jumlahKarakter(kalimat, 0, count_a, count_b);
    if (count_a == count_b) {
        cout << "Jumlah karakter a dan b sama" << endl;
    } else {
        cout << "Jumlah karakter a dan b tidak sama" << endl;
    }
    return 0;
}