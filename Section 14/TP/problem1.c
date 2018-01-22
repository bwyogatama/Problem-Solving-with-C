// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 14
// Percobaan     : 1
// Tanggal       : 14 April 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan melakukan operasi perhitungan bilangan kompleks dengan bantuan library complex.h
                // Operasi yang dilakukan adalah mencari magnituda, fasa, penjumlahan, penguranan, perkalian, dan pembagian bilangan kompleks

#include <stdio.h>
#include <string.h>
#include "complex.h"

int main(char argv1[] char* argv2 char*argv3)
{
    //Define VARIABLE
    complex c1,c2,result;
    double mgntd,fasa;

    //PROCESS
    c1 = getcomplex(argv[2]); //mengambil komponen real dan imajiner

    if (strcmp("add",argv[1])==0)
    {
        c2 = getcomplex(argv[3]);//mengambil komponen real dan imajiner
		printf("Penjumlahan Bilangan Kompleks\n");
		result = add(c1,c2); //menjumlahkan bilangan kompleks
		printf("c1 = %s\nc2 = %s\nc1 + c2 = %.2lf + (%.2lfi)\n",argv[2],argv[3],result.real,result.imag);
    }
    else if (strcmp("sub",argv[1])==0)
    {
        c2 = getcomplex(argv[3]);//mengambil komponen real dan imajiner
		printf("Pengurangan Bilangan Kompleks\n");
		result = substract(c1,c2); //mengurangkan bilangan kompleks
		printf("c1 = %s\nc2 = %s\nc1 - c2 = %.2lf + (%.2lfi)\n",argv[2],argv[3],result.real,result.imag);
    }
    else if (strcmp("mul",argv[1])==0)
    {
        c2 = getcomplex(argv[3]);//mengambil komponen real dan imajiner
		printf("Perkalian Bilangan Kompleks\n");
		result = multiply(c1,c2); //mengalikan bilangan kompleks
		printf("c1 = %s\nc2 = %s\nc1 * c2 = %.2lf + (%.2lfi)\n",argv[2],argv[3],result.real,result.imag);
    }
    else if (strcmp("div",argv[1])==0)
    {
        c2 = getcomplex(argv[3]);//mengambil komponen real dan imajiner
		printf("Pembagian Bilangan Kompleks\n");
		result = divide(c1,c2); //membagi bilangan kompleks
		printf("c1 = %s\nc2 = %s\nc1 / c2 = %.2lf + (%.2lfi)\n",argv[2],argv[3],result.real,result.imag);
    }
    else if (strcmp("mag",argv[1])==0)
    {
		printf("Magnitude Bilangan Kompleks\n");
		mgntd = mag(c1); //mencari magnituda bilangan kompleks
		printf("c = %s\nMagnitude (c) = %.2lf \n",argv[2],mgntd);
    }
    else if (strcmp("ph",argv[1])==0)
    {
		printf("Phase Bilangan Kompleks\n");
		fasa = phase(c1); //mencari fasa bilangan kompleks
		printf("c = %s\nPhase (c) = %.2lf \n",argv[2],fasa);
    }
    else
		printf("Input salah");

    //End Of Program
    return 0;
}
