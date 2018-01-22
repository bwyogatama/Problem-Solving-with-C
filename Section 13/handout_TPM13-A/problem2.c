// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 13
// Percobaan     : 2
// Tanggal       : 11 April 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem2.c
// Deskripsi     : Program ini akan menggabungkan 2 linked list


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
        typeQueue linked_list1;
        typeQueue linked_list2;
        typeQueue linked_list3;
        node* x;
        node* y;
        node* z;
        int a,b,i;
        int trash,temp;

        //INISIALISASI
        linked_list1.qhead = NULL;
        linked_list1.qtail = NULL;
        linked_list2.qhead = NULL;
        linked_list2.qtail = NULL;
        linked_list3.qhead = NULL;
        linked_list3.qtail = NULL;
        x = (node*) malloc (sizeof(node));
        y = (node*) malloc (sizeof(node));
        z = (node*) malloc (sizeof(node));

        //INPUT Data
        printf("Input A : \n"); //menerima input element pertama dari linked list1
		scanf("%d",&i);
		x->elmt = i;
		linked_list1.qhead = x;
		linked_list1.qtail = x;

        for (i=0;i<2;i++)
        {
            printf("Input A : \n");
            scanf("%d",&a); //menerima masukkan nilai selanjutnya sampai 3 kali masukkan
            pushTail(a,&linked_list1); //memanggil prosedur pushTail
        }

        printf("Input B : \n");
		scanf("%d",&y->elmt); //menerima input element pertama dari linked list2
		linked_list2.qhead = y;
		linked_list2.qtail = y;

        for (i=0;i<3;i++)
        {
            printf("Input B : \n");
            scanf("%d",&b); //menerima masukkan nilai selanjutnya sampai 3 kali masukkan
            pushTail(b,&linked_list2); //memanggil prosedur pushTasil
        }

        //menggabungkan 2 linked list
        z->elmt = x->elmt; //mengassign node pertama dari linked list 1 menjadi node pertama dari linked list 3
        linked_list3.qtail = x;
        linked_list3.qhead = x;
        trash = popHead(&linked_list1); //membuang node pertama dari linked list1 karena sudah diassign ke linked list3
        for (i=0;i<2;i++)
        {
            temp = popHead(&linked_list1); //memanggil fungsi popHead
            pushTail(temp,&linked_list3); //memanggil prosedur pushTail
        }
        for (i=0;i<4;i++)
        {
            temp = popHead(&linked_list2); //memanggil fungsi popHead
            pushTail(temp,&linked_list3); //memanggil prosedur pushTail
        }


	printf("Linked list gabungan A dan B yang dimasukkan : \n");
    for (i=0;i<7;i++)
    {
        if (i == 6 )
        {
            printf("%d \n",popHead(&linked_list3));
        }
        else
        {
		printf("%d ",popHead(&linked_list3)); //menampilkan output linked list yang dimasukkan
        }
    }

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
