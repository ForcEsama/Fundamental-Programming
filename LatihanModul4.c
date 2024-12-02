#include <stdio.h>
#include <stdlib.h>

int main(int argc, char argv[])
{
    int bilangan, sisaBagi;

    printf("Menentukan bilangan bulat ganjil atau genap\n");
    printf("Masukkan bilangan bulat : ");
    scanf("%d", &bilangan);

    sisaBagi = bilangan % 2;

    if (sisaBagi == 1)
    {
        printf("Bilangan %d merupakan bilangan ganjil.", bilangan);
    }
    else
    {
        printf("Bilangan %d merupakan bilangan genap.", bilangan);
    }

    return 0;
}