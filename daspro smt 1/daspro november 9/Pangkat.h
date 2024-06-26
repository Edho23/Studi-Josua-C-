int HitungPangkat(int Bil, int Pangkat)
{
	int Hasil;
   for(int I = 1 ; I <= Pangkat ; I++)
   {
   	Hasil=Hasil*Bil;
   }
   return Hasil;
}