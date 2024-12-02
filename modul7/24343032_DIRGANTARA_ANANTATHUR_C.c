#include <stdio.h>

int main()
{
    int angka[5] = {10, 20, 30, 40, 50};
    int indeks, nilaiBaru;

    printf("Array sebelum perubahan : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Elemen ke-%d : %d\n", i + 1, angka[i]);
    }

    printf("Masukkan nomor elemen yang ingin diganti (1-5) : ");
    scanf("%d", &indeks);
    printf("Masukkan nilai baru : ");
    scanf("%d", &nilaiBaru);

    if (indeks >= 1 && indeks <= 5)
    {
        angka[indeks - 1] = nilaiBaru;
        printf("Array setelah perubahan : \n");
        for (int i = 0; i < 5; i++)
        {
            printf("Elemen ke-%d : %d\n", i + 1, angka[i]);
        }
    }
    else
    {
        printf("Indeks yang dimasukkan tidak valid!\n");
    }

    return 0;
}