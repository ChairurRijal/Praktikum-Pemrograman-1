#include <stdio.h>

int main() {
    int detik, menit, jam, hari;
    scanf("%d", &detik);
    menit = detik / 60;
    jam = menit / 60;
    hari = jam / 24;
    detik = detik % 60;
    menit = menit % 60;
    jam = jam % 24;
    
    if( hari > 0 ) {
        printf("%d hari ");
    }
    if( detik < 10 ) {
        if( menit < 10 ) {
            if( jam < 10 ) {
                printf("0%d:0%d:0%d", jam, menit, detik);
            } else {
                printf("%d:0%d:0%d", jam, menit, detik);
            }
        } else {
            if( jam < 10 ) {
                printf("0%d:%d:0%d", jam, menit, detik);
            } else {
                printf("%d:%d:0%d", jam, menit, detik);
            }
        }
    } else {
        if( menit < 10 ) {
            if( jam < 10 ) {
                printf("0%d:0%d:%d", jam, menit, detik);
            } else {
                printf("%d:0%d:%d", jam, menit, detik);
            }
        } else {
            if( jam < 10 ) {
                printf("0%d:%d:%d", jam, menit, detik);
            } else {
                printf("%d:%d:%d", jam, menit, detik);
            }
        }
    }
}