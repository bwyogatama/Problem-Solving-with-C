// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 1
// Percobaan     : 3
// Tanggal       : 15 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem3.c
// Deskripsi     : Program ini akan menerima input bilangan integer x kemudian menampilkan bilangan tersebut pada layar console

#include <stdio.h>//mengakses library
//PROGRAM UTAMA
int main (void)
{
    //Deklarasi VARIABEL
    int x;
    //ALGORITMA
    printf("Masukkan bilangan integer x :\n");
    scanf("%d",&x);//menerima input integer x
    printf("Nilai variable x = %d\n",x);//mencetak nilai integer x pada layar console
    return(0);//mengakhiri program
}

