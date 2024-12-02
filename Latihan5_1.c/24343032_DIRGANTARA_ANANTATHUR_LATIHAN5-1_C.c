#include <stdio.h>

int hitungFaktorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * hitungFaktorial(n - 1);
    }
}

int main()
{
    int n;

    printf("Masukkan bilangan bulat positif : ");
    scanf("%d", &n);

    int faktorial = hitungFaktorial(n);
    printf("Faktorial dari %d adalah %d\n", n, faktorial);

    return 0;
}