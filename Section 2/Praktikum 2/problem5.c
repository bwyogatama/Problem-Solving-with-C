// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 2
// Percobaan     : 5
// Tanggal       : 18 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem5.c
// Deskripsi     : Program ini akan menerima input berupa 3 bilangan digital (1 atau 0) dari user kemudian menghitung dan FullAdder dari a, b,dan cin dan menampilkan hasil perhitungan Sum dan Carry out pada console


#include <stdio.h> //mengakses library
#define XOR ^
#define AND *
#define OR +


int main(void)
{
    //Define VARIABLE
    int a,b,c_in,S,C_out;
    //INPUT Data

    printf("Masukkan nilai a, b, dan c_in :\n");
    scanf("%d %d %d",&a,&b,&c_in); //menerima input a, b dan c_in, diasumsikan input selalu merupakan bilangan digital (0 atau 1)


    //PROCESS
    S = a XOR b XOR c_in; //menghitung Sum dari a dan b
    C_out = ((a XOR b) AND c_in) OR (a AND b); //menghitung Carry Out dari a dan b

    //OUTPUT Result

    printf("S = %d\n",S); //menampilkan hasil perhitungan Sum dari a dan b

    printf("C_out = %d\n",C_out);//menampilkan hasil perhitugang Carry Out dari a dan b

    return 0; //mengakhiri program

}

