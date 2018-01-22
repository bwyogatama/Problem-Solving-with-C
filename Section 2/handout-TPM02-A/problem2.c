// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 2
// Percobaan     : 2
// Tanggal       : 16 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem2.c
// Deskripsi     : Program ini akan menerima input berupa alas dan tinggi segitiga dari user kemudian menghitung dan menampikan luas segitiga pada console

#include <stdio.h> /*mengakses library*/

int main(void)
{
	//Define Variable
    double alas,tinggi,Luas;

	//Input Data
	printf("Masukkan alas segitiga (cm) :\n");
    scanf("%lf",&alas); /*menyimpan input alas segitiga pada variabel 'alas'*/
	printf("Masukkan tinggi segitiga (cm) :\n");
    scanf("%lf",&tinggi); /*menyimpan input tinggi segitiga pada variable 'tinggi'*/

	//Process
	Luas = alas*tinggi/2; /*menghitung luas segitiga dengan rumus L = 0.5xaxt*/

	//Output Result
	printf("Luas segitiga adalah %.2f cm2\n",Luas); /*menampilkan luas segitiga yang telah dihitung dengan ketelitian 2 angka di belakang koma*/

	return (0); /*mengakhiri program*/
}
