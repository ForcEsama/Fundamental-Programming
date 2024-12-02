#include <stdio.h>

int main()
{
    int angka[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        printf("Elemen ke-%d : %d\n", i + 1, angka[i]);
    }

    return 0;
}