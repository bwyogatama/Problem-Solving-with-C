// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 6
// Percobaan     : 2
// Tanggal       : 3 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem2.c
// Deskripsi     : Program ini akan menerima input sebuah kalimat dan sebuah kata, kemudian menentukkan apakah kata tersebut terkandung di dalam kalimat yang diinputkan atau tidak

//Mengakses Library
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//PROGRAM UTAMA
int main(void)
{
	//Define VARIABLE
	int found,i;
	char kalimat[100],kata[30]; //mendeklarasikan input

	//Input DATA
	printf("Masukkan kalimat :\n");
	scanf("%[^\n]",kalimat); //menerima input kalimat
	getchar(); //diperlukan untuk mengambil '\n' dari kalimat yang diinputkan

	printf("Masukkan kata yang dicari :\n");
	scanf("%[^\n]",kata); //menerima input kata yang akan dicari

	//Output RESULT
	if (strstr(kalimat,kata)==NULL) //fungsi strstr akan mengecek apakah kata terkandung di dalam kalimat
		printf("Kata %s tidak ada didalam kalimat \"%s\"\n",kata,kalimat); //output yang ditampilkan apabila kata yang dicari tidak terkandung di dalam kalimat
	else
		printf("Kata %s ada didalam kalimat \"%s\"\n",kata,kalimat); //output yang ditampilkan apabila kata yang dicari terkandung di dalam kalimat

	return 0; //mengakhiri program
}
