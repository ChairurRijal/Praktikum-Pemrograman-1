#include <stdio.h>

int main() {
    for(int i = 0; i <= 1; i++){ 
    float nilai1, nilai2;
    printf("Masukkan Nilai Pertama: "); 
    scanf("%f", &nilai1); 
    printf("Masukkan Nilai Kedua: "); 
    scanf("%f", &nilai2);
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.2f\" adalah \"%.2f\"\n\n",nilai1, nilai2, nilai1 + nilai2);
    }
    return 0;
}