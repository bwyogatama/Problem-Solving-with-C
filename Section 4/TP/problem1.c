// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 4
// Percobaan     : 1
// Tanggal       : 24 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan menerima input bilangan integer positif n dan r kemudian menghitung nilai kombinasinya (nCr)


#include <stdio.h>//mengakses library

//PROGRAM UTAMA
int main(void)
{
	//Define VARIABLE
	unsigned int n,r,i; //n dan r adalah input user sementara i adalah pencacah
	unsigned long long int nilai_kombinasi,numerator,denominator;
	
	//Input Data
	printf("Masukkan nilai n dan r :\n");
	scanf("%d %d",&n,&r); //menerima input n dan r dari user
	
	//PROCESS
	
	//menghitung nilai numerator dengan loop
	numerator = 1; //inisialisasi numerator
	for (i = n;i>=n-r+1; --i)
	{
		numerator = numerator*i; //numeratornya adalah n*(n-1)*(n-2)*.......*(n-r+1)
	}
	
	//menghitung nilai denominator dengan loop
	denominator = 1; //inisialisasi denominator
	for (i = 1;i<=r; ++i)
	{
		denominator = denominator * i; //denominatornya adalah r!
	}
	
	//menghitung nilai kombinasi
	nilai_kombinasi = numerator/denominator; //nilai kombinasi adalah hasil pembagian numerator dengan denominator
	
	//Output Result
	printf("Nilai Kombinasi %dC%d = %llu\n",n,r,nilai_kombinasi); //menampilkan nilai kombinasi pada layar console
	
	return 0;//mengakhiri program
}
