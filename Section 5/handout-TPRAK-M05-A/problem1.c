// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 5
// Percobaan     : 1
// Tanggal       : 29 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan melakukan sorting secara ascending terhadap 10 bilangan integer yang diinputkan user

#include <stdio.h> //mengakses library

int main(void)
{
	//Define VARIABLE
	int x[10],i,j,temp; //x adalah array of integer berelemen 10

	//Input DATA
	printf("Masukkan 10 bilangan integer :\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",&x[i]);	//mengisi array of integer dengan 10 bilangan integer
	}

	//PROCESS
	//melakukan proses sorting secara ascending dengan metode selection sort
	for (i=0;i<9;i++)
	{
		for (j=i+1;j<10;j++)
		{
			if (x[j]<x[i]) //apabila nilai array pada indeks ke j lebih kecil dibandingkan nilai array pada indeks ke i (kondisi untuk sorting ascending)
			{
			temp = x[i]; //menukar isi matriks pada indeks ke i dengan indeks ke j
			x[i] = x[j];
			x[j] = temp;
			}
		}
	}

	//Output Result
	printf("Barisan bilangan integer jika diurutkan secara ascending\n");
	for (i=0;i<10;i++) //menampilkan 10 bilangan integer yang telah diurutkan
	{
		if (i == 9)
			printf("%d\n",x[i]);
		else
			printf("%d ",x[i]);
	}
	return 0; //mengakhiri program
}
