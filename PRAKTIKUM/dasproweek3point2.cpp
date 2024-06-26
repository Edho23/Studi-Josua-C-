#include <iostream>
using namespace std;

void pointer(int a, int *aPtr)
{
    cout << "Bilangan yang diinputkan: " << a << endl;
    cout << "Alamat bilangan tersebut adalah: " << aPtr << endl;
}

int main()
{
    int bilangan1;
    int *aPtr = nullptr;

    cout << "Masukkan angka pertama: ";
    cin >> bilangan1;

    aPtr = &bilangan1;

    pointer(bilangan1, aPtr);

    return 0;
}