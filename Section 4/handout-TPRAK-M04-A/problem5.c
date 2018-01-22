// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 4
// Percobaan     : 5
// Tanggal       : 25 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem5.c
// Deskripsi     : Program ini akan menghitung nilai x persamaan x-sqrt(x)-1 = 0 menggunakan metode Gauss-Seidel



#include <stdio.h> //mengakses library
#include <math.h> //mengakses library


int main()
{
	//Define VARIABLE
	float xn,xnext,x0,e; 
	int n;
	
	//Input Data
    printf("Masukkan nilai x0 :\n");
	scanf("%f",&x0);
	printf("n\tx\n");
	
	//PROCESS
	n=0; //inisialisasi nilai n
	xn = x0;
	e = x0; //inisialisasi nilai e
	printf("%d\t%.4f\n",n,x0);
	while ((e>0.0001) || (e<-0.0001))//selama nilai e lebih besar dari 0.0001
	{
		n += 1; // n diincrement sebesar 1
		xnext = sqrt(xn) +1;
		printf("%d\t%.4f\n",n,xnext); //menampilkan n dan x pada console
		e =xnext-xn; //menghitung selisih nilai x dengan nilai x sebelumnya
		xn = xnext;
	}
	return 0; //mengakhiri program
}
