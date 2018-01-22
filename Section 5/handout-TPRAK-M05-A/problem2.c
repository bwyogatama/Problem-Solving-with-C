// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 5
// Percobaan     : 2
// Tanggal       : 29 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem2.c
// Deskripsi     : Program ini akan melakukan sorting secara descending terhadap 10 bilangan karakter yang diinputkan user

#include <stdio.h>

int main(void)
{
	//Define VARIABLE
	char x[10]; //x adalah array of character berelemen 10
	int i,j,temp;

	//Input DATA
	printf("Masukkan 10 bilangan karakter :\n");
	for (i=0;i<10;i++)
	{
		scanf("%c",&x[i]);	//mengisi array of character dengan 10 bilangan karakter
	}

	//PROCESS
	//melakukan proses sorting secara descending dengan metode selection sort
	for (i=0;i<9;i++)
	{
		for (j=i+1;j<10;j++)
		{
			if (x[j]>x[i]) //apabila nilai array pada indeks ke j lebih besar dibandingkan nilai array pada indeks ke i (kondisi untuk sorting descending)
			{
			temp = x[i]; //menukar isi matriks pada indeks ke i dengan indeks ke j
			x[i] = x[j];
			x[j] = temp;
			}
		}
	}

	//Output Result
	printf("Barisan karakter jika diurutkan secara descending\n");
	for (i=0;i<10;i++) //menampilkan 10 bilangan karakter yang telah diurutkan
	{
		if (i == 9)
			printf("%c\n",x[i]);
		else
			printf("%c",x[i]);
	}
	return 0; //mengakhiri program
}
