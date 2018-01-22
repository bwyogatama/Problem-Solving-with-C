// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 8
// Percobaan     : 2
// Tanggal       : 10 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem2.c
// Deskripsi     : Program ini akan menerima input berupa tinggi dan berat dari user kemudian mengidentifikasi kondisi berat badan seseorang

#include <stdio.h> //mengakses library

// Deklarasi Fungsi
/*FUNGSI Body_Mass_Index
*melakukan kalkulasi Body Mass Index menggunakan rumus BMI = Body Weight : (Body Height x Body Height)
*mengembalikan nilai BMI dengan tipe data double
*Pre: berat and tinggi is defined */
double Body_Mass_Index (double berat,double tinggi);


//PROGRAM UTAMA
int main(){
	//Define VARIABLE
	double height, weight;
	double BMI;

	printf("Kalkulator Berat Badan Ideal BMI\n");

	//INPUT Data
	printf("Masukkan tinggi badan anda ( Meter ):\n");
	scanf("%lf",&height); //membaca input tinggi badan
	printf("Masukkan berat badan anda ( Kilogram ):\n");
	scanf("%lf",&weight); //membaca input berat badan

	//PROCESS
	BMI = Body_Mass_Index(weight,height); //memanggil fungsi Body_Mass_Index

	//OUTPUT Result
	if (BMI < 18) //apabila BMI kurang dari 18
        printf("BMI = %.2f, Under Weight\n",BMI);
	else if ((BMI>=18)&&(BMI<=25)) //apabila BMI berada pada range 18-25
        printf("BMI = %.2f, Normal Weight\n",BMI);
	else if ((BMI>25)&&(BMI<=27)) //apabila BMI berada pada range 26-27
        printf("BMI = %.2f, Over Weight\n",BMI);
	else if (BMI>27) //apabila BMI lebih besar dari 27
        printf("BMI = %.2f, Obese\n",BMI);
	return 0;
}

// Definisi Fungsi
/*FUNGSI Body_Mass_Index
*melakukan kalkulasi Body Mass Index menggunakan rumus BMI = Body Weight : (Body Height x Body Height)
*mengembalikan nilai BMI dengan tipe data double
*Pre: berat and tinggi is defined */
double Body_Mass_Index (double berat,double tinggi)
{
	double BMI;
	BMI = berat/(tinggi*tinggi); //melakukan perhitungan BMI menggunakan rumus
	return(BMI); //fungsi ini mengembalikan nilai BMI
}
