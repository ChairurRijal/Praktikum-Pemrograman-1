#include <stdio.h> 
int main() {
char name[30], nim[30], kls[2], ttl[30],alamat[50], hobby[30], hp[20];

printf("Nama\t\t\t: "); 
    gets(name); 
printf("NIM\t\t\t: "); 
    gets(nim);
printf("Kelas Paralel\t\t: "); 
    gets(kls);
printf("Tempat/Tanggal Lahir\t: "); 
    gets(ttl);
printf("Alamat\t\t\t: "); 
    gets(alamat); 
printf("Hobby\t\t\t: "); 
    gets(hobby);
printf("No. HP\t\t\t: \n"); 
    gets(hp);

printf("Nama\t\t\t: %s\n", name); 
printf("NIM\t\t\t: %s\n", nim); 
printf("Kelas Paralel\t\t: %s\n", kls); 
printf("Tempat/Tanggal Lahir\t: %s\n", ttl); 
printf("Alamat\t\t\t: %s\n", alamat); 
printf("Hobby\t\t\t: %s\n", hobby); 
printf("No. HP\t\t\t: %s", hp);

return 0;
}