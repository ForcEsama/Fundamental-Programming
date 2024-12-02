#include <stdio.h>

int main()
{
    int angka[5] = {1, 2, 3, 4, 5};
    int jumlah = 0;

    for (int i = 0; i < 5; i++)
    {
        jumlah += angka[i];
    }

    printf("jumlah semua elemen : %d\n", jumlah);

    return 0;
}