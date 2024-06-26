#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main() {
    int set1[] = {1, 2, 3, 4};
    int set2[] = {3, 4, 5, 6};
    int n = sizeof(set1) / sizeof(set1[0]);

    
    vector<int> intersection(n);
    auto it = set_intersection(set1, set1 + n, set2, set2 + n, intersection.begin());
    intersection.resize(it - intersection.begin());

   
    vector<int> unionSet(n * 2);
    it = set_union(set1, set1 + n, set2, set2 + n, unionSet.begin());
    unionSet.resize(it - unionSet.begin());

    
    cout << "Intersection: ";
    for (auto i : intersection) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Union: ";
    for (auto i : unionSet) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}