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

/***** Type Defining *****/
//membuat tipe bentukan node
typedef struct PNode *alamat;

typedef struct PNode{
    /***** Data Variables *****/
    int elmt;
    /***** Node Linker *****/
    alamat next;
}node;

//membuat tipe bentukan typeQueue yang terdiri dari tipe bentukan node
typedef struct {
    /***** qHead Pointer *****/
    node* qhead;
    /***** qTail Pointer *****/
    node* qtail;
} typeQueue;

/***** Function & Procedure Declaration *****/
//PROCEDURE pushtail
//Procedure pushtail akan menambahkan satu buah node di belakang node tail dari sebuah queue yang dituju
//Node yang baru diinput akan bertindak sebagai tail
//Pre : Data is defined
void pushTail (int Data, typeQueue *queue);
//FUNCTION pophead
//Fungsi ini akna mengambil data pada bagian head suatu Queue dan mengembalikan  nilai dari node tersebut
//Bagian Head akan dilepaskan dari queue dan menjadikan node di belakangnya sebagai head yang baru
//Return: head_elmt
int popHead(typeQueue* queue);


/***** Main Program *****/
int main(){
    	/**Program utama yang akan dibuat pada saat praktikum **/

	//Define VARIABLE
	//Input Data
	//PROCESS
	//Output Result

}

/***** Function and Procedure Algorithm *****/
//PROCEDURE pushtail
//Procedure pushtail akan menambahkan satu buah node di belakang node tail dari sebuah queue yang dituju
//Node yang baru diinput akan bertindak sebagai tail
//Pre : Data is defined
void pushTail (int Data, typeQueue *queue)
{
    node* temp = malloc(sizeof(node));
    temp->elmt = Data;
    temp->next = NULL;




    if( queue->qhead == NULL )
    {
        queue->qhead = temp;
        queue->qtail = temp;
    }
    else
        {
        queue->qtail->next = temp;
        queue->qtail = temp;
    }
}


//FUNCTION pophead
//Fungsi ini akna mengambil data pada bagian head suatu Queue dan mengembalikan  nilai dari node tersebut
//Bagian Head akan dilepaskan dari queue dan menjadikan node di belakangnya sebagai head yang baru
//Return: head_elmt
int popHead(typeQueue* queue)
{
    int temp ;
    node* present;
    node* nxt;
    //inisialisasi
    temp = queue->qhead->elmt;
    present = queue->qhead;
    nxt = queue->qhead->next;

    if(queue->qhead == queue->qtail) {
        free(queue->qhead);
        queue->qhead = NULL;
        queue->qtail = NULL;
    }
    else {
        free(queue->qhead);
        queue->qhead = nxt;
    }

    free(present); //membebaskan memori

    return temp; //mengembalikan nilai temp
}
