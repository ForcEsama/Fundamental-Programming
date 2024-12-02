#include <stdio.h>

void hanoi(int n, char asal, char tujuan, char bantu)
{
    if (n == 1)
    {
        printf("Pindahkan cakram 1 dari tiang %c ke tiang %c\n", asal, tujuan);
        return;
    }
    hanoi(n - 1, asal, bantu, tujuan);
    printf("Pindahkan cakram %d dari tiang %c ke tiang %c\n", n, asal, tujuan);
    hanoi(n - 1, bantu, tujuan, asal);
}

int hitungLangkah(int n)
{
    if (n == 1)
        return 1;
    else
        return 2 * hitungLangkah(n - 1) + 1;
}

int main()
{
    int cakram;

    printf("Masukkan jumlah cakram : ");
    scanf("%d", &cakram);

    printf("Langkah-langkah untuk memindahkan %d cakram\n", cakram);
    hanoi(cakram, 'A', 'C', 'B');

    int totalLangkah = hitungLangkah(cakram);
    printf("\nJumlah total langkah yang diperlukan: %d\n", totalLangkah);

    return 0;
}