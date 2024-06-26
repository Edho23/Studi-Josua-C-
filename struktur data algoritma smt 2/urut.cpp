#include <iostream>
using namespace std;

int main() {
    // Array arr1 dan arr2
    int A[3] = {23, 47, 65};
    int B[4] = {14, 35, 57, 94};
    int merged[7];

    cout<<"A :";
    for(int i = 0; i < 3; i++) 
    {
        cout<<A[i]<<", ";
    }

    cout<<"\nB :";
    for(int i = 0; i < 4; i++)
    {
        cout<<B[i]<<", ";
    }

    int index1 = 0, index2 = 0, mergedIndex = 0;
    while (index1 < 3 && index2 < 4) 
    {
        if (A[index1] <= B[index2]) {
            merged[mergedIndex++] = A[index1++];

        } else {
            merged[mergedIndex++] = B[index2++];
        }
    }
    while (index1 < 3) {
        merged[mergedIndex++] = A[index1++];
    }
    while (index2 < 4) {
        merged[mergedIndex++] = B[index2++];
    }

    cout << "\nC: ";
    for (int i = 0; i < 7; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}