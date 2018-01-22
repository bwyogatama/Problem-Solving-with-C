// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 8
// Percobaan     : 1
// Tanggal       : 10 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan menerima input n buah integer kemudian mengurutkannya secara descending menggunakan prosedur "sorting"

//mengakses library
#include <stdio.h>
// Deklarasi prosedur
/*PROCEDURE Sorting
*mengurutkan n buah integer secara descending
*Array of integer diurutkan menggunakan metoda selection sort
*Pre: jml_bil and Arr_int is defined */

void sorting (int Arr_int[], //Array of Integer
				int jml_bil); //jumlah bilangan

//PROGRAM UTAMA
int main(void){
	//Define VARIABLE
	int n;
	int bil[1000001]; //mendeklarasikan array of integer
	int i; //pencacah
	//INPUT Data
	printf("Masukkan banyaknya bilangan (n) :\n");
	scanf("%d",&n); //menerima masukan banyaknya bilangan
	for (i=0;i<n;i++) //menerima input bilangan ke-i dengan menggunakan iterasi
	{
		printf("Masukkan bilangan ke - %d :\n",i+1);
		scanf("%d",&bil[i]);
	}

	//PROCESS
	sorting(bil,n); //memanggil prosedur sorting

	//OUTPUT Result
	printf("Hasil pengurutan bilangan :\n");
	for (i=0;i<n;i++) //menampilkan hasil pengurutan bilangan menggunakan iterasi
	{
		printf("%d\n",bil[i]);
	}
	return 0;
}

// Definisi prosedur
/*PROCEDURE Sorting
*mengurutkan n buah integer secara descending
*Array of integer diurutkan menggunakan metoda selection sort
*Pre: jml_bil and Arr_int is defined */
void sorting (int Arr_int[], int jml_bil)
{
	int temp;
	int i,j; //pencacah
	//PROCESS
	//melakukan proses sorting secara descending dengan metode selection sort
	for (i=0;i<(jml_bil-1);i++)
	{
		for (j=i+1;j<jml_bil;j++)
		{
			if (Arr_int[j]>Arr_int[i]) //apabila nilai array pada indeks ke j lebih besar dibandingkan nilai array pada indeks ke i (kondisi untuk sorting descending)
			{
			temp = Arr_int[i]; //menukar isi matriks pada indeks ke i dengan indeks ke j
			Arr_int[i] = Arr_int[j];
			Arr_int[j] = temp;
			}
		}
	}
}
