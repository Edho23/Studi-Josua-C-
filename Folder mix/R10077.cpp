#include <iostream>
using namespace std;


int valueBro (int N)
{
    int bil = 1;
     for (int i = 1; i <= N; i++) {
        
        if (i % 2 == 1) {
            cout << -bil;
        }
        
        else {
            cout << bil;
            bil++;
        }

        if (i < N) {
            cout << " ";
        }
    }
    return N;
}

int main()
{
    int N;
    cout<<"Input N value my bro: ";
    cin >> N;
    
    N = valueBro(N);

    cout << endl;
    return 0;
}