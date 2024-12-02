#include <stdio.h>

int main()
{
    float nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    int lulus;

    printf("Masukkan nilai tugas (0-100) : ");
    scanf("%f", &nilaiTugas);
    printf("Masukkan nilai UTS (0-100) : ");
    scanf("%f", &nilaiUTS);
    printf("Masukkan nilai UAS (0-100) : ");
    scanf("%f", &nilaiUAS);

    nilaiAkhir = (0.3 * nilaiTugas) + (0.3 * nilaiUTS) + (0.4 * nilaiUAS);

    lulus = (nilaiAkhir >= 60) && (nilaiUAS >= 50);

    printf("\nNilai akhir anda : %.2f\n", nilaiAkhir);

    if (lulus)
    {
        printf("Selamat! Anda LULUS.\n");
    }
    else
    {
        printf("Maaf, Anda TIDAK LULUS..\n");
    }

    return 0;
}