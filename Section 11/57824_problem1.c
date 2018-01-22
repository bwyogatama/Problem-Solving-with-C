// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul        : 11
// Percobaan    : 1
// Tanggal      : Senin, 4 April 2016
// Nama (NIM)   : Jefferson Tantya (13214053)
// Nama File    : problem1.c
// Deskripsi    : Program yang menggunakan stack untuk menghitung operasi yang menggunakan metode postfix

#include <stdio.h>

//Deklarasi tipe data bentukan
typedef struct {
    double s[7];
    int top;
} stacktype;

// Deklarasi stack
stacktype stack;

//Deklarasi prosedur atau fungsi
void push(double elem);
double pop();

//Program Utama
int main() {
    //Definisi Variabel
    char pofx[50], ch;
    int i = 0;
    double op1, op2;

    //Input Data
    printf("INPUT : \n");
    scanf("%s", pofx);

    //Process
    while( (ch=pofx[i++]) != '\0') {
        if(isdigit(ch)) push(ch-'0');
        else {
            op2=pop();
            op1=pop();
            switch(ch) {
                case '+':push(op2+op1);break;
                case '-':push(op2-op1);break;
                case '*':push(op2*op1);break;
                case '/':push(op2/op1);break;
            }
        }
    }

    printf("%.2f\n", stack.s[stack.top]);

return(0);
}

//Definisi Prosedur atau fungsi
void push(double elem) {
    stack.s[++stack.top]=elem;
}

double pop() {
    return(stack.s[stack.top--]);
}

