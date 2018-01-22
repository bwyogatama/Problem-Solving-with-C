// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 7
// Percobaan     : 3
// Tanggal       : 7 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem3.c
// Deskripsi     : melakukan perhitungan rata rata dan standar deviasi, kemudian mengkonversi nilai numerik menjadi nilai huruf berdasarkan ketentuan tertentu


/*
PROGRAM Nilai Mahasiswa
=========================================================================
Nama: Bobbi Winema Yogatama
NIM:  13214071
=========================================================================
Tujuan: melakukan perhitungan rata rata dan standar deviasi, kemudian mengkonversi nilai numerik menjadi nilai huruf
=========================================================================

Variabel Desc
-------------------------------------------------------------------------
    Type            nama          desc
-------------------------------------------------------------------------
main program

    double          data[100]     menyimpan data nilai angka dalam array
    double          sigma         menyimpan nilai standar deviasi
    char            indeks[100]   menyimpan indeks nilai
    int             i             pencacah
    int             count         jumlah data
    double          avg           nilai rata rata
    double          sum           jumlah total data
    double          sumsquare     jumlah kuadrat data
=========================================================================
Pseudo Code

Program
    1.deklarasi variabe;
    2.membaca file input dan mengambil nilai balikan
    3.melakukan perhitungan
    4.menulis output
*/

//Mengakses Library
#include <stdio.h>
#include <math.h>

/* Diperbolehkan menggunakan fungsi ataupun prosedur */
int main()
{
    double data[100];
    char indeks[100];
    double sigma,avg,sum,sumsquare;
    int i, count;
    FILE *filetujuan; //Pointer untuk mengakses file
	/* .................... */

	filetujuan = fopen("datamahasiswa.in","r"); //membuka file tujuan dengan permission (r)
    //Inisisalisasi
    i = 0;
    sum = 0;
    sumsquare = 0;

    //membaca file datamahasiswa.in kemudian memasukkannya ke dalam array data
    while(!feof(filetujuan))
    {
        fscanf(filetujuan,"%lf",&data[i]);
        i += 1;
    }

    count = i-1;

    //PROCESS
    //menghitung jumlah total data dan jumlah kudrat data
    for (i=0;i<count;i++)
    {
        sum += data[i];
        sumsquare += data[i]*data[i];
    }

    avg = sum/count; //menghitung nilai rata rata
    sigma = sqrt(((sumsquare)/count)-(avg*avg)); //menghitung standar deviasi

    //mengkonversi nilai numerik menjai nilai huruf
    for (i=0;i<count;i++)
    {
    if (data[i] >= (avg+1.5*sigma))
    indeks[i] = 'A';
    else if((data[i] >= (avg+0.5*sigma))&&(data[i] < (avg+1.5*sigma)))
    indeks[i] = 'B';
    else if((data[i] >= (avg-0.5*sigma))&&(data[i] < (avg+0.5*sigma)))
    indeks[i] = 'C';
    else if((data[i] >= (avg-1.5*sigma))&&(data[i] < (avg-0.5*sigma)))
    indeks[i] = 'D';
    else if(data[i] < (avg-1.5*sigma))
    indeks[i] = 'F';
    }

    printf("Nilai telah dikonversi\n"); //output yang dikeluarkan pada terminal

    //membuka file tujuan dengan permission (w)
    filetujuan = fopen("nilaimahasiswa.out","w");

    fprintf(filetujuan,"Average\t\t\t\t:  %.6f\n",avg); //menampilkan rata rata pada file tujuan
    fprintf(filetujuan,"Standart Deviasi\t:  %.6f\n",sigma); //menampilkan standar deviasi pada file tujuan
    fprintf(filetujuan,"Numeric Value\t\tLetter Grade\n");

    for (i=0;i<count;i++)
    {
    fprintf(filetujuan,"  %.5f\t\t\t\t%c\n",data[i],indeks[i]); //menampilkan nilai dan indeks pada file tujuan
    }
    return (0); //mengakhiri program

}
