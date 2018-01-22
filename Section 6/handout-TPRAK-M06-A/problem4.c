// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 6
// Percobaan     : 4
// Tanggal       : 3 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem4.c
// Deskripsi     : Program ini akan menerima masukan 10 nama kemudian mengurutkannya secara ascending

//Mengakses Library
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//PROGRAM UTAMA
int main(void)
{
	//Define VARIABLE
	char input_nama[10][30],temp[30]; //mendeklarasikan array of character yang digunakan
	int i,j; //pencacah

	//Input DATA
	for (i=0;i<10;i++)
	{
		printf("Masukkan nama ke%d : \n",i+1);
		fgets(input_nama[i],30,stdin); //menerima input nama ke-i dengan iterasi
	}

	//PROCESS Sorting
	//Melakukan Sorting dengan metoda Selection Sort
	for (i=0;i<9;i++)
	{
		for (j=i+1;j<10;j++)
		{
			if (strcmp(input_nama[j],input_nama[i])<0) //kondisi untuk sorting ascending
			{
			strcpy(temp,input_nama[i]); //menukar elemen array ke-i dan elemen array ke-j, menggunakan fungsi strcpy karena yang digunakan adalah array of character
			strcpy(input_nama[i],input_nama[j]);
			strcpy(input_nama[j],temp);
			}
		}
	}

	//Output Result
	printf("Berikut ini list 10 nama setelah diurutkan ascending\n");

	for (i=0;i<10;i++)
	{
		printf("\t%s",input_nama[i]); //menampilkan nama secara ascending dengan iterasi
	}
	return 0; //mengakhiri program
}
