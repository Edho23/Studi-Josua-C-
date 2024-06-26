#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector<int> irisan(vector<int> &set1, vector<int> &set2) {
    vector<int> result;
    for (int element : set1) {
        if (find(set2.begin(), set2.end(), element) != set2.end()) {
            result.push_back(element);
        }
    }
    return result;
}


vector<int> gabungan(vector<int> &set1, vector<int> &set2) {
    vector<int> result = set1;
    for (int element : set2) {
        if (find(result.begin(), result.end(), element) == result.end()) {
            result.push_back(element);
        }
    }
    return result;
}

int main() {
    vector<int> A = {6, 7, 8, 9, 10};
    vector<int> B = {6, 7, 8, 11};

    vector<int> hasilIrisan = irisan(A, B);
    vector<int> hasilGabungan = gabungan(A, B);

    cout << "Himpunan A: {";
    for (int elem : A) {
        cout << elem << " ";
    }
    cout << "}" << endl;

    cout << "Himpunan B: {";
    for (int elem : B) {
        cout << elem << " ";
    }
    cout << "}" << endl;

    cout << "Irisan Himpunan: {";
    for (int elem : hasilIrisan) {
        cout << elem << " ";
    }
    cout << "}" << endl;

    cout << "Gabungan Himpunan: {";
    for (int elem : hasilGabungan) {
        cout << elem << " ";
    }
    cout << "}" << endl;

    return 0;
}
