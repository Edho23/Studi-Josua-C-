#include <iostream>

using namespace std;

int main()
{
   float celcius, farenheit, reamur;
   cout<<"Masukan suhu yang diinginkan(celcius) = ";
   cin>>celcius;
   reamur = (celcius * 4/5);
   farenheit = (celcius * 9/5) + 32;
   cout<<"Suhu dalam reamur = " << reamur << " derajat reamur" << endl;
   cout<<"Suhu dalam farenheit = " << farenheit << " derajat farenheit" << endl;
   return 0;
}