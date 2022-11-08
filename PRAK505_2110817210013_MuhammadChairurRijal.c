#include <stdio.h>
void Biodata(tahunLahir, nama, asal){
    int umur = 2022 - tahunLahir;

    printf("Perkenalkan Nama Saya : ", &nama);
    // printf("Umur Saya : ", tahun_sekarang - tahunLahir);    
    printf("\nUmur Saya : ", &umur);    
    printf("\nSaya adalah Angkatan : 2020");
    printf("\nAsal Saya dari : ", &asal);
}
int main() {
    int tahunLahir;
    char Namaku[20], AsalKota[15];

    scanf("%d",&tahunLahir); 
    scanf("%[^\n]%*c",&Namaku);
    scanf("%[^\n]%*c",&AsalKota); 
    Biodata(tahunLahir, Namaku, AsalKota); 

    

    return 0;
}