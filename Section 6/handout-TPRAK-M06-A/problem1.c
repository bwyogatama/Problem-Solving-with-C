// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 6
// Percobaan     : 1
// Tanggal       : 3 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan menerima masukan 2 buah kalimat kemudian membandingkan apakah kedua kalimat tersebut sama atau tidak

//Mengakses Library
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//PROGRAM UTAMA
int main(void)
{

	//Define VARIABLE
	char kalimat1[100],kalimat2[100]; //mendeklarasikan array of character

	//Input DATA
	printf("Masukkan kalimat ke1 :\n");
	fgets(kalimat1,100,stdin); //menerima input kalimat pertama
	printf("Masukkan kalimat ke2 :\n");
	fgets(kalimat2,100,stdin); //menerima input kalimat kedua

	//Output Result
	if	(strcmp(kalimat1,kalimat2)==0)
		printf("Kedua kalimat sama\n"); //output yang dikeluarkan apabila kedua kalimat sama
	else
		printf("Kedua kalimat tidak sama\n"); //output yang dikeluarkan apabila kedua kalimat berbeda

	return 0; //mengakhiri program
}
