#include<stdio.h>

int main() {
int a,t,m,K,L; 
a = 5;
t = 12;
m = sqrt(pow(a,2)+pow(t,2)); K = a+t+m;
L = a*t/2;

printf("Diketahui : \n");
printf("Alas = %d cm\nTinggi = %d cm\n\n", a, t);
printf("Jawab :\n"); 
printf("Sisi A = %d cm\n", t);
printf("Sisi B = %d cm\n", m); 
printf("Sisi C = %d cm\n\n", a); 
printf("Keliling = %d cm\n", K); 
printf("Luas = %d cm\n", L); return 0;
}