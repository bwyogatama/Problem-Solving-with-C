// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 6
// Percobaan     : 3
// Tanggal       : 2 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem3.c
// Deskripsi     : Program ini akan menerima input 2 buah nama dari user, kemudian menampilkan nama depan dan nama belakang dari kedua nama yang diinputkan

//mengakses library
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//PROGRAM UTAMA
int main(void)
{
	//Define VARIABLE
	char nama[2][20]; //mendeklarasikan array of array of character
	char *first_name[2], *last_name[2];
	int i; //pencacah

	//Input DATA
	for (i=0;i<2;i++) //membaca string menggunakan iterasi
	{
		printf("Masukkan nama ke%d :\n",i+1);
		fgets(nama[i],20,stdin); //menerima input nama ke-i kemudian menyimpannya dalam suatu array of array of character
	}

	//PROCESS
		for (i=0;i<2;i++) //proses memisahkan nama depan dan belakang menggunakan iterasi, kemudian menyimpannya pada variabel terpisah
	{
		first_name[i] = strtok(nama[i]," "); //memisahkan nama depan dan menyimpannya pada variabel first_name
		last_name[i] = strtok(NULL," "); //memisahkan nama belakang dan menyimpannya pada variabel last_name
	}

	//Output RESULT
	for (i=0;i<2;i++) //menampilkan nama depan dan nama belakang menggunakan iterasi
	{
		printf("Nama Depan %d    : %s\n",i+1,first_name[i]); //menampilkan nama depan
		printf("Nama Belakang %d : %s\n",i+1,last_name[i]); //menampilkan nama belakang
	}
	return 0; //mengakhiri program
}
