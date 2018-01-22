// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 11
// Percobaan     : 1
// Tanggal       : 3 April 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan memasukkan data berupa bilangan bertipe double pada sebuah stack
                // Program akan terus menanyakan apakah user akan memasukkan data baru atau tidak hingga stack penuh
                // Program kemudian menampilkan data teratas dalam tipe double dengan ketelitian 2 desimal

/* Library, definition */
#include <stdio.h>
#include <stdlib.h>
#define size 5

// Deklarasi Tipe Data Bentukan
typedef struct
{
    /* Bagian ini merupakan tipe bentukan untuk stack yang akan dibuat. Berisikan element dan variabel yang menunjuk element teratas dari stack*/
    double bilangan[size];
    int top;
} stacktype;

stacktype stack;

/*	Prototipe fungsi */
/*Prosedur push untuk menambahkan data pada stack
  Pre:elmt is defined*/
void push(double elmt);

int main(void)
{
	/* Isi program yang akan dibuat
	*/

	//Define Variable
	double input_num;
	char input_stat;

    //Inisialisasi
	stack.top = -1; //inisialisasi nilai stack.top

	while (stack.top< (size-1)) //loop ini akan terus dijalankan hingga stack penuh
    {
    //INPUT Data
    printf("Apakah Anda akan memasukkan data (Y/N) ?\n");
    scanf("%c",&input_stat); //membaca input status

    //PROCESS
    if (input_stat == 'Y')
        {
            printf("Masukkan data yang akan dimasukkan :\n");

            scanf("%lf",&input_num); //membaca input angka yang akan dimasukkan

            push(input_num); //memanggil prosedur push

            printf("Data yang dimasukkan : %.2f\n",stack.bilangan[stack.top]); //menampilkan pada layar data yang dimasukkan

        }
            printf("Ukuran stack saat ini : %d\n",stack.top+1); //menampilkan ukuran stack setelah data dimasukkan
    }

        printf("Stack sudah penuh. Terima kasih sudah mengisi stack ini.\n"); //statement yang dikeluarkan ketika stack sudah penuh

    //End Of Program
	return 0;
}

/* Implementasi fungsi */
/*Prosedur push untuk menambahkan data pada stack
  Pre:elmt is defined*/
void push(double elmt)
{
    stack.top = stack.top+1;
    stack.bilangan[stack.top] = elmt;
}
