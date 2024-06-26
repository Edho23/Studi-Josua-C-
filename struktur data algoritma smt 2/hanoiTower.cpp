#include <iostream>
using namespace std;

// Fungsi rekursif untuk menyelesaikan teka-teki Menara Hanoi dan mencetak setiap langkah
void menaraHanoi(int n, char dari_tiangan, char ke_tiangan,
                    char tiangan_bantu1,  int &langkah) {
    if (n == 0)
        return;
    if (n == 1) {
        cout << "Langkah " << ++langkah << ": Pindahkan cakram " << n << " dari tiang "
             << dari_tiangan << " ke tiang " << ke_tiangan << endl;
        return;
    }

    menaraHanoi(n - 2, dari_tiangan, tiangan_bantu1,  ke_tiangan, langkah);
    cout << "Langkah " << ++langkah << ": Pindahkan cakram " << n - 1 << " dari tiang "
         << dari_tiangan << " ke tiang " << tiangan_bantu1 << endl;
    cout << "Langkah " << ++langkah << ": Pindahkan cakram " << n << " dari tiang "
         << dari_tiangan << " ke tiang " << ke_tiangan << endl;
    cout << "Langkah " << ++langkah << ": Pindahkan cakram " << n - 1 << " dari tiang "
         << tiangan_bantu1 << " ke tiang " << ke_tiangan << endl;
    menaraHanoi(n - 2, tiangan_bantu1, ke_tiangan, dari_tiangan,  langkah);
}

// Program Utama
int main() {
    int n = 7; // Jumlah cakram
    int langkah = 0; // Penghitung langkah

    // A, B, C, dan D adalah nama tiang
    menaraHanoi(n, 'A', 'D', 'B', langkah);
    return 0;
}