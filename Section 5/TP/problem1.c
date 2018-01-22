// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 5
// Percobaan     : 1
// Tanggal       : 28 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan melakukan search terhadap suatu nilai integer dan menampilkan indeks dari bilangan integer tersebut pada deret bilangan integer yang diinputkan user


#include <stdio.h> //mengakses library

//PROGRAM UTAMA

int main(void)
{
	//Define VARIABLE

	int x[10]; //mendefinisikan variabel x sebagai array berelemen 10
	int i,n,found; //n adalah variabel untuk menyimpan bilangan yang akan dicari

	//INPUT DATA

	printf("Masukkan 10 bilangan integer :\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",&x[i]); //menerima input 10 bilangan integer kemudian memasukkannya ke dalam array
	}

	printf("Masukkan bilangan integer yang dicari :\n");
	scanf("%d",&n); //menerima input nilai integer yang akan dicari

	//PROCESS

	i=0; //inisialisasi pencacah
	found = 0; //inisialisasi nilai found = false
	while ((!found) && (i<10)) //perintah ini akan dijalankan selama found bernilai false dan i < 10
	{
		if (x[i] == n)
			found = 1; //apabila n ditemukan, maka found akan bernilai true
		else
			i += 1; //apabila n tidak ditemukan pencarian akan dilanjutkan ke indeks berikutnya
	}

	//OUTPUT RESULT

	if (found)
		printf("%d berada pada indeks ke %d\n",n,i); //menampilkan indeks n pada deret bilangan apabila n ditemukan
	else
		printf("%d Tidak ditemukan\n",n); //statement yang dikeluarkan apabila n tidak ditemukan

	return 0; //mengakhiri program
}
