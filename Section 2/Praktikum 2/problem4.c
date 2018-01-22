// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 2
// Percobaan     : 4
// Tanggal       : 18 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem4.c
// Deskripsi     : Program ini akan menerima input berupa 3 bilangan integer dari user kemudian menghitung dan menampikan akar akar persamaan kuadrat dari ax^2+bx=c=0


#include <stdio.h>//mengakses library
#include <math.h>//mengakses library math.h

int main(void){
    //Define VARIABLE
    double a,b,c,x1,x2;
    //INPUT Data
	printf("Masukkan nilai a :\n");
	scanf("%lf",&a); //menerima input nilai a
	printf("Masukkan nilai b :\n");
	scanf("%lf",&b); //menerima input nilai b
	printf("Masukkan nilai c :\n");
	scanf("%lf",&c); //menerima input nilai c
    //PROCESS
	x1 = (-b + sqrt(pow(b,2) - 4*a*c))/2*a; //menghitung akar akar persamaan kuadrat dari ax^2+bX+c=0
    x2 = (-b - sqrt(pow(b,2) - 4*a*c))/2*a;

    //OUTPUT Result
	printf("Nilai x1 = %.2f\nNilai x2 = %.2f\n",x1,x2); //menampilkan akar akar persamaan kuadrat pada layar console
	return (0);
}
