// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 8
// Percobaan     : 2
// Tanggal       : 9 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem2.c
// Deskripsi     : Program ini akan menggambar sebuah bangunan dengan input ketinggian bangunan dari user menggunakan prosedur "bangunan"

//mengakses library
#include <stdio.h>


// Deklarasi Prosedur disini
/*PROCEDURE bangunan
 *menggambar sebuah bangunan dengan ketinggian x
 *Pre: x is defined*/
void bangunan(int x);

int main(){
    //Define VARIABLE
    int tinggi; //variabel untuk menyimpan ketinggian bangunan

    //INPUT Data
	printf("Masukkan ketinggian bangunan :\n");
	scanf("%d",&tinggi); //menerima input tinggi bangunan

	//OUTPUT Result
	bangunan (tinggi); //memanggil prosedur bangunan untuk menggambar bangunan
	return 0;

}


// Definisi Prosedur disini
/*PROCEDURE bangunan
 *menggambar sebuah bangunan dengan ketinggian x
 *Pre: x is defined*/
 void bangunan(int x)
{
    int i; //pencacah
    for (i=0;i<x;i++) //Menggambar bangunan menggunakan iterasi
    {
    printf("    ****    \n");
    }
	printf("************\n"); //Menggambar alas bangunan
}
