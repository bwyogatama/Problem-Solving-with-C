// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 1
// Percobaan     : 5
// Tanggal       : 15 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem5.c
// Deskripsi     : Program ini akan menerima 2 bilangan floating point dari pengguna secara berurutan kemudian menampilkan kedua bilangan tersebut pada console

#include <stdio.h>//mengakses library
//PROGRAM UTAMA
int main (void)
{
    //Deklarasi VARIABEL
    float x,y;
    //ALGORITMA
    printf("Masukkan bilangan floating point ke-1 :\n");
    scanf("%f",&x);//menerima bilangan floating point pertama
    printf("Bilangan ke-1 : %.3f\n",x);//mencetak bilangan floating point pertama
    printf("Masukkan bilangan floating point ke-2 :\n");
    scanf("%f",&y);//menerima bilangan floating point kedua
    printf("Bilangan ke-2 : %.3f\n",y);//mencetak bilangan floating point kedua
    return(0);//mengakhiri program
}
