// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 4
// Percobaan     : 1
// Tanggal       : 25 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan menerima input integer yang merepresentasikan panjang kaki segitiga kemudian akan menggambar segitiga tersebut pada console


#include <stdio.h> //mengakses library
int main(){
	//Define VARIABLE
	int pjg,i,j; //i dan j sebagai pencacah, pjg sebagai input
	
	//Input Data
    printf("Masukkan panjang kaki segitiga :\n");
	scanf("%d",&pjg); //menerima input panjang kaki segitiga
	
	//PROCESS
	for (i=1;i<=pjg;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("*"); //mencetak *
		}
			printf("\n"); //berpindah ke baris berikutnya
	}
	return 0; //mengakhiri program
}
