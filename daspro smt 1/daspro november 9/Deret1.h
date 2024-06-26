
float Rata2Deret(int N)
{
   float Total,Rata2;
	for(int I = 1 ; I <= N ; I++)
   {
   	Total=Total+I;
   }
   Rata2=Total/N;
   return Rata2;
}

int HitungDeret(int N)
{
   int Total=0;
   for(int I=1 ; I <= N ; I++)
   {
   	Total=Total+I;
   }
   return Total;
}
