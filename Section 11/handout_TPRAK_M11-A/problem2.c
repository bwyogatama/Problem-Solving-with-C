// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 11
// Percobaan     : 2
// Tanggal       : 4 April 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem2.c
// Deskripsi     : Program ini akan mengenkripsi input berupa 8 buah bilangan biner dan menampilkan hasil enkripsi berupa bilangan heksadesimal

//Mengakses library
#include <stdio.h>
#include <math.h>
#define size 8

// Deklarasi Tipe Data Bentukan
typedef struct
{
    /* Bagian ini merupakan tipe bentukan untuk stack yang akan dibuat. Berisikan element dan variabel yang menunjuk element teratas dari stack*/
    int biner[size];
    int top;
} stacktype;

stacktype stack;

//Deklarasi prosedur atau fungsi

/* Implementasi Prosedur */
/*Prosedur push untuk menambahkan data pada stack
  Pre:elmt is defined*/
void push (float elmt);

/* Implementasi fungsi */
/*Fungsi pop untuk mengambil data dari stack
  Fungsi ini akan mengembalikan element teratas dari sebuah stack
  Pre:none
  Return:elmt */
float pop();

/* Implementasi fungsi */
/*Fungsi BintoHex untuk mengkonversi dari biner ke hexadecimal
  Fungsi ini akan mengembalikan bilangan hexadecimal bertipe character
  Pre:x is defined
  Return:hex */
char BintoHex (int x);

int main()
{
    //Define VARIABLE
    int biner1,biner2;
    int hex1;
    int hex2;
    int temp;
    int i; //pencacah
    stack.top = -1; //inisialisasi nilai stack.top

    //Input Data
    for (i=0;i<8;i++)
    {
        printf("Input biner ke-%d : \n",i);
        scanf("%d",&temp);
        push(temp); //memasukkan input ke stack
    }

    //Inisialisasi
    biner1=0;
    biner2=0;


    //PROCESS
    //Mengambil digit biner dari stack kemudian mengkonvertnya menjadi 4 digit integer
    for (i=0;i<4;i++)
        biner1 = pop()+biner1*10;
    for (i=0;i<4;i++)
        biner2 = pop()+biner2*10;
    //Mengubah dari bentuk binary ke hexadecimal
    hex1 = BintoHex(biner1); //memanggil fungsi BintoHex
    hex2 = BintoHex(biner2); //memanggil fungsi BintoHex

    //Output Result
    printf("Hasil : %lx%lx\n",hex1,hex2); //menampilkan output dalam bentuk hexadecimal

	return(0);
}

//Definisi Prosedur atau fungsi

/* Implementasi Prosedur */
/*Prosedur push untuk menambahkan data pada stack
  Pre:elmt is defined*/
void push (float elmt)
{
    stack.top += 1;
    stack.biner[stack.top] = elmt;
}

/* Implementasi fungsi */
/*Fungsi pop untuk mengambil data dari stack
  Fungsi ini akan mengembalikan element teratas dari sebuah stack
  Pre:none
  Return:elmt */

float pop()
{
    float elmt;
    elmt=stack.biner[stack.top];
    stack.top -= 1;
    return(elmt);
}

/* Implementasi fungsi */
/*Fungsi BintoHex untuk mengkonversi dari biner ke hexadecimal
  Fungsi ini akan mengembalikan bilangan hexadecimal bertipe character
  Pre:x is defined
  Return:hex */
char BintoHex (int x)
{
    int sisa,j;
    int hex;
    hex = 0;
    j=1;
    while(x!=0)
    {
    sisa=x%10;
    hex = hex +(sisa*j);
    j = j* 2;
    x/=10;
    }
    return (hex);
}



