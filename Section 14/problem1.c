// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 14
// Percobaan     : 1
// Tanggal       : 14 April 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan menghitung integral dengan metode Riemann Sum

#include <stdio.h>
#include <string.h>
#include <math.h>
#include "problem1lib.h"

int main(void)
{
    //Define VARIABLE
    int pil1,pil2,a,b,n;
    double hasil;
    char method[30],fungsi[30];

    //INPUT DATA
    printf("1. Left Rectangle\n");
    printf("2. Right Rectangle\n");
    printf("3. Middle Rectangle\n");
    printf("4. Trapezoidal Rule\n");
    printf("5. Simpson's Rule\n");
    printf("Masukkan jenis Riemann Sum yang ingin digunakan : \n");
    scanf("%d",&pil1); //membaca input metode yang ingin digunakan

    printf("1. f(x)=(x-1)^2\n");
    printf("2. f(x)=1/x\n");
	printf("3. f(x)=2^x\n");
    printf("Masukkan pilihan fungsi : \n");
    scanf("%d",&pil2); //membaca pilihan fungsi yang ingin dihitung


    printf("Masukkan nilai ambang batas bawah : \n");
    scanf("%d",&a); //membaca nilai ambang batas bawah

    printf("Masukkan nilai ambang batas atas : \n");
    scanf("%d",&b); //membaca nilai ambang batas atas

    printf("Masukkan jumlah partisi n : \n");
    scanf("%d",&n); //membaca jumlah partisi

    //PROCESS
    //Melakukan perhitungan sesuai dengan metode dan fungsi yang dipilih
    if (pil1 == 1)
    {
        hasil = Left_Rec(pil2,a,b,n); //memanggil fungsi Left_Rec pada library problem1lib.h
    }
    else if (pil1 == 2)
    {
        hasil = Right_Rec(pil2,a,b,n);//memanggil fungsi Right_Rec pada library problem1lib.h
    }
    else if (pil1 == 3)
    {
        hasil = Middle_Rec(pil2,a,b,n);//memanggil fungsi Middle_Rec pada library problem1lib.h
    }
    else if (pil1 == 4)
    {
        hasil = Trapezoidal_Rule(pil2,a,b,n);//memanggil fungsi Trapezoidal_Rule pada library problem1lib.h
    }
    else if (pil1==5)
    {
        hasil = Simpson_Rule(pil2,a,b,n);//memanggil fungsi Simpson_Rule pada library problem1lib.h
    }

    //menyiapkan string untuk ditampilkan pada output
    if (pil1 == 1)
    {
        strcpy(method,"Left Rectangle");
    }
    else if (pil1 == 2)
    {
        strcpy(method,"Right Rectangle");
    }
    else if (pil1 == 3)
    {
        strcpy(method,"Middle Rectangle");
    }
    else if (pil1 == 4)
    {
        strcpy(method,"Trapezoidal Rule");
    }
    else if (pil1==5)
    {
        strcpy(method,"Simpson's Rule");
    }

    if (pil2==1)
    {
        strcpy(fungsi,"(x-1)^2");
    }
    else if (pil2==2)
    {
        strcpy(fungsi,"1/x");
    }
    else if (pil2==3)
    {
        strcpy(fungsi,"2^x");
    }

    //OUTPUT Result
    printf("Nilai integral dari %s dengan menggunakan metode %s adalah %.3lf\n",fungsi,method,hasil); //menampilkan output program

    //End Of Program
    return 0;
}
