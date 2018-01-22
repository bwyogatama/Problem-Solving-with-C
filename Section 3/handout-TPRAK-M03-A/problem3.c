// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 3
// Percobaan     : 3
// Tanggal       : 22 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem3.c
// Deskripsi     : Program ini akan menghitung dan menampilkan nilai resistansi/kapasitansi total dari 2 buah resistor/kapasitor
#include <stdio.h> //mengakses library

int main(){
	//Define Variable
	char komponen; //variabel untuk opsi pertama
	int rangkaian; //variabel untuk opsi kedua
	double R1,R2,C1,C2,Rtot,Ctot;
	
	printf("Silakan memilih jenis komponen yang akan dihitung\na.Resistor\nb.Kapasitor\n");
	scanf("%c",&komponen); //menerima input jenis komponen yang akan dihitung
	//Conditional Statement
	
	if ((komponen == 'a') || (komponen == 'A')) //kondisi apabila komponen yang dipilih resistor
	{
		printf("Apakah resistor dirangkai seri atau paralel?\n1.Seri\n2.Paralel\n");
		scanf("%d",&rangkaian); //menerima input konfigurasi resistor
		printf("Masukkan nilai R1 :\n");
		scanf("%lf",&R1); //menerima input nilai resistor pertama
		printf("Masukkan nilai R2 :\n");
		scanf("%lf", &R2); //menerima input nilai resistor kedua
		if (rangkaian == 1) //kondisi apabila konfigurasi seri dipilih
		{
			Rtot = R1+R2; //menghitung resistansi seri
		}
		else if (rangkaian == 2) //kondisi apabila konfigurasi paralel dipilih
		{
			Rtot = (R1*R2)/(R1+R2); //menghitung resistansi paralel
		}
		printf("Nilai resistansi total = %.3f ohm\n",Rtot); //menampilkan resistansi total
	
	}
	
	else if ((komponen == 'b') || (komponen == 'B')) //kondisi apabila komponen yang dipilih kapasitor
	{
		printf("Apakah kapasitor dirangkai seri atau paralel?\n1.Seri\n2.Paralel\n");
		scanf("%d",&rangkaian);//menerima input konfigurasi kapasitor
		printf("Masukkan nilai C1 :\n");
		scanf("%lf", &C1); //menerima input nilai kapasitor pertama
		printf("Masukkan nilai C2 :\n");
		scanf("%lf", &C2); //menerima input nilai kapasitor kedua
		if (rangkaian ==1) //kondisi apabila konfigurasi seri dipilih
		{
			Ctot = (C1*C2)/(C1+C2); //menghitung kapasitansi seri

		}
		else if (rangkaian == 2) //kondisi apabila konfigurasi paralel dipilih
		{
			Ctot = (C1+C2); //menghitung kapasitansi paralel
		}
		printf("Nilai kapasitansi total = %.3e Farad\n",Ctot); //menampilkan kapasitansi total
	}   
	 
	return 0; //mengakhiri program
}
