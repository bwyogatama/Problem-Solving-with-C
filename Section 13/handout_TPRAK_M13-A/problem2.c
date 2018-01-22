// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 13
// Percobaan     : 2
// Tanggal       : 11 April 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem2.c
// Deskripsi     : Program ini akan melakukan dot product 2 buah vektor menggunakan linked list


#include<stdio.h>
#include<stdlib.h>

//memuat tipe bentukan node yang terdiri dari integer dan pointer to the next node
typedef struct node{
    /***** Data Variables *****/
    float elmt;
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
void pushTail (float Data, typeQueue *queue);
//FUNCTION popHeadIndeks
//Fungsi ini akna mengambil data pada bagian head suatu Queue dan mengembalikan  nilai dari node tersebut
//Bagian Head akan dilepaskan dari queue dan menjadikan node di belakangnya sebagai head yang baru
//Return: head_elmt
float popHead(typeQueue* queue);

int main()
{
    // Definisi Variabel
    int i, indeks, cek;
    float val, sum;
    float x, y;
    typeQueue linked_list2, linked_list1;


    // Inisialisasi
    linked_list1.qhead = NULL;
    linked_list1.qtail = NULL;
    linked_list2.qhead = NULL;
    linked_list2.qtail = NULL;
    i=0;
    cek = 1;

    // Input Data
    while(cek) {
		printf("Masukkan index pada list A : \n"); //menerima input indeks list A
		scanf("%d", &indeks);
		if(indeks==9999) {
            cek=0;
            for(;i<9998; i++) {
                val=0;
                pushTail(val, &linked_list1);
            }
        }
        else {
            for(;i<indeks-1; i++) {
                val=0;
                pushTail(val, &linked_list1);
            }
            printf("Masukkan value pada index tersebut : \n"); //menerima input list A
            scanf("%f", &val);
            pushTail(val, &linked_list1);
            i+=1;
        }
    }

    //inisialisasi kedua
    cek=1;
    i=0;

    while(cek) {
		printf("Masukkan index pada list B : \n"); //menerima input indeks list B
		scanf("%d", &indeks);
		if(indeks==9999) {
            cek=0;
            for(;i<9998; i++) {
                val=0;
                pushTail(val, &linked_list2);
            }
        }
        else {
            for(;i<indeks-1; i++) {
                val=0;
                pushTail(val, &linked_list2);
            }
            printf("Masukkan value pada index tersebut : \n"); //menerima input list B
            scanf("%f", &val);
            pushTail(val, &linked_list2);
            i+=1;
        }
    }

    //PROCESS
    sum = 0;
    for(i=0; i<9998; i++) {
        sum += (popHead(&linked_list1)*popHead(&linked_list2)); //proses mengalikan vektor (dot product)
    }

    // OUTPUT Result
	printf("Hasil dotproduct dari kedua vektor = %.2f\n", sum); //menampilkan hasil dot product pada layar

	return 0;
}



/***** Function and Procedure Algorithm *****/
//PROCEDURE pushTail
//Procedure pushtail akan menambahkan satu buah node di belakang node tail dari sebuah queue yang dituju
//Node yang baru diinput akan bertindak sebagai tail
//Pre : Data and indeks is defined
void pushTail (float Data, typeQueue *queue)
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
float popHead(typeQueue* queue)
{
    //deklarasi variabel
    float temp;
    temp  = queue->qhead->elmt;
    node* present = queue->qhead;
    node* next=queue->qhead->next;

    if(queue->qhead == queue->qtail) {

        queue->qhead = NULL;
        queue->qtail = NULL;
    }
    else
    {
        queue->qhead = next;
    }
    return (temp); //mengembalikan nilai temp
}


