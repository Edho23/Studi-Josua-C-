#include <iostream>
using namespace std;

int main() {
	
	cout << "IM TIREDDDDDD!!!!"<<endl;
    cout<<"SIIIIIIIII!!!!"<<endl;
	
    int data[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};

    cout << " before statement: ";
    for(int i = 0; i < 10; i++) {
        cout <<data[i] <<endl;
    }
    cout << endl;

    int changes = data[2];
    data[2] = data[6]; 
    data[6] = changes; 

    
    cout << " after statement: ";
    for(int i = 0; i < 10; i++) {
        cout << data[i] <<endl;
    }
    cout << endl;

    return 0;
}