// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 6
// Percobaan     : 2
// Tanggal       : 2 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem2.c
// Deskripsi     : Program ini akan menerima input 5 buah nama, kemudian menampilkan kembali pada console kelima nama tersebut dengan kedalaman 25 karakter

//mengakses library
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//PROGRAM UTAMA
int main(void)
{
	//Define VARIABLE
	char nama[5][20]; //mendeklarasikan array of array of character
	int i; //pencacah

	//Input DATA
	for (i=0;i<5;i++) //membaca string menggunakan iterasi
	{
		printf("Masukkan nama ke%d :\n",i+1);
		fgets(nama[i],20,stdin); //menerima input nama ke-i kemudian menyimpannya dalam suatu array of array of character
	}

	//Output RESULT
	for (i=0;i<5;i++) //menampilkan kembali nama menggunakan iterasi
	{
		printf("%d%25s",i+1,nama[i]); //menampilkan masing masing string dengan kedalaman 25 karakter
	}
	return 0;//mengakhiri program
}
