// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 1
// Percobaan     : 4
// Tanggal       : 15 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem4.c
// Deskripsi     : Program ini akan menerima masukkan 2 bilangan integer kemudian menampilkan kedua bilangan tersebut pada console dengan urutan yang ditukar

#include <stdio.h>//mengakses library
//PROGRAM UTAMA
int main (void)
{
    //Deklarasi VARIABEL
    int x,y;
    //ALGORITMA
    printf("Masukkan dua bilangan integer :\n");
    scanf("%d",&x);//menerima input bilangan integer pertama
    scanf("%d",&y);//menerima input bilanan integer kedua
    printf("Bilangan ke-1 : %d\n",y);//menampilkan bilangan integer kedua
    printf("Bilangan ke-2 : %d\n",x);//menampilkan bilangan integer pertama
    return(0);//mengakhiri program
}
