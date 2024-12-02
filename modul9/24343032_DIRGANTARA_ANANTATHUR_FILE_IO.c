#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Mahasiswa
{
    char nama[50];
    char nim[15];
    char jurusan[30];
};

int main()
{
    struct Mahasiswa mahasiswa[100];
    int jumlahMahasiswa = 0;

    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        printf("File input.txt tidak dapat dibuka\n");
        return 1;
    }

    while (fscanf(inputFile, "%s %s %s", mahasiswa[jumlahMahasiswa].nama, mahasiswa[jumlahMahasiswa].nim, mahasiswa[jumlahMahasiswa].jurusan) != EOF)
    {
        jumlahMahasiswa++;
    }
    fclose(inputFile);

    printf("Data Mahasiswa dari File : \n");
    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        printf("Nama : %s, NIM : %s, Jurusan : %s\n", mahasiswa[i].nama, mahasiswa[i].nim, mahasiswa[i].jurusan);
    }

    printf("\nMasukkan data Mahasiswa baru : \n");
    printf("Nama    : ");
    scanf(" %[^\n]s", mahasiswa[jumlahMahasiswa].nama);
    printf("NIM     : ");
    scanf(" %s", mahasiswa[jumlahMahasiswa].nim);
    printf("Jurusan : ");
    scanf(" %s", mahasiswa[jumlahMahasiswa].jurusan);
    jumlahMahasiswa++;

    FILE *outputFile = fopen("output.txt", "w");
    if (outputFile == NULL)
    {
        printf("File output.txt tidak dapat dibuat!\n");
        return 1;
    }

    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        fprintf(outputFile, "%s %s %s\n", mahasiswa[i].nama, mahasiswa[i].nim, mahasiswa[i].jurusan);
    }

    fclose(outputFile);

    printf("\nData berhasil disimpan ke output.txt!\n");

    return 0;
}
