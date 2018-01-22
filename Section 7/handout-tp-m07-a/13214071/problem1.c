// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 7
// Percobaan     : 1
// Tanggal       : 6 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan mencetak tulisan "Hello Praktikum !\n" ke sebuah file eksternal "output.txt"

#include <stdio.h> //mengakses library

int main (void)
{
// Define VARIABLE
FILE *file_Tujuan; // Pointer yang digunakan untuk mengakses file

//PROCESS
file_Tujuan = fopen("output.txt", "w"); //Membuka file tujuan dengan permission write(w)
fprintf(file_Tujuan, "Hello praktikum !\n");  //menuliskan "Hello Praktikum !\n" pada file output.txt (file tujuan)

return (0); //mengakhiri program
}
