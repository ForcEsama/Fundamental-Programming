#include <stdio.h>
#include <string.h>

void gabungkanString(char str1[], char str2[])
{
    strcat(str1, " ");
    strcat(str1, str2);
}

int main()
{
    char kata1[50], kata2[50];
    printf("Masukkan string pertama : ");
    scanf(" %[^\n]s", kata1);
    printf("Masukkan string kedua : ");
    scanf(" %[^\n]s", kata2);

    gabungkanString(kata1, kata2);
    printf("Hasil penggabungan : %s\n", kata1);

    return 0;
}