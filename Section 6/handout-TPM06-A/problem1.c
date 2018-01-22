// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 6
// Percobaan     : 1
// Tanggal       : 2 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan menerima input sebuah kata kemudian menampilkan huruf pertama dari kata tersebut

//mengakses Library
#include <stdio.h>
#include <stdlib.h>

//PROGRAM UTAMA
int main(void)
{
	//Define VARIABLE
	char kata[15]; //mendeklarasikan array of character

	//Input DATA
	printf("Masukkan sebuah kata : \n");
	scanf("%s",kata); //menerima input sebuah kata

	//Output RESULT
	printf("%s diawali dengan huruf %c\n",kata,kata[0]); //menampilkan pada console huruf pertama dari kata yang diinputkan

	return 0; //mengakhiri program
}
