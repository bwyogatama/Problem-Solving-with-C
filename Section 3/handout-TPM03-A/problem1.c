// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 3
// Percobaan     : 1
// Tanggal       : 20 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan menerima input nilai berupa bilangan bulat atau pecahan kemudian menentukan dan menampilkan indeks nilai dari input nilai yang diberikan

#include <stdio.h> //mengakses library

int main(void)
{
    //Define VARIABLE
    double nilai;
    //Input Data
	printf("Masukkan Nilai (0-100):\n");
    scanf("%lf",&nilai); //menerima input nilai bertipe float

    //Conditional Satement
    if (nilai >= 80 && nilai <=100) //range nilai A
		printf("Indeks yang diperoleh adalah A\n");
    else if (nilai >=73 && nilai <80) //range nilai AB
		printf("Indeks yang diperoleh adalah AB\n");
    else if (nilai >=65 && nilai < 73) //range nilai B
		printf("Indeks yang diperoleh adalah B\n");
    else if (nilai >=55 && nilai <65) //range nilai BC
		printf("Indeks yang diperoleh adalah BC\n");
    else if (nilai >=45 && nilai <55) //range nilai C
		printf("Indeks yang diperoleh adalah C\n");
    else if (nilai>=0 && nilai <45) //range nilai E
		printf("Indeks yang diperoleh adalah E\n");

	return (0);// mengakhiri program
}
