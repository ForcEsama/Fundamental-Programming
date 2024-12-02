#include <stdio.h>

void main()
{
    int tinggiBadan[10] = {164, 170, 165, 172, 169, 165, 164, 170, 172, 166};

    int length = sizeof(tinggiBadan) / sizeof(tinggiBadan[0]);
    int sum = 0;
    int i;

    for (i = 0; i < length; i++)
    {
        sum += tinggiBadan[i];
    }

    float rataRata = (float)sum / (float)length;
    printf("Rata-rata tinggi badan : %.2f\n", rataRata);
}
