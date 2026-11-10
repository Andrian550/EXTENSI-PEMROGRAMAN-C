#include <stdio.h>

#define MAKS 20

int* jml;

void pemasukan_data(float []);
void pengurutan_data(float []);
void penampilan_data(float []);

int main()
{
    float data[MAKS];

    // Memasukkan data
    pemasukan_data(data);

    // Mengurutkan data
    pengurutan_data(data);

    // Menampilkan data
    penampilan_data(data);

    return 0;
}

// Fungsi pemasukan data
void pemasukan_data(float x[])
{
    int i;

    printf("Jumlah data (maksimal %d) = ", MAKS);
    scanf("%d", &jml);

    if (jml < 1 || jml > MAKS)
    {
        printf("Jumlah data tidak valid!\n");
        jml = 0;
        return;
    }

    for (i = 0; i < jml; i++)
    {
        printf("Data ke-%d : ", i + 1);
        scanf("%f", &x[i]);
    }
}

// Fungsi pengurutan data (Ascending)
void pengurutan_data(float x[])
{
    int i, j;
    float temp;

    for (i = 0; i < jml - 1; i++)
    {
        for (j = 0; j < jml - 1 - i; j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}

// Fungsi penampilan data
void penampilan_data(float x[])
{
    int i;

    printf("\nData setelah diurutkan:\n");

    for (i = 0; i < jml; i++)
    {
        printf("%.2f ", x[i]);
    }

    printf("\n");
}