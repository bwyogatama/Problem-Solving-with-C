// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 10
// Percobaan     : 1
// Tanggal       : 30 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Pertama tama program ini akan menerima input 3 buah bilangan, kemudian user akan memasukkan sebuah bilangan yang sama dengan salah satu dari ketiga bilangan tersebut
                // Selanjutnya program ini akan mengeluarkan output berupa 2 buah bilangan lainnya yang tidak dimasukkan oleh user dengan ketelitian 3 desimal.


#include <stdio.h> //mengakses library

int main()
{
	// Deklarasi Tipe Data Bentukan
    typedef struct
    {
        float A;
        float B;
        float C;
    } bilangan; //membuat tipe data bentukan bernama bilangan

    typedef struct
    {
        char A;
        char B;
        char C;
    } karakter; //membuat tipe data bentukan bernama karakter

	//Deklarasi Variabel
    bilangan num; //deklarasi variabel num bertipe data bentukan bilangan
    karakter huruf; //deklarasi variabel huruf bertipe data bentukan karakter
    float angka;

	// Input
    printf("Masukkan nilai A :\n");
    scanf("%f",&num.A); //menerima input bilangan pertama

    printf("Masukkan nilai B :\n");
    scanf("%f",&num.B); //menerima input bilangan kedua

    printf("Masukkan nilai C :\n");
    scanf("%f",&num.C); //menerima input bilangan ketiga

    printf("Masukkan lagi salah satu nilai di atas :\n");
    scanf("%f",&angka); //menerima input ulang salah satu dari tiga bilangan

	//Proses dan Output
	huruf.A ='A'; huruf.B ='B'; huruf.C ='C'; //inisialisasi nilai huruf
	if (angka == num.A)
	{
        //output yang dikeluarkan apabila nilai yang dimasukkan ulang adalah nilai A
        printf("Nilai yang dimasukkan ulang adalah nilai %c.\n",huruf.A); //
        printf("Nilai %c adalah %.3f\n",huruf.B,num.B);
        printf("Nilai %c adalah %.3f\n",huruf.C,num.C);
    }
    else if (angka == num.B)
    {
        //output yang dikeluarkan apabila nilai yang dimasukkan ulang adalah nilai B
        printf("Nilai yang dimasukkan ulang adalah nilai %c.\n",huruf.B);
        printf("Nilai %c adalah %.3f\n",huruf.A,num.A);
        printf("Nilai %c adalah %.3f\n",huruf.C,num.C);
    }
    else if (angka == num.C)
    {
        //output yang dikeluarkan apabila nilai yang dimasukkan ulang adalah nilai C
        printf("Nilai yang dimasukkan ulang adalah nilai %c.\n",huruf.C);
        printf("Nilai %c adalah %.3f\n",huruf.A,num.A);
        printf("Nilai %c adalah %.3f\n",huruf.B,num.B);
    }
    //End of Program
    return 0;
}
