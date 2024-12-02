#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_BUFFER 1000

int hitungKata(FILE *file)
{
    char buffer[MAX_BUFFER];
    int jumlahKata = 0;
    char *kata;

    while (fgets(buffer, MAX_BUFFER, file) != NULL)
    {
        kata = strtok(buffer, " \t\n");
        while (kata != NULL)
        {
            jumlahKata++;
            kata = strtok(NULL, " \t\n");
        }
    }

    return jumlahKata;
}

int main()
{
    FILE *file;
    char namaFile[100];
    int jumlahKata;
    clock_t start, end;
    double waktuEksekusi;

    printf("Masukkan nama file : ");
    scanf("%s", namaFile);

    file = fopen(namaFile, "r");
    if (file == NULL)
    {
        printf("Gagal membuka file %s.\n", namaFile);
        return 1;
    }

    start = clock();
    jumlahKata = hitungKata(file);
    end = clock();
    waktuEksekusi = (double)(end - start) / CLOCKS_PER_SEC;
    fclose(file);

    printf("Jumlah kata dalam file : %d\n", jumlahKata);
    printf("Waktu eksekusi         : %.5f detik\n", waktuEksekusi);

    return 0;
}