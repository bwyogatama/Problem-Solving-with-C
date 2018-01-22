// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 3
// Percobaan     : 2
// Tanggal       : 22 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem2.c
// Deskripsi     : Program ini akan menerima input tanggal dan bulan kemudian menghitung jumlah total hari dari awal tahun hingga tanggal dan bulan tersebut

#include <stdio.h> //mengakses library

int main(){
	//Define VARIABLE
	int tanggal,bulan, bulanmin, jmlhari , jml;
	
	//Input Data
	printf("Masukkan tanggal :\n");
	scanf("%d",&tanggal); //menerima input tanggal
	printf("Masukkan bulan :\n");
	scanf("%d",&bulan); //menerima input bulan
	
	//Conditional Statement
	switch (bulan) //menghitung jumlah total hari pada bulan sebelumnya dengan switch statement kemudian memasukkannya ke variable "jml"
	{
	case 1 : jml = 0 ; break;
	case 2 : jml = 31 ; break;
	case 3 : jml = 31 + 28 ; break;
	case 4 : jml = 31 + 28 + 31 ; break;
	case 5 : jml = 31 + 28 + 31 + 30 ; break;
	case 6 : jml = 31 + 28 + 31 + 30 + 31 ; break;
	case 7 : jml = 31 + 28 + 31 + 30 + 31 + 30 ; break;
	case 8 : jml = 31 + 28 + 31 + 30 + 31 + 30 + 31  ; break;
	case 9 : jml = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 ; break;
	case 10 : jml = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 ; break;
	case 11 : jml = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 ; break;
	case 12 : jml = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 ; break;
	}
	
	jmlhari = jml + tanggal - 1; //jumlah total hari adalah jumlah total hari pada bulan sebelumnya ditambah tanggal dikurangi 1
	//Output Result
    printf("Jumlah hari dari awal tahun menuju tanggal %d bulan %d adalah %d hari\n", tanggal, bulan, jmlhari);
	
	return 0; //mengakhiri program
}
