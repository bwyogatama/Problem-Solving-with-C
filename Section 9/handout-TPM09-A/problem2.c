// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 9
// Percobaan     : 2
// Tanggal       : 26 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem2.c
// Deskripsi     : program ini akan mengurutkan seluruh angka pada elemen array yang diinputkan pengguna secara ascending
                // Sebelum pengguna menginputkan tiap elemen array, program akan meminta terlebih dahulu jumlah elemen array

//mengakses library
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int n,i,j;
    int* x; //deklarasi variabel untuk dynamic array
    int temp; //variabel untuk menyimpan nilai sementara

	printf("Masukkan jumlah elemen pada array :\n");
	scanf("%d",&n); //menerima input jumlah elemen array

	//Alokasi Memori
    x = (int*) calloc (n,sizeof(int)); //Alokasi memori untuk array x dengan elemen sebanyak n

    //INPUT Data
    for (i=0;i<n;i++)
	{
        printf("Masukkan elemen ke-%d :\n",i);
		scanf("%d",&x[i]); //menerima input elemen array ke -i
	}
	//PROCESS
	//melakukan proses sorting secara ascending dengan metode selection sort
	for (i=0;i<(n-1);i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (x[j]<x[i]) //apabila nilai array pada indeks ke j lebih kecil dibandingkan nilai array pada indeks ke i (kondisi untuk sorting ascending)
			{
			temp = x[i]; //menukar isi matriks pada indeks ke i dengan indeks ke j
			x[i] = x[j];
			x[j] = temp;
			}
		}
	}
    //OUTPUT Result
	printf("Array yang tersusun secara ascending :\n");
    for (i=0;i<n;i++) //mencetak array yang sudah tersusun ascending dengan iterasi
    {
        if (i==n-1)
        printf("%d\n",x[i]);
        else
        printf("%d ",x[i]);
    }
 //End of Program
  return 0;
}
