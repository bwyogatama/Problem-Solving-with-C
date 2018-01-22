// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 6
// Percobaan     : 3
// Tanggal       : 3 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem3.c
// Deskripsi     : Program ini akan menerima masukan sebuah kata kemudian menampilkan huruf tengah dari kata tersebut

//Mengakses Library
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//PROGRAM UTAMA
int main(void)
{
	//Define VARIABLE
	char kata[30],middle[2]; //mendekralasikan array of character
	int length; //variabel untuk menyimpan panjang kata

	//Input DATA
	printf("Masukkan kata :\n");
	scanf("%s",kata); //menerima input kata

	//PROCESS & RESULT
	length = strlen(kata); //menghitung panjang kata
	if (length%2 != 0) //proses yang dijalankan apabila jumlah huruf ganjil
	{
		middle[0] = kata[((length+1)/2)-1];
		printf("Huruf tengah dari kata \"%s\" adalah %c\n",kata,middle[0]); //menampilkan output huruf yang berada di tengah kata
	}
	else //proses yang dijalankan apabila jumlah huruf genap
	{
		middle[0] =  kata[((length)/2)-1];
		middle[1] = kata[(length/2)];
		printf("Huruf tengah dari kata \"%s\" adalah %c%c\n",kata,middle[0],middle[1]); //menampilkan output 2 huruf yang berada di tengah kata
	}


	return 0; //mengakhiri program
}
