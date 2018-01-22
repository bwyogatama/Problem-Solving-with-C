// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 13
// Percobaan     : 4
// Tanggal       : 11 April 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem4.c
// Deskripsi     : Program ini akan menghapus node pada list

#include<stdio.h>
#include<stdlib.h>

//membuat tipe bentukan node yang terdiri dari integer dan pointer to the next node
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

int main(){

    //Define VARIABLE
    typeQueue linked_list1, linked_list2;
    node x,temp;
    int i,hapus,a,trash;
    int data[3];

    //INISIALISASI
    linked_list1.qhead = NULL;
    linked_list1.qtail = NULL;
    linked_list2.qhead = NULL;
    linked_list2.qtail = NULL;

    //INPUT DATA
    printf("Masukkan nilai pada list : \n");
    scanf("%d",&x.elmt); //menerima masukkan nilai pertama pada linked list

    linked_list1.qtail = &x; //node yang baru saja dimasukkan akan dijadikan tail dari linked list
    linked_list1.qhead = &x; //node yang baru saja dimasukkan akan dijadikan head dari linked list

    for (i=0;i<2;i++)
    {
            printf("Masukkan nilai pada list : \n");
            scanf("%d",&a); //menerima masukkan nilai selanjutnya sampai 3 kali masukkan
            pushTail(a,&linked_list1); //memanggil prosedur pushTail
    }


    //Mengampilkan list awal sebelum dihapus
	printf("Linked list yang dimasukkan : \n");
    for (i=0;i<3;i++)
    {
        data[i] = popHead(&linked_list1);
		printf("%d ",data[i]); //menampilkan output linked list yang dimasukkan
    }
	printf("\n");

	printf("Masukkan urutan yang akan dihapus: \n");
	scanf("%d",&hapus);

	//PROSES menghapus linked list
	temp.elmt = 999; //mengassign node head untuk sementara
    linked_list2.qtail = &temp;
    linked_list2.qhead = &temp;
	for (i=0;i<3;i++)
    {
        if (i!= (hapus-1))
        {
            pushTail (data[i],&linked_list2); //menambahkan data yang tidak ingin dihapus pada list
        }
    }
    trash = popHead(&linked_list2); //membuang node head yang tidak terpakai

	printf("Linked list setelah dihapus : \n");
	for (i=0;i<2;i++)
		printf("%d ",popHead(&linked_list2)); //menampilkan list setelah salah satu elemennya dihapus

	printf("\n");

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

