// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 2
// Percobaan     : 1
// Tanggal       : 16 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan menerima input berupa jari jari lingkaran dari user kemudian menghitung dan menampikan luas lingkaran dengan jari jari tersebut

#include <stdio.h> /*mengakses library*/
#define pi 3.1415926 /*mendeklarasi konstanta phi*/

//PROGRAM UTAMA
int main(void)
{
	//Define Variable
    double Luas,r;

	//Input Data
	printf("Masukkan jari-jari lingkaran (cm) :\n");
	scanf("%lf",&r); /*menyimpan input jari jari pada variabel 'r'*/

	//Process
    Luas = pi*r*r; /*menghitung luas lingkaran dengan rumus L= phix r^2*/

	//Output Result
	printf("Luas lingkaran adalah %.2f cm2\n",Luas); /*menampilkan luas lingkaran yang telah dihitung dengan ketelitian 2 angka di belakang koma*/

	return (0); /*mengakhiri program*/
}
