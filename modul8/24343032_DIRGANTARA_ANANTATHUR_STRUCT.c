#include <stdio.h>
#include <string.h>

struct tanggal
{
    int hari, bulan, tahun;
};

struct mahasiswa
{
    char nama[30];
    int nim;
    struct tanggal tanggal_lahir;
};

struct mahasiswa data_mahasiswa;

int main()
{
    strcpy(data_mahasiswa.nama, "Dirgantara Anantathur");
    data_mahasiswa.nim = 24343032;
    data_mahasiswa.tanggal_lahir.hari = 23;
    data_mahasiswa.tanggal_lahir.bulan = 8;
    data_mahasiswa.tanggal_lahir.tahun = 2006;

    printf("Nama Mahasiswa        : %s\n", data_mahasiswa.nama);
    printf("Nomor Induk Mahasiswa : %d\n", data_mahasiswa.nim);
    printf("Tanggal Lahir         : %d-%d-%d\n", data_mahasiswa.tanggal_lahir.hari, data_mahasiswa.tanggal_lahir.bulan, data_mahasiswa.tanggal_lahir.tahun);
};
