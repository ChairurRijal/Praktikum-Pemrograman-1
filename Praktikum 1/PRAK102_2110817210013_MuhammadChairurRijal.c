#include<stdio.h>

int main() {
float a,b,c,hasil; a = 4;
b = 8;
c = 3;

printf("Variabel a bernilai, %.0f\n", a);
printf("Variabel b bernilai, %.0f\n", b); 
printf("Variabel c bernilai, %.0f\n", c);

hasil = a*b/c;
printf("Hasil dari a dikali b dibagi c adalah %.6f", hasil);

return 0;
}