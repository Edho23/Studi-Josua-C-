#include <iostream>

using namespace std;

int main()
{
   float celcius, farenheit, reamur;
   cout<<"1, Masukan suhu yang diinginkan(celcius) = " "\n";
    cin>>celcius;
   reamur = (celcius * 4/5);
   farenheit = (celcius * 9/5) + 32;
   cout<<"Suhu dalam reamur = " << reamur << " derajat reamur" << endl;
   cout<<"Suhu dalam farenheit = " << farenheit << " derajat farenheit" << endl;
   return 0;
}