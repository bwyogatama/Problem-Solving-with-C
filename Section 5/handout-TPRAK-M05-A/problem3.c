// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 5
// Percobaan     : 3
// Tanggal       : 29 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem3.c
// Deskripsi     : Program ini akan menjumlahkan 2 buah vektor berukuran 3x1 kemudian menampilkan hasil penjumlahan dan panjang vektor tersebut

#include <stdio.h> //mengakses library
#include <math.h> //mengakses library math.h untuk operasi square dan square root
int main(void)
{
	//Define VARIABLE
	float x1[3],x2[3],xhasil[3],panjang_vektor; //x1 adalah vektor pertama,x2 adalah vektor kedua, dan xhasil adalah vektor hasil penjumlahan
	int i; //pencacah

	//Input DATA
	printf("Masukkan vektor ke1 :\n");
	for (i=0;i<3;i++)
	{
		scanf("%f",&x1[i]);	//mengisi vektor ke 1 dengan 3 bilangan float
	}
	printf("Masukkan vektor ke2 :\n");
	for (i=0;i<3;i++)
	{
		scanf("%f",&x2[i]);	//mengisi vektor ke 2 dengan 3 bilangan float
	}

	//PROCESS
	for (i=0;i<3;i++)
	{
		xhasil[i] = x1[i] + x2[i]; //menjumlahkan kedua vektor
	}
	panjang_vektor = sqrt(pow(xhasil[0],2)+pow(xhasil[1],2)+pow(xhasil[2],2)); //menghitung panjang vektor

	//Output Result
    printf("Hasil penjumlahan vektor : ( %.2f , %.2f , %.2f )\n",xhasil[0],xhasil[1],xhasil[2]); //menampilkan vektor hasil penjumlahan

    printf("Panjang vektor hasil : %.2f\n",panjang_vektor); //menampilkan panjang vektor hasil penjumlahan

	return 0;//mengakhiri program
}
