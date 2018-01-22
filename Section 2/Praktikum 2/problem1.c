// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 2
// Percobaan     : 1
// Tanggal       : 18 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan menerima input berupa jari jari dan tinggi tabung dari user kemudian menghitung dan menampikan volume tabung tersebut


#include <stdio.h> //mengakses library
#include <math.h> //mengakses library math.h

#define pi 3.1415926 //mendefinisikan nilai konstanta pi
int main(void)
{
    //define VARIABLE
    double r,tinggi,Volume;

    //INPUT Data
	printf("Masukkan jari-jari tabung (cm) :\n");
	scanf("%lf",&r); //menerima input jari jari tabung

	printf("Masukkan tinggi tabung (cm) :\n");
    scanf("%lf",&tinggi); //menerima input tinggi tabung

    //PROCESS
    Volume = pi*pow (r,2)*tinggi; //menghitung volume tabung

    //OUTPUT Result
	printf("Volume tabung adalah %.2f cm3\n",Volume); //menampilkan volume tabung pada console dengan ketelitian 2 angka di belakang koma

	return (0); //mengakhiri program
}
