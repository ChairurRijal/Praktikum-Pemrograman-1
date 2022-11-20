#include<stdio.h>

int main() {
int s1,s2,s3,h,k,th;

s1 = 4;
s2 = 5;
s3 = 7;
h = 85000;
k = s1+s2+s3; 
th = k*h;

printf("Diketahui :\n");
printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", s1,s2,s3); 
printf("Keliling Tanah Pak Dengklek adalah %d\n", k);
printf("Harga tanah Per Meter adalah %d\n\n", h); printf("Jawaban :\n");
printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", th);
}