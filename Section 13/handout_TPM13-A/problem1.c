// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 13
// Percobaan     : 1
// Tanggal       : 11 April 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan membuat dan mencetak linked list masukan user ke layar

#include<stdio.h>

#include<stdlib.h>


//memuat tipe bentukan node yang terdiri dari integer dan pointer to the next node
typedef struct node{
    /***** Data Variables *****/
    int elmt;
    /***** Node Linker *****/
    struct node* next;
}node;

//membuat tipe bentukan typeQueue yang terdiri dari tipe bentukan node
typedef struct {
    /***** qHead Pointer *****/
    node* qhead;
    /***** qTail Pointer *****/
    node* qtail;
} typeQueue;

/***** Function & Procedure Declaration *****/
//PROCEDURE pushTail
//Procedure pushtail akan menambahkan satu buah node di belakang node tail dari sebuah queue yang dituju
//Node yang baru diinput akan bertindak sebagai tail
//Pre : Data is defined
void pushTail (int Data, typeQueue *queue);
//FUNCTION popHead
//Fungsi ini akna mengambil data pada bagian head suatu Queue dan mengembalikan  nilai dari node tersebut
//Bagian Head akan dilepaskan dari queue dan menjadikan node di belakangnya sebagai head yang baru
//Return: head_elmt
int popHead(typeQueue* queue);


int main(){
    //Define VARIABLE
    node x;
    typeQueue linked_list;
    int y,z,i;

    //INISIALISASI
    linked_list.qhead = NULL;
    linked_list.qtail = NULL;


    //INPUT DATA

    printf("Masukkan nilai pada linked list : \n");
    scanf("%d",&x.elmt); //menerima masukkan nilai pertama pada linked list

    linked_list.qtail = &x; //node yang baru saja dimasukkan akan dijadikan tail dari linked list
    linked_list.qhead = &x; //node yang baru saja dimasukkan akan dijadikan head dari linked list

    for (i=0;i<2;i++)
    {
            printf("Masukkan nilai pada linked list : \n");
            scanf("%d",&y); //menerima masukkan nilai selanjutnya sampai 3 kali masukkan
            pushTail(y,&linked_list); //memanggil prosedur pushTail
    }


    //OUTPUT Result
    printf("Linked list yang dimasukkan : \n");

    for (i=0;i<3;i++)
    {
        z = popHead(&linked_list);
        if (i == 2 )
        {
            printf("%d \n",z);
        }
        else
        {

		printf("%d ",z); //menampilkan output linked list yang dimasukkan
        }

    }

    //END Of Program

	return 0;

}

/***** Function and Procedure Algorithm *****/
//PROCEDURE pushTail
//Procedure pushtail akan menambahkan satu buah node di belakang node tail dari sebuah queue yang dituju
//Node yang baru diinput akan bertindak sebagai tail
//Pre : Data is defined
void pushTail (int Data, typeQueue *queue)
{
    //deklarasi variabel
    node* temp = (node*) malloc(sizeof(node));
    //inisalisasi
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
        queue->qtail = queue->qtail->next;
    }
}


//FUNCTION popHead
//Fungsi ini akan mengambil data pada bagian head suatu Queue dan mengembalikan  nilai dari node tersebut
//Bagian Head akan dilepaskan dari queue dan menjadikan node di belakangnya sebagai head yang baru
//Return: head_elmt
int popHead(typeQueue* queue)
{
    //deklarasi variabel
    int temp  = queue->qhead->elmt;
    node* present = queue->qhead;
    node* next=queue->qhead->next;

    if(queue->qhead == queue->qtail) {

        queue->qhead = NULL;
        queue->qtail = NULL;
    }
    else {

        queue->qhead = next;
    }
    return temp; //mengembalikan nilai temp
}
