// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 5
// Percobaan     : 4
// Tanggal       : 29 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem4.c
// Deskripsi     : Program ini akan menerima input 2 buah matriks kemudian menampilkan hasil perkalian dari kedua matriks tersebut

#include <stdio.h> //mengakses library

int main(void)
{
	//Define VARIABLE
	int A[3][3],B[3][3],Hasil[3][3]; //variabel A untuk matriks A, B untuk matriks B, dan Hasil untuk hasil perkalian matriks
	int i,j,k; //pencacah

	//Input DATA
	printf("Masukkan Matriks A baris 1 :\n");
	scanf("%d %d %d",&A[0][0],&A[0][1],&A[0][2]); //menerima input elemen matriks pertama baris ke 1
	printf("Masukkan Matriks A baris 2 :\n");
	scanf("%d %d %d",&A[1][0],&A[1][1],&A[1][2]); //menerima input elemen matriks pertama baris ke 2
	printf("Masukkan Matriks A baris 3 :\n");
	scanf("%d %d %d",&A[2][0],&A[2][1],&A[2][2]); //menerima input elemen matriks pertama baris ke 3
	printf("Masukkan Matriks B baris 1 :\n");
	scanf("%d %d %d",&B[0][0],&B[0][1],&B[0][2]); //menerima input elemen matriks kedua baris ke 1
	printf("Masukkan Matriks B baris 2 :\n");
	scanf("%d %d %d",&B[1][0],&B[1][1],&B[1][2]); //menerima input elemen matriks kedua baris ke 2
	printf("Masukkan Matriks B baris 3 :\n");
	scanf("%d %d %d",&B[2][0],&B[2][1],&B[2][2]); //menerima input elemen matriks kedua baris ke 3

	//PROCESS
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			Hasil[i][j] = 0; //inisialisasi
			for (k=0;k<3;k++)
			{
				Hasil[i][j] = Hasil[i][j] + (A[i][k]*B[k][j]); //mengalikan Matriks A dan Matriks B
			}
		}
	}

	//Output RESULT
	printf("Hasil Perkalian Matriks A X Matriks B :\n");
	for (i=0;i<3;i++) //menampilkan hasil perkalian matriks pada layar console
	{
		for (j=0;j<3;j++)
		{
			if (j==2)
				printf("%d\n",Hasil[i][j]); //menambahkan enter apabila telah sampai pada kolom terakhir
			else
				printf("%d\t",Hasil[i][j]);
		}
	}

	return 0; //mengakhiri program
}
