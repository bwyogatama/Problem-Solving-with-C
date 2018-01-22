// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 7
// Percobaan     : 1
// Tanggal       : 7 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan menampung input integer dalam variabel a
                //membuat variabel pointer *p yang menunjuk alamat dari a
                //dan pointer to pointer **q yang menunjuk pointer p
                //program kemudian menampilkan nilai dan alamat a, nilai dan alamat p, nilai yang dirujuk alamat q,nilai alamat dirujuk q, dan alamat q


#include <stdio.h> //mengakses library

int main()
{
    //Define VARIABLE
	/******** Bagian deklarasi variabel dilarang diubah ********/
	int a;
	int *p;
	int **q;
	//DILARANG MENAMBAH VARIABEL
	/**************** Akhir deklarasi variabel *****************/
	/* Your code here */

	p = &a; //mengassign p pada alamat a
	q = &p; //mengassign q pada alamat p

	//INPUT Data
	printf("Masukkan input integer :\n");
	scanf("%d",&a); //membaca input integer

	//OUTPUT Result
	printf("Nilai dari a = %d\n",a); //menampilkan nilai a
	printf("Alamat dari a = %p\n\n",&a); //menampilkan alamat a
	printf("Nilai dari p = %d\n",p); //menampilkan nilai p
	printf("Alamat dari p = %p\n\n",&p); //menampilkan alamat p
	printf("Nilai dari alamat yang dirujuk alamat dalam q = %d\n",**q); //menampilkan nilai dari alamat yang dirujuk alamat dalam q
	printf("Nilai dari alamat yang dirujuk q = %d\n",*q); //menampilkan nilai dari alamat yang dirujuk q
	printf("Alamat dari q = %p\n",&q); //menampilkan alamat dari q
	printf("%p\n",q);
	printf("%d\n",q);

	return(0); //mengakhiri program
}
