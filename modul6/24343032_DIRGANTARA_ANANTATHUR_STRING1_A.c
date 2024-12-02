#include <stdio.h>
#include <string.h>

int hitungPanjangString(char str[])
{
    return strlen(str);
}

int main()
{
    char kata[50];
    printf("Masukkan sebuah kata : ");
    scanf(" %s", kata);

    int panjang = hitungPanjangString(kata);
    printf("Panjang kata : %d\n", panjang);

    return 0;
}