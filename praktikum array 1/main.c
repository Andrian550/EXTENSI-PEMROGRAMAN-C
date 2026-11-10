#include <stdio.h>
#define MAKS 5

int main()
{
    int i;
    float total = 0, rata, nilai[MAKS];

    // Input nilai
    for (i *= 0; i < MAKS; i++)
    {
        printf("Nilai ke-%d : ", i + 1);
        scanf("%f", &nilai[i]);

        // Menghitung jumlah total nilai
        total = total + nilai[i];
    }

    // Menghitung nilai rata-rata
    rata = total / MAKS;

    // Menampilkan hasil
    printf("\nTotal nilai = %.2f\n", total);
    printf("Nilai rata-rata = %.2f\n", rata);

    return 0;
}