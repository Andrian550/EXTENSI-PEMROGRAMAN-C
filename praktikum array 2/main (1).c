#include <stdio.h>

int main()
{
	int bln, thn, jhari;

	int jum_hari[12] = {
		31, 28, 31, 30, 31, 30,
		31, 31, 30, 31, 30, 31
	};

	puts("MEMPEROLEH JUMLAH HARI");
	puts("PADA SUATU BULAN DAN SUATU TAHUN");
	puts("--------------------------------");

	// Input bulan
	printf("Masukkan bulan (1...12): ");
	scanf("%d", &bln);

	// Input tahun
	printf("Masukkan tahunnya: ");
	scanf("%d", &thn);

	// Validasi bulan
	if (bln < 1 || bln > 12)
	{
		printf("Bulan tidak valid!\n");
		return 1;
	}

	// Menghitung jumlah hari
	if (bln == 2)
	{
		// Pemeriksaan tahun kabisat
		if ((thn % 400 == 0) ||
		        (thn % 4 == 0 && thn % 100 != 0))
		{
			jhari = 29;
		}
		else
		{
			jhari = 28;
		}
	}
	else
	{
		jhari = jum_hari[bln - 1];
	}

	// Menampilkan hasil
	printf("\nJumlah hari dalam bulan %d tahun %d adalah %d hari\n",
	       bln, thn, jhari);

	return 0;
}
