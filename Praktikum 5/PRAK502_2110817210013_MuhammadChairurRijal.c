#include <stdio.h> 
#include <math.h>
int hitung(int nilai1, int nilai2){
    return nilai1-nilai2;
//Lengkapi Function ini
}
int mutlak(int angka){
    return abs(angka);
}
int main()
{
    int Hasil;
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&c);
    scanf("%d",&b);
    scanf("%d",&d);
    Hasil = hitung(a,b) + hitung(c,d); 
    printf("%d",mutlak(Hasil));
    return 0;
}