// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 14
// Percobaan     : 1
// Tanggal       : 14 April 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1lib.h
// Deskripsi     : Program ini akan menjadi header file untuk menghitung Riemann Sum pada program problem1.c

#ifndef COMPLEX_H
#define COMPLEX_H

//FUNCTION fx1
//Fungsi ini akan menghitung (x-1)^2
//Pre: x is defined
double fx1 (double x);

//FUNCTION fx2
//Fungsi ini akan menghitung 1/x
//Pre: x is defined
double fx2 (double x);

//FUNCTION fx3
//Fungsi ini akan menghitung 2^x
//Pre: x is defined
double fx3 (double x);

//FUNCTION Left_Rec
//Fungsi ini akan mengaproksimasi integral dengan metode Left Rectangle
//Pre: choice, a, b, n is defined
double Left_Rec (int choice, int a, int b, int n);

//FUNCTION Right_Rec
//Fungsi ini akan mengaproksimasi integral dengan metode Right Rectangle
//Pre: choice, a, b, n is defined
double Right_Rec (int choice, int a, int b, int n);

//FUNCTION Middle_Rec
//Fungsi ini akan mengaproksimasi integral dengan metode Middle Rectangle
//Pre: choice, a, b, n is defined
double Middle_Rec (int choice, int a, int b, int n);

//FUNCTION Trapezoidal_Rule
//Fungsi ini akan mengaproksimasi integral dengan metode Trapezoidal Rule
//Pre: choice, a, b, n is defined
double Trapezoidal_Rule (int choice, int a, int b, int n);

//FUNCTION Simpson_Rule
//Fungsi ini akan mengaproksimasi integral dengan metode Simpson Rule
//Pre: choice, a, b, n is defined
double Simpson_Rule (int choice, int a, int b, int n);



#endif // COMPLEX_H

