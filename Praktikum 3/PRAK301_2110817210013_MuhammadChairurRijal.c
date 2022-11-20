#include <stdio.h>

int main() {
    int A, B;
    scanf("%d, %d", &A, &B);
    if( A < B ) {
        printf("%d, %d", A, B);
    } 
    else {
        printf("%d, %d", B, A);
    }
}