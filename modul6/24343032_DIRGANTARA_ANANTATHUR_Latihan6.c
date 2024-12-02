#include <stdio.h>
#include <string.h>

void main()
{

    char kalimat1[] = "Universitas Negeri Padang, disingkat UNP adalah perguruan tinggi negeri di Padang, Sumatra Barat, Indonesia, yang berdiri pada 23 Oktober 1954. ";
    char kalimat2[] = "Rektor Universitas Negeri Padang sejak 20 Juli 2016 adalah Prof.Drs.H.Ganefri, M.Pd., Ph.D. Kampus utamanya terletak di Jalan Prof.Dr.Hamka, Air Tawar, Kota Padang.Sedangkan lokasi kampus lainnya terletak di Lubuk Buaya, Ulu Gadut, Limau Manis, Kota Bukittinggi, dan Kota Pariaman.";

    strcat(kalimat1, kalimat2);

    // gabungkan kalimat 1 dan kalimat 2
    printf("%s\n\n", kalimat1);

    // hitung panjang string yang terdapat pada kalimat1 setelah digabungkan
    int panjang_kalimat1;
    panjang_kalimat1 = strlen(kalimat1);

    printf("Panjang kalimat 1 adalah %d karakter\n", panjang_kalimat1);
    //
}