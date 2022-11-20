#include<stdio.h>

int main() {
float A,B,a,b,hasil1,hasil2;

A = 13;
B = 21;
a = 400000;
b = 350000;

printf("Harga sepatu A adalah %.0f\n", a); 
printf("Harga sepatu B adalah %.0f\n", b);

hasil1 = a-A/100*a; hasil2 = b-B/100*b;

printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f\n", hasil1);
printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f\n", hasil2);

return 0;
}