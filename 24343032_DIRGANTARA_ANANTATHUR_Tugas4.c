#include <stdio.h>
#include <string.h>

#define MAX_BUKU 100
#define MAX_STR 100

// Struktur Buku
typedef struct
{
    char judul[MAX_STR];
    char pengarang[MAX_STR];
    int tahunTerbit;
} Buku;

// Deklarasi array buku dan variabel jumlah buku
Buku perpustakaan[MAX_BUKU];
int jumlahBuku = 0;

// Fungsi untuk menambah buku
void tambahBuku()
{
    if (jumlahBuku < MAX_BUKU)
    {
        Buku *bukuBaru = &perpustakaan[jumlahBuku];

        printf("Masukkan Judul Buku: ");
        fgets(bukuBaru->judul, MAX_STR, stdin);
        bukuBaru->judul[strcspn(bukuBaru->judul, "\n")] = '\0'; // Menghapus newline

        printf("Masukkan Pengarang: ");
        fgets(bukuBaru->pengarang, MAX_STR, stdin);
        bukuBaru->pengarang[strcspn(bukuBaru->pengarang, "\n")] = '\0';

        printf("Masukkan Tahun Terbit: ");
        scanf("%d", &bukuBaru->tahunTerbit);
        getchar(); // Menghapus newline dari buffer

        jumlahBuku++;
        printf("Buku berhasil ditambahkan!\n");
    }
    else
    {
        printf("Perpustakaan penuh! Tidak dapat menambah buku lagi.\n");
    }
}

// Fungsi untuk menampilkan daftar buku
void tampilkanBuku()
{
    if (jumlahBuku == 0)
    {
        printf("Tidak ada buku di perpustakaan.\n");
    }
    else
    {
        printf("Daftar Buku di Perpustakaan:\n");
        for (int i = 0; i < jumlahBuku; i++)
        {
            Buku *buku = &perpustakaan[i];
            printf("%d. Judul: %s, Pengarang: %s, Tahun Terbit: %d\n", i + 1, buku->judul, buku->pengarang, buku->tahunTerbit);
        }
    }
}

// Fungsi untuk mencari buku berdasarkan judul
void cariBuku()
{
    char judulCari[MAX_STR];
    printf("Masukkan judul buku yang dicari: ");
    fgets(judulCari, MAX_STR, stdin);
    judulCari[strcspn(judulCari, "\n")] = '\0';

    int ditemukan = 0;
    for (int i = 0; i < jumlahBuku; i++)
    {
        Buku *buku = &perpustakaan[i];
        if (strcmp(buku->judul, judulCari) == 0)
        {
            printf("Buku ditemukan: Judul: %s, Pengarang: %s, Tahun Terbit: %d\n", buku->judul, buku->pengarang, buku->tahunTerbit);
            ditemukan = 1;
            break;
        }
    }
    if (!ditemukan)
    {
        printf("Buku dengan judul '%s' tidak ditemukan.\n", judulCari);
    }
}

int main()
{
    int pilihan;
    do
    {
        printf("\n=== Manajemen Buku Perpustakaan ===\n");
        printf("1. Tambah Buku\n");
        printf("2. Tampilkan Daftar Buku\n");
        printf("3. Cari Buku berdasarkan Judul\n");
        printf("4. Keluar\n");
        printf("Pilih opsi: ");
        scanf("%d", &pilihan);
        getchar(); // Menghapus newline dari buffer input

        switch (pilihan)
        {
        case 1:
            tambahBuku();
            break;
        case 2:
            tampilkanBuku();
            break;
        case 3:
            cariBuku();
            break;
        case 4:
            printf("Keluar dari program.\n");
            break;
        default:
            printf("Opsi tidak valid. Silakan coba lagi.\n");
        }
    } while (pilihan != 4);

    return 0;
}
