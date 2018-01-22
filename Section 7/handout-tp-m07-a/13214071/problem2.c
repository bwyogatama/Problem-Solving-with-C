// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 7
// Percobaan     : 2
// Tanggal       : 6 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem2.c
// Deskripsi     : Program ini akan menukar 2 buah bilangan yang diinputkan user dengan menggunakan prosedur. Prosedur yang dipakai hanya menggunakan 2 variabel process, yaitu alamat dari kedua bilangan yang diinputkan

//mengakses library
#include <stdio.h>
#include <stdlib.h>

//Procedure swap untuk menukar isi dari alamat variabel A dengan isi dari alamat variabel B
void swap (int *A, //pointer menuju isi dari alamat variabel A
			int *B); //pointer menuju isi dari alamat variabel B

//PROCEDURE SWAP
void swap (int *A, //pointer menuju isi dari alamat variabel A
			int *B) //pointer menuju isi dari alamat variabel B
{
	// Define VARIABLE
	int temp; //variabel sementara untuk menyimpan bilangan integer
	//PROCESS
	temp = *A; //proses menukar isi dari alamat variabel A dengan isi dari alamat variabel B
	*A = *B;
	*B = temp;
}

//PROGRAM UTAMA
int main()
{
	//Define VARIABLE
	int A,B;

	//INPUT DATA
	printf("Masukkan bilangan A :\n");
	scanf("%d",&A); //menerima input bilangan A
	printf("Masukkan bilangan B :\n");
	scanf("%d",&B); //menerima input bilangan B

	//PROCESS
	swap (&A,&B); //memanggil procedure tukar dengan variabel proses alamat kedua bilangan yang diinputkan

	//OUTPUT Result
	printf("%d %d\n",A,B); //mencetak output berupa bilangan yang sudah ditukar

	return 0; //mengakhiri program
}
