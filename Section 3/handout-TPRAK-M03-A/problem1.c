// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 3
// Percobaan     : 1
// Tanggal       : 22 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan menentukan tahun yang diinputkan apakah tahun kabisat atau bukan

#include <stdio.h> //mengakses library
int main(){
	//Define VARIABLE
	int tahun;
	
	//Input Data
	printf("Masukkan tahun yang akan dicek :\n");
	scanf("%d",&tahun); //menerima input tahun yang akan dicek
	
	//Conditional Statement
	if ((tahun % 400 == 0) || ((tahun % 100 != 0) && (tahun % 4 == 0))) //kondisi untuk tahun kabisat
	{
		printf("%d tahun kabisat\n", tahun); //statement yang dikeluarkan apabila tahun kabisat
	}
	else //jika tidak memenuhi kondisi untuk tahun kabisat
		printf("%d bukan tahun kabisat\n", tahun); //statement yang dikeluarkan apabila bukan tahun kabisat
	
	return 0; //mengakhiri program
}
