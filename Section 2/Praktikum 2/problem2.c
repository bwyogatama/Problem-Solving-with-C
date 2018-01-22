// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 2
// Percobaan     : 2
// Tanggal       : 18 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem2.c
// Deskripsi     : Program ini akan menerima input berupa nilai sinus dari user kemudian menghitung dan menampikan nilai sudut dengan fungsi arc sin


#include <stdio.h>//mengakses library
#include <math.h>//mengaksese library math.h

#define pi 3.1415926//mendefinisikan nilai konstanta pi

int main(void){
    //define Variable
    double nilai_sinus,radian,hasil;

    //Input data
	printf("Masukkan nilai sinus suatu sudut :\n");
    scanf("%lf",&nilai_sinus);//menerima input nilai sinus suatu sudut, diasumsikan input dari user selalu berada di antara 0 dan 1

    //PROCESS
    radian = asin(nilai_sinus);//menghitung nilai sinus dengan fungsi arcsin menjadi nilai sudut dalam satuan radian
    hasil = (radian * 360)/(2*pi);//mengubah nilai sudut dari satuan radian menjadi satuan derajat

    //Output Result
	printf("Nilai arc sin dari %.2f adalah %.2f derajat\n",nilai_sinus,hasil);//menampilkan hasil perhitungan dalam derajat pada layar console dengan ketelitian 2 angka di belakang koma

	return 0;
}
