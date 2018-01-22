// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 9
// Percobaan     : 1
// Tanggal       : 27 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini menerima masukan dari pengguna berupa sebuah kalimat. Sebelum menginput kalimat pengguna
                //terlebih dahulu menginputkan panjang karakter dari kalimat. Kalimat yang ditampung kemudian dicetak kembali ke layar

//mengakses library
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//Deklarasi Variabel
	int length,i;
	char* kalimat; //deklarasi untuk dynamic array

	//Input Panjang Karakter
    printf("Masukkan panjang karakter dari kalimat :\n");
    scanf("%d",&length); //menerima input panjang karakter dari kalimat
    getchar();

    //Alokasi Memori
    kalimat = (char*) calloc(length,sizeof(char)); //Alokasi memori untuk kalimat dengan karakter sepanjang "length"

	//Input Kalimat
    printf("Masukkan sebuah kalimat :\n");
    fgets(kalimat,length,stdin); //membaca input kalimat

	//Cetak Output
    printf("Kalimat yang dimasukkan adalah : %s\n",kalimat); //mencetak kalimat yang diinputkan

    //End Of Program
    return 0;
}
