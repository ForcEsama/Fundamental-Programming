#include <stdio.h>
#include <string.h>

int bandingkanString(char str1[], char str2[])
{
    return strcmp(str1, str2);
}

int main()
{
    char string1[100], string2[100];

    printf("Masukkan string pertama: ");
    scanf(" %[^\n]", string1);
    printf("Masukkan string kedua: ");
    scanf(" %[^\n]", string2);

    int hasil = bandingkanString(string1, string2);

    if (hasil == 0)
    {
        printf("String sama.\n");
    }
    else
    {
        printf("String tidak sama.\n");
    }

    return 0;
}
