//Josua Ekklesia Lokeswara
//NBI 1462300077

#include <iostream>

using namespace std;

int main()
{
	int pPersegipanjang, lPersegipanjang, luasPersegipanjang;
	double tSegitiga, aSegitiga, luasSegitiga ;
	double phi=3.14, r, luasLingkaran;
	double aTrapesium, bTrapesium, tTrapesium, luasTrapesium;
	
	cout<<"-----Luas dari persegi panjang brodi-----\n";
	cout<<"Input panjang : ";
	cin>>pPersegipanjang;
	cout<<endl;
	
	cout<<"Input lebar : ";
	cin>>lPersegipanjang;
	cout<<endl;
	
	cout<<"-----Luas dari segitiga brodi-----\n";
	cout<<"Input Tinggi : ";
	cin>>tSegitiga;
	cout<<endl;
	
	cout<<"Input Alas : ";
	cin>>aSegitiga;
	cout<<endl;
	
	cout<<"-----Luas lingkaran brodi-----\n";
	cout<<"Input jari-jari : ";
	cin>>r;
	cout<<endl;
	
	cout<<"-----Luas Trapesium brodi-----\n";
	cout<<"Input Alas : ";
	cin>>aTrapesium;
	cout<<endl;
	
	cout<<"Input B : ";
	cin>>bTrapesium;
	cout<<endl;
	
	cout<<"Input Tinggi : ";
	cin>>tTrapesium;
	cout<<endl;
	
	luasPersegipanjang = pPersegipanjang * lPersegipanjang;
	luasSegitiga = (aSegitiga * tSegitiga)/2;
	luasLingkaran = phi * r * r;
	luasTrapesium = (aTrapesium + bTrapesium)/2 * tTrapesium;
	
	
	cout<<"Luas Persegi Panjang : "<<luasPersegipanjang<<endl;
	cout<<"Luas Segitiga : "<<luasSegitiga<<endl;
	cout<<"Luas Lingkaran : "<<luasLingkaran<<endl;
	cout<<"Luas Trapesium : "<<luasTrapesium<<endl;
	
	return 0;
}
