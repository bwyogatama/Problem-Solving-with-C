// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 14
// Percobaan     : 1
// Tanggal       : 14 April 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1lib.c
// Deskripsi     : Program ini berisi penjabaran fungsi yang terdapat pada header file problem1lib.h
#include <stdio.h>
#include <math.h>
#include "problem1lib.h"

//FUNCTION fx1
//Fungsi ini akan menghitung (x-1)^2
//Pre: x is defined
double fx1 (double x)
{
    double result;
    result = pow((x-1),2);
    return (result);
}

//FUNCTION fx2
//Fungsi ini akan menghitung 1/x
//Pre: x is defined
double fx2 (double x)
{
    double result;
    result = 1/x; //melakukan perhitungan
    return (result);
}

//FUNCTION fx3
//Fungsi ini akan menghitung 2^x
//Pre: x is defined
double fx3 (double x)
{
    double result;
    result = pow(2,x); //melakukan perhitungan
    return (result);
}

//FUNCTION Left_Rec
//Fungsi ini akan mengaproksimasi integral dengan metode Left Rectangle
//Pre: choice, a, b, n is defined
double Left_Rec (int choice, int a, int b, int n)
{
    double LR;
    double d;
    double i;
    d = (double) (b-a)/n;
    LR=0; //inisialisasi
    if (choice == 1) //jika fungsi 1 dipilih
    {
        for (i=a;i<b;i+=d)
        {
        LR = LR+fx1(i);
        }
    }
    else if (choice == 2)//jika fungsi 2 dipilih
    {
        for (i=a;i<b;i+=d)
        {
        LR = LR+fx2(i);
        }
    }
    else if (choice == 3)//jika fungsi 3 dipilih
    {
        for (i=a;i<b;i+=d)
        {
        LR = LR+fx3(i);
        }
    }
    return(LR*d); //mengembalikan hasil perhitungan
}

//FUNCTION Right_Rec
//Fungsi ini akan mengaproksimasi integral dengan metode Right Rectangle
//Pre: choice, a, b, n is defined
double Right_Rec (int choice, int a, int b, int n)
{
    double RR;
    double d;
    int i;
    d = (double) (b-a)/n;
    RR=0; //inisialisasi
    if (choice == 1)//jika fungsi 1 dipilih
    {
        for (i=1;i<=n;i++)
        {
        RR = RR+fx1(a+i*d);
        }
    }
    else if (choice == 2)//jika fungsi 2 dipilih
    {
        for (i=1;i<=n;i++)
        {
        RR = RR+fx2(a+i*d);
        }
    }
    else if (choice == 3)//jika fungsi 3 dipilih
    {
        for (i=1;i<=n;i++)
        {
        RR = RR+fx3(a+i*d);
        }
    }
    return(RR*d); //mengembalikan hasil perhitungan
}

//FUNCTION Middle_Rec
//Fungsi ini akan mengaproksimasi integral dengan metode Middle Rectangle
//Pre: choice, a, b, n is defined
double Middle_Rec (int choice, int a, int b, int n)
{
    double MR;
    double d;
    double i,j;
    d = (double) (b-a)/n;
    MR=0; //inisialisasi
    if (choice == 1)//jika fungsi 1 dipilih
    {
        for (i=a;i<b;i+=d)
        {
        j = (i+i+d)/2;
        MR = MR+fx1(j);
        }
    }
    else if (choice == 2)//jika fungsi 2 dipilih
    {
        for (i=a;i<b;i+=d)
        {
        j = (i+i+d)/2;
        MR = MR+fx2(j);
        }
    }
    else if (choice == 3)//jika fungsi 3 dipilih
    {
        for (i=a;i<b;i+=d)
        {
        j = (i+i+d)/2;
        MR = MR+fx3(j);
        }
    }
    return(MR*d); //mengembalikan hasil perhitungan
}

//FUNCTION Trapezoidal_Rule
//Fungsi ini akan mengaproksimasi integral dengan metode Trapezoidal Rule
//Pre: choice, a, b, n is defined
double Trapezoidal_Rule (int choice, int a, int b, int n)
{
    double TR;
    double d;
    int i;
    d = (double) (b-a)/n;
    TR = 0; //inisialisasi
    if (choice == 1)//jika fungsi 1 dipilih
    {
        for (i=0;i<=n;i++)
        {
        if ((i==0)||(i==n))
        {
        TR = TR+fx1(a+i*d);
        }
        else
        {
        TR = TR+2*fx1(a+i*d);
        }
        }
    }
    else if (choice == 2)//jika fungsi 2 dipilih
    {
        for (i=0;i<=n;i++)
        {
        if ((i==0)||(i==n))
        {
        TR = TR+fx2(a+i*d);
        }
        else
        {
        TR = TR+2*fx2(a+i*d);
        }
        }
    }
    else if (choice == 3)//jika fungsi 3 dipilih
    {
        for (i=0;i<=n;i++)
        {
        if ((i==0)||(i==n))
        {
        TR = TR+fx3(a+i*d);
        }
        else
        {
        TR = TR+2*fx3(a+i*d);
        }
        }
    }
    return (TR*d/2); //mengembalikan hasil perhitungan
}

//FUNCTION Simpson_Rule
//Fungsi ini akan mengaproksimasi integral dengan metode Simpson Rule
//Pre: choice, a, b, n is defined
double Simpson_Rule (int choice, int a, int b, int n)
{
    double SR;
    double d;
    int i;
    d = (double) (b-a)/n;
    SR = 0; //inisialisasi
    if (choice == 1)//jika fungsi 1 dipilih
    {
        for (i=0;i<=n;i++)
        {
        if ((i==0)||(i==n))
        {
        SR = SR+fx1(a+i*d);
        }
        else if (i % 2 != 0)
        {
        SR = SR+4*fx1(a+i*d);
        }
        else if (i % 2 == 0)
        {
        SR = SR+2*fx1(a+i*d);
        }
        }
    }
    else if (choice == 2)//jika fungsi 2 dipilih
    {
        for (i=0;i<=n;i++)
        {
        if ((i==0)||(i==n))
        {
        SR = SR+fx2(a+i*d);
        }
        else if (i % 2 != 0)
        {
        SR = SR+4*fx2(a+i*d);
        }
        else if (i % 2 == 0)
        {
        SR = SR+2*fx2(a+i*d);
        }
        }
    }
    else if (choice == 3)//jika fungsi 3 dipilih
    {
        for (i=0;i<=n;i++)
        {
        if ((i==0)||(i==n))
        {
        SR = SR+fx3(a+i*d);
        }
        else if (i % 2 != 0)
        {
        SR = SR+4*fx3(a+i*d);
        }
        else if (i % 2 == 0)
        {
        SR = SR+2*fx3(a+i*d);
        }
        }
    }
    return (SR*d/3); //mengembalikan hasil perhitungan
}
