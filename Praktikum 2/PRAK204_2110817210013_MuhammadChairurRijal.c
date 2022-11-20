#include <stdio.h>

int main(){
    for(int i = 0; i <= 1; i++){ 
    float jari2, t, v, l, k; 
    scanf("%f %f", &jari2, &t);
    v = 22 * jari2 * jari2 * t / 7;
    l = 2 * 22 * jari2 / 7 * (jari2 + t); 
    k = 2 * 22 * jari2 / 7; 
    
    printf("Volume = %.2f\n", v); 
    printf("Luas = %.2f\n", l); 
    printf("Keliling = %.2f\n", k);
    }
return 0;
}