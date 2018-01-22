// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 14
// Percobaan     : 1
// Tanggal       : 14 April 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : complex.h
// Deskripsi     : Program ini merupakan library buatan bernama complex.h

#ifndef COMPLEX_H
#define COMPLEX_H
#define phi 3.1415926

//tipe bentukan untuk bilangan complex
typedef struct
{
    double real;
    double imag;
} complex;


//FUNCTION getcomplex
//Fungsi ini akan memperoleh komponen real dan imajiner dari string berbentuk a+bi
//Pre: masukan is defined
complex getcomplex (char* masukan);
//FUNCTION mag
//Fungsi ini akan menghitung magnituda dari bilangan kompleks
//Pre: a is defined
double mag (complex a);
//FUNCTION phase
//Fungsi ini akan menghitung fasa dari bilangan kompleks
//Pre: a is defined
double phase (complex a);
//FUNCTION add
//Fungsi ini akan menghitung penjumlahan dari bilangan kompleks
//Pre: a and b is defined
complex add (complex a,complex b);
//FUNCTION substract
//Fungsi ini akan menghitung pengurangan dari bilangan kompleks
//Pre: a and b is defined
complex substract (complex a,complex b);
//FUNCTION multiply
//Fungsi ini akan menghitung perkalian dari bilangan kompleks
//Pre: a and b is defined
complex multiply (complex a,complex b);
//FUNCTION divide
//Fungsi ini akan menghitung pembagian dari bilangan kompleks
//Pre: num and denum is defined
complex divide (complex a,complex b);

#endif // complex
