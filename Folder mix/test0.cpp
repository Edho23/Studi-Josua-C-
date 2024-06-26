#include <iostream>
using namespace std;

int main() {
    int N;
    bool Prima;
    char ulang;

    do {
        cout << "Input N value = ";
        cin >> N;

        for (int i = 1; i <= N; i++) {
            Prima = true;
            if (i == 1 || i == 2) {
                Prima = true;
            } else {
                for (int j = 2; j <= i - 1; j++) {
                    if (i % j == 0) {
                        Prima = false;
                    }
                }
            }
            if (Prima) {
                cout << i << "  ";
            }
        }

        cout << endl << "Ingin mengulang? (y/t)" << endl;
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}