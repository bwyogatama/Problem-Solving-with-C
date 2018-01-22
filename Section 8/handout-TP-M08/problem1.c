// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 8
// Percobaan     : 1
// Tanggal       : 9 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan mengkonversi nilai sudut dari satuan derajat ke satuan radian menggunakan fungsi "convert"

//mengakses library
#include <stdio.h>
#define phi 3.1415926 //mendeklarasikan constanta phi

// Deklarasi Fungsi disini
/*Fungsi Convert 
*mengkonversi satuan sudut dari derajat ke radian
*mengembalikan nilai satuan sudut yang sudah dikonversi ke radian
*Pre: angle is defined */
double convert (double angle);

//PROGRAM UTAMA
int main(){

//Define VARIABLE
double radian,sudut;

//INPUT Data
printf("Masukkan sudut dalam derajat :\n");
scanf("%lf",&sudut); //menerima input sudut dalam satuan derajat

//PROCESS
radian = convert(sudut); //memanggil fungsi convert untuk mengkonversi satuan

//OUTPUT Result
printf("Hasil konversi sudut ke radian adalah : %.2f rad\n",radian); //mencetak hasil konversi sudut dari satuan derajat ke satuan radian

return 0;

}

// Definisi fungsi disini
/*Fungsi Convert
 *mengkonversi satuan sudut dari derajat ke radian
 *mengembalikan nilai satuan sudut yang sudah dikonversi ke radian
 *Pre: angle is defined */
double convert (double angle)
{
	double rad;
	rad = angle * phi / 180; //mengkonversi nilai sudut dari derajat ke radian
	return (rad); //mengembalikan nilai sudut yang sudah dikonversi
}
