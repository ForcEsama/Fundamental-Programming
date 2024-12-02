#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
  unsigned long long factorial;
  int n;
  char input[100];
  char choice;

  do
  {
    factorial = 1; // Reset nilai faktorial untuk setiap iterasi

    // Meminta input angka dari pengguna
    while (1)
    {
      printf("Masukkan bilangan bulat : ");
      if (fgets(input, sizeof(input), stdin) != NULL)
      {
        int valid = 1;
        for (int i = 0; input[i] != '\0' && input[i] != '\n'; i++)
        {
          if (!isdigit(input[i]) && input[i] != '-') // Validasi hanya angka dan tanda negatif
          {
            valid = 0;
            break;
          }
        }
        if (valid && sscanf(input, "%d", &n) == 1)
        {
          break;
        }
        else
        {
          printf("Input tidak valid. Harap masukkan angka saja.\n");
        }
      }
    }

    // Menghitung faktorial
    if (n < 0)
    {
      printf("Faktorial tidak dapat dihitung untuk bilangan negatif.\n");
    }
    else
    {
      for (int i = 1; i <= n; i++)
      {
        factorial *= i;
      }
      printf("Faktorial dari %d adalah %llu\n", n, factorial);
    }

    // Menanyakan apakah pengguna ingin melanjutkan
    while (1)
    {
      printf("Apakah Anda ingin melanjutkan? (y/n): ");
      if (fgets(input, sizeof(input), stdin) != NULL)
      {
        if (sscanf(input, " %c", &choice) == 1 && (choice == 'y' || choice == 'n'))
        {
          break;
        }
        else
        {
          printf("Pilihan tidak valid. Harap masukkan 'y' untuk ya atau 'n' untuk tidak.\n");
        }
      }
    }

  } while (choice == 'y');

  printf("Terima kasih telah menggunakan program ini!\n");

  return 0;
}
