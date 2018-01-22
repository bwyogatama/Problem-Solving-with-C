// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 11
// Percobaan     : 1
// Tanggal       : 4 April 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan menghitung operasi aritmatika yang diberikan user dengan format masukan berupa notasi postfix

#include <stdio.h>

#define MAX 7
#define size 7
//Deklarasi tipe data bentukan
typedef struct
{
    /* Bagian ini merupakan tipe bentukan untuk stack yang akan dibuat. Berisikan element dan variabel yang menunjuk element teratas dari stack*/
    float num[size];
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

int main()
{
    //Define VARIABLE
    char input[MAX],karakter;
    float a,b;
    int i; //pencacah
    float hasil;

    //INPUT DATA
    printf("INPUT : \n");
    scanf("%s",input); //membaca input data dari user

    //Inisialisasi
    i=0;
    karakter = input[i];

    //PROCESS
    while( karakter != '\0')
    {
        if(isdigit(karakter)) //mengecek apakah karakter tersebut termasuk operator atau operand
        {
            push(karakter-'0'); //memasukkan operand ke stack
        }
        else //apabila karakter yang dideteksi adalah operator
        {
            a=pop(); //memanggil fungsi pop
            b=pop(); //memanggil fungsi pop
            switch(karakter) //switch statement
            {
                case '+':
                    hasil = a+b; //menghitung penjumlahan
                    push(hasil);
                    break;
                case '-':
                    hasil = a-b; //menghitung pengurangan
                    push(hasil);
                    break;
                case '*':
                    hasil = a*b; //menghitung perkalian
                    push(hasil);
                    break;
                case '/':
                    hasil =a/b; //menghitung pembagian
                    push(hasil);
                    break;
             }
         }
         i += 1;
         karakter = input[i];
    }

    //Output Result
    printf("%.2f\n",stack.num[stack.top]); //menampilkan output pada layar

//End of Program
return(0);
}

//Definisi Prosedur atau fungsi

/* Implementasi Prosedur */
/*Prosedur push untuk menambahkan data pada stack
  Pre:elmt is defined*/
void push (float elmt)
{
    stack.top += 1;
    stack.num[stack.top] = elmt;
}

/* Implementasi fungsi */
/*Fungsi pop untuk mengambil data dari stack
  Fungsi ini akan mengembalikan element teratas dari sebuah stack
  Pre:none
  Return:elmt */

float pop()
{
    float elmt;
    elmt=stack.num[stack.top];
    stack.top -= 1;
    return(elmt);
}
