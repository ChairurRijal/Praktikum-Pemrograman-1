#include <stdio.h> 
#include <math.h>

int main() {
    for(int i = 0; i <= 1; i++){ 
    float a, t, k, l, m;
    
    scanf("%f %f", &t, &m); 
    a = sqrt(m*m-t*t);
    k = t + m + a; l = 0.5 * a * t;
    printf("Alas = %.f cm\n", a); 
    printf("Tinggi = %.f cm\n", t); 
    printf("Keliling = %.f cm\n", k); 
    printf("Luas = %.f cm^2", l);
    }
    return 0;
}