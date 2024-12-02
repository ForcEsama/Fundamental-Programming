#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guessNum, guess, chance, playAgain;
    char choice;

    srand(time(0));

    do
    {
        guessNum = rand() % 100 + 1;
        chance = 5;
        printf("\n==== PERMAINAN TEBAK ANGKA ====\n");
        printf("Saya telah memilih angka antara 1 - 100\n");
        printf("Tebaklah angka yang saya pilih dengan 5 kesempatan untuk menebak\n");

        while (chance > 0)
        {
            printf("\nMasukkan tebakan Anda : ");
            scanf("%d", &guess);

            if (guess > guessNum)
            {
                printf("Tebakan Anda terlalu tinggi!");
            }
            else if (guess < guessNum)
            {
                printf("Tebakan Anda terlalu rendah!");
            }
            else
            {
                printf("Selamat! Anda menebak dengan benar!\n");
                break;
            }

            chance--;
            printf("Kesempatan tersisa : %d\n", chance);
        }

        if (chance = 0)
        {
            printf("Maaf, Anda kehabisan kesempatan, Angka yang benar adalah %d.\n", guessNum);
        }

        printf("Apakah Anda ingin bermain lagi? (y/n) : ");
        scanf(" %c", &choice);

        switch (choice)
        {
        case 'y':
        case 'Y':
            playAgain = 1;
            break;
        case 'n':
        case 'N':
            playAgain = 0;
            printf("Terima kasih telah bermain\n");
            break;
        default:
            printf("Pilihan tidak valid, keluar dari permainan.\n");
            playAgain = 0;
            break;
        }

    } while (playAgain);

    return 0;
}