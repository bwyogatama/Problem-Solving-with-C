// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 12
// Percobaan     : 1
// Tanggal       : 7 April 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini adalah persiapan dari program utama yang akan dibuat pada waktu praktikum

//mengakses library
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct PNode *alamat;

/***** Type Defining *****/
//membuat tipe bentukan node
typedef struct PNode
{
    /***** Data Variables *****/
    int elmt;
    /***** Node Linker *****/
    alamat next;
}node;

//membuat tipe bentukan typeQueue yang terdiri dari tipe bentukan node
typedef struct
{
    /***** qHead Pointer *****/
    node* qhead;
    /***** qTail Pointer *****/
    node* qtail;
}typeQueue;

/***** Function & Procedure Declaration *****/
//PROCEDURE pushtail
//Procedure pushtail akan menambahkan satu buah node di belakang node tail dari sebuah queue yang dituju
//Node yang baru diinput akan bertindak sebagai tail
//Pre : Data is defined
void pushTail (int Data, typeQueue  *queue);
//FUNCTION pophead
//Fungsi ini akna mengambil data pada bagian head suatu Queue dan mengembalikan  nilai dari node tersebut
//Bagian Head akan dilepaskan dari queue dan menjadikan node di belakangnya sebagai head yang baru
//Return: head_elmt
int popHead (typeQueue *q);

/***** Main Program *****/
int main()
{
	/**Program utama yang akan dibuat pada saat praktikum **/

	//Define VARIABLE
	//Input Data
	//PROCESS
	//Output Result

    return 0;

}

/***** Function and Procedure Algorithm *****/
//PROCEDURE pushtail
//Procedure pushtail akan menambahkan satu buah node di belakang node tail dari sebuah queue yang dituju
//Node yang baru diinput akan bertindak sebagai tail
//Pre : Data is defined
void pushTail (int Data, typeQueue *queue)
{
    node *temp = malloc (sizeof(node));
    temp -> elmt = Data;
    temp -> next = NULL;
    if (queue->qhead== NULL && queue->qtail==NULL)
    {
        queue->qhead = temp;
        queue->qtail = temp;
    }
    else
    {
        queue->qtail -> next = temp;
        queue->qtail = temp;
    }

}

//FUNCTION pophead
//Fungsi ini akna mengambil data pada bagian head suatu Queue dan mengembalikan  nilai dari node tersebut
//Bagian Head akan dilepaskan dari queue dan menjadikan node di belakangnya sebagai head yang baru
//Return: head_elmt
int pophead(typeQueue *q)
{
    int temp = q->qhead->elmt;
    node* present = q->qhead;
    node* next = q->qhead->next;

    if(q->qhead==q->qtail)
    {
        free(q->qhead);
        q->qhead = NULL;
        q->qtail = NULL;
    }
    else
    {
        free(q->qhead);
        q->qhead = next;
    }
    free(present);
    return(temp);
}



