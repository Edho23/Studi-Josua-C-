#include <stdio.h> 

long int faktorial(int); 
int permutasi(int, int); 

int main () 
{ 
    int n, r; 
    printf("MENCARI PERMUTASI\n"); 
    printf("RUMUS Permutasi : P (n, r) = n! / (n-r)!\n"); 
    printf("\nMasukkan nilai n = "); 
    scanf("%d", &n); 
    printf("\nMasukkan nilai r = "); 
    scanf("%d", &r); 

    printf("\n%d data dipermutasikan %d = %d\n", n, r, permutasi(n,r)); 

    return 0; 
} 

long int faktorial(int x) 
{ 
    int fak, i; 
    fak = 1; 
    for(i = 1; i<=x; i++) 
        fak = fak * i; 
    return(fak); 
} 

int permutasi(int n, int r) 
{ 
    int hasil, temp; 
    temp = n - r; 
    hasil = faktorial(n) / faktorial(temp); 
    return(hasil); 
} 