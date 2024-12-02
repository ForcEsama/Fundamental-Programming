#include <stdio.h>
#include <string.h>

int main()
{
    int jumlahPerulangan;
    printf("Masukkan jumlah data Mahasiswa : ");
    scanf("%d", &jumlahPerulangan);

    for (int i = 0; i < jumlahPerulangan; i++)
    {
        char nama[100];
        char nim[20];
        char prodi[50];
        char universitas[50];
        char alamat[100];

        printf("Sistem informasi data mahasiswa\n");

        printf("Masukkan nama : ");
        scanf(" %99[^\n]", nama);

        printf("Masukkan NIM : ");
        scanf(" %19[^\n]", nim);

        printf("Masukkan program studi : ");
        scanf(" %49[^\n]", prodi);

        printf("Masukkan universitas : ");
        scanf(" %49[^\n]", universitas);

        printf("Masukkan alamat : ");
        scanf(" %99[^\n]", alamat);

        printf("\nInformas data mahasiswa yang dimasukkan\n");
        printf("Nama          : %s\n", nama);
        printf("NIM           : %s\n", nim);
        printf("Program studi : %s\n", prodi);
        printf("Universitas   : %s\n", universitas);
        printf("Alamat        : %s\n", alamat);

        puts("\nTerima kasih atas informasi yang Anda diberikan!");
    }

    return 0;
}