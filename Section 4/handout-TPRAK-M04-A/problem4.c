// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 4
// Percobaan     : 4
// Tanggal       : 25 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem4.c
// Deskripsi     : Program ini akan menghitung nilai sin(x) menggunakan deret Taylor dan membandingkannya dengan nilai sin(x) secara eksak


#include <stdio.h> //mengakses library
#include <math.h> //mengakses library
#define pi 3.14159265 //mendefinisikan konstanta phi

int main(){
	//Define VARIABLE
	float x,radian,eksak,taylor,selisih,error,sum;
	int i,j,k,factorial; //variabel untuk pencacah dan hasil perhitungan faktorial
	
	//Input DATA
    printf("Masukkan besar sudut dalam derajat :\n");
	scanf("%f",&x); //membaca nilai sudut dalam derajat
	
	//PROCESS
	radian = x * 2 * pi / 360; //mengonversi nilai sudut ke dalam radian
	eksak = sin(radian); //menghitung nilai sudut secara eksak dengan fungsi sin(x)
	sum = 0; //inisialisasi nilai sum
	j = 0; //inisialisasi nilai j
	factorial = 1; //inisialisasi nilai factorial

	for (i=1;i<=5; i += 2) //looping dengan increment 2
	{	
		factorial = 1; //inisialisasi nilai factorial
		for (k = 1;k<=i; k++) //looping untuk menghitung nilai factorial
		{
			factorial = factorial * k;
		}
		taylor=pow(-1,j)*pow(radian,i)/factorial; //rumus deret taylor untuk suku ke j+1
		sum = sum + taylor;
		j += 1;
	}
	selisih = sum - eksak; //menghitung nilai selisih perhitungan deret taylor dan hasil perhitungan eksak
	error = fabs(selisih)*100/eksak; //menghitung error dalam persen
	printf("Hasil eksak : %.10f\nHasil pendekatan taylor : %.10f\nError : %.10f %%\n",eksak,sum,error); //menampilkan hasil perhitungan eksak, perhitungan deret taylor, dan nilai error

	return 0;
}
