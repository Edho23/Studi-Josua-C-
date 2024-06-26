#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout<<"Input a : ";
    cin>>a;

    cout<<"Input b : ";
    cin>>b;

    cout<<"A&B : "<< (a&b)<<endl;
    cout<<"A|B : "<< (a|b)<<endl;
    cout<<"A^B : "<< (a^b)<<endl;
    cout<<"A<<B : " << (a<<b)<<endl;
    cout<<"A>>B : " <<(a>>b)<<endl;
    
    return 0;
}