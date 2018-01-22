// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 7
// Percobaan     : 2
// Tanggal       : 7 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem2.c
// Deskripsi     : Program ini akan menerima masukan tiga buah bilangan integer kemudian mencari nilai maksimum dari ketiga bilangan tersebut

#include <stdio.h> //mengakses library

//PROCEDURE Maksimum untuk mencari nilai maksimum dari 3 bilangan
int* Maksimum(int *a, int *b,int *c);

//PROCEDURE Maksimum
int* Maksimum(int *a, int *b, int *c)
{
	//DILARANG MENAMBAH VARIABEL
	/* Your code here */
    if ((*a>=*b)&&(*a>=*c)) //apabila isi alamat yang dirujuk a adalah maksimumnya
        return(a);
    else if ((*b>=*a)&&(*b>=*c)) //apabila isi alamat yang dirujuk b adalah maksimumnyta
        return(b);
    else if ((*c>=*a)&&(*c>=*b)) //apabila isi alamat yang dirujuk c adalah maksimumnya
        return(c);
}


int main()
{
    //Define VARIABLE
	/******** Bagian deklarasi variabel dilarang diubah ********/
	int x;
	int y;
	int z;
	int *p;
	//DILARANG MENAMBAH VARIABEL
	/**************** Akhir deklarasi variabel *****************/
	/* Your code here */

	//INPUT Data
	printf("Masukkan integer pertama : \n");
	scanf("%d",&x); //menerima input bilangan pertama
	printf("Masukkan integer kedua : \n");
    scanf("%d",&y); //menerima input bilangan kedua
	printf("Masukkan integer ketiga : \n");
    scanf("%d",&z); //menerima input bilangan ketiga

    //PROCESS
    p = Maksimum(&x,&y,&z);//memanggil PROCEDURE Maksimum

    //OUTPUT Result
    printf("Nilai maksimum dari ketiga integer adalah : %d\n",*p); //menampilkan nilai maksimum dari ketiga bilangan

	return(0); //mengakhiri program
}
