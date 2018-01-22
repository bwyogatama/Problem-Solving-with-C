// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 14
// Percobaan     : 1
// Tanggal       : 14 April 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : complex.c
// Deskripsi     : Program ini akan menjabarkan seluruh isi fungsi yang terdapat pada library complex.h,  fungsi yang dicari merupakan fungsi yang digunakan untuk perhitungan bilangan kompleks

#include "complex.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//FUNCTION getcomplex
//Fungsi ini akan memperoleh komponen real dan imajiner dari string berbentuk a+bi
//Pre: masukan is defined
complex getcomplex (char* masukan)
{
    complex bil;
    char temp;
    sscanf(masukan, "%lf%c%lfi", &bil.real, &temp, &bil.imag);
    if(temp=='-')
        bil.imag *= -1;
    return bil;
}
//FUNCTION mag
//Fungsi ini akan menghitung magnituda dari bilangan kompleks
//Pre: a is defined
double mag (complex a)
{
    double mgntd;
    mgntd = sqrt(pow(a.real,2)+pow(a.imag,2));
    return(mgntd);
}
//FUNCTION phase
//Fungsi ini akan menghitung fasa dari bilangan kompleks
//Pre: a is defined
double phase (complex a)
{
    double fasa;
    fasa = atan2(a.imag,a.real);
    return (fasa*180/phi);
}
//FUNCTION add
//Fungsi ini akan menghitung penjumlahan dari bilangan kompleks
//Pre: a and b is defined
complex add (complex a,complex b)
{
    complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return(c);
}
//FUNCTION substract
//Fungsi ini akan menghitung pengurangan dari bilangan kompleks
//Pre: a and b is defined
complex substract (complex a,complex b)
{
    complex c;
    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    return(c);
}
//FUNCTION multiply
//Fungsi ini akan menghitung perkalian dari bilangan kompleks
//Pre: a and b is defined
complex multiply (complex a,complex b)
{
    complex c;
    c.real = a.real*b.real - a.imag*b.imag;
    c.imag = a.real*b.imag + b.real*a.imag;
    return(c);
}
//FUNCTION divide
//Fungsi ini akan menghitung pembagian dari bilangan kompleks
//Pre: num and denum is defined
complex divide (complex num,complex denum)
{
    complex result;
    result.real = (num.real*denum.real + num.imag*denum.imag)/(pow(denum.real,2)+pow(denum.imag,2));
    result.imag = (num.imag*denum.real - denum.imag*num.real)/(pow(denum.real,2)+pow(denum.imag,2));
    return(result);
}
