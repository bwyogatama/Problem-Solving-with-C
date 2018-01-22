// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 2
// Percobaan     : 3
// Tanggal       : 18 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem3.c
// Deskripsi     : Program ini akan menerima input berupa 3 bilangan integer dari user kemudian menghitung dan menampikan rata rata dari 3 bilangan tersebut


#include <stdio.h>//mengakses library

int main(void){
    //define VARIABLE
    int x,y,z;
    double rata2;
    //Input Data
	printf("Masukkan ketiga bilangan integer :\n");
	scanf("%d %d %d",&x,&y,&z); //menerima input tiga bilangan integer
    //PROCESS
    rata2 = (x+y+z)/3.0; //menghitung rata rata tiga bilangan integer
    //OUTPUT Result
	printf("Rata-Rata dari %d, %d dan %d adalah %.3f\n",x,y,z,rata2); //menampilkan hasil perhitungan rata rata pada layar console dengan ketelitian 3 angka di belakang koms
	return 0;
}
