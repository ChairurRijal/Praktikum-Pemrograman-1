#include <stdio.h> 
int reverse(int angka){
    int reminder;
    int reverse = 0;
    while (angka != 0) 
    {
        reminder = angka % 10;
        reverse = reverse * 10 + reminder;
        angka /= 10;
    }
    return reverse;
}
int main() { 
    int A, B;
    scanf("%d %d",&A,&B); 
    A=reverse(A); 
    B=reverse(B);
    int C = A+B; 
    printf("%d",reverse(C));
}