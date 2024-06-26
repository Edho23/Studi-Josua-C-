#include <iostream>
using namespace std;
int main() 
{
    double math, chems, physic, average;
    cout << "Input Math grade : "; 
    cin >> math ;

    cout << "Input Chems grade : "; 
    cin >> chems ;

    cout << "Input Physic grade : "; 
    cin >> physic ;
    average = (math + chems + physic)/3;
    cout<< "your average grade in 3 subjects: " << average << endl;
    return 0;
}