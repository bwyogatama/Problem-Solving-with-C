// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 1
// Percobaan     : 6
// Tanggal       : 15 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem6.c
// Deskripsi     : Program ini akan menerima input karakter melalui console kemudian mencetak nilai desimal ASCII dari karakter tersebut

#include <stdio.h>//mengakses library
//PROGRAM UTAMA
int main (void)
{
    //Deklarasi VARIABEL
    char x;
    //ALGORITMA
    printf("Masukkan karakter :\n");
    scanf("%c",&x);//menerima input karakter
    printf("Nilai ASCII dari karakter %c adalah %d\n",x,x);//mencetak karakter tersebut dalam integer ASCII
    return(0);//mengakhiri program
}
