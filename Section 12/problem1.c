// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 12
// Percobaan     : 1
// Tanggal       : 7 April 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan menghitung waktu total pelayanan antrian pada suatu bank oleh 3 teller.
                // User akan memberikan input jumlah antrian dan waktu pelayanan tiap nasabah dan program akan menampilkan output berupa waktu total pelayanan pada layar terminal

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


/***** Main Program *****/
int main(){
    	/**Program utama yang akan dibuat pada saat praktikum **/

	//Define VARIABLE
	int jml_nasabah;
	int waktu;
	int temp;
	int i; //pencacah
	int Anisa,Bunga,Chandra,hasil;
	typeQueue queue; //mendeklarasikan variabel queue dengan tipe bentukan typeQueue
	//Input Data

	scanf("%d",&jml_nasabah); //menerima input jumlah nasabah

    //inisisalisasi
    queue->qhead = NULL;
    queue->qtail = NULL;
	Anisa=0;
	Bunga=0;
	Chandra=0;

    //PROCESS
	for (i=0;i<jml_nasabah-1;i++)
	{
	    scanf("%d",&waktu); //membaca input waktu setiap nasabah
	    pushTail (waktu,&queue); //memanggil prosedur pushTail
	}
    scanf("%d",&waktu);
    pushTail(waktu,&queue);

    for (i=0;i<jml_nasabah;i++)
    {
        temp = popHead(&queue); //memanggil fungsi popHead dan menyimpannya dalam suatu variabel
        if ((Anisa<=Bunga)&&(Anisa<=Chandra)) //apabila Anisa sedang kosong
        {
            Anisa += temp;
        }
        else if ((Bunga<Anisa)&&(Bunga<=Chandra)) //apabila Bunga sedang kosong
        {
            Bunga += temp;
        }
        else if ((Chandra<Anisa)&&(Chandra<Bunga)) //apabila Chandra sedang kosong
        {
            Chandra += temp;
        }

    }
    //Mencari nilai Maksimum dari Anisa, Bunga, dan Chandra
    if ((Anisa>=Bunga)&&(Anisa>=Chandra))
    {
        hasil = Anisa;
    }
    else if ((Bunga>=Chandra)&&(Bunga>=Anisa))
    {
        hasil = Bunga;
    }
    else if ((Chandra>Bunga)&&(Chandra>Anisa))
    {
        hasil = Chandra;
    }

	//Output Result
    printf("Waktu yang diperlukan adalah %d menit\n",hasil); //menampilkan hasil akhir perhitungan

    //End Of Program
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
    node* temp = malloc(sizeof(node));
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
    int tmp  = queue->qhead->elmt;

    if(queue->qhead == queue->qtail) {
        queue->qhead = NULL;
    }
    else 
    {
        queue->qhead = queue->qhead->next;
    }
    return tmp; //mengembalikan nilai temp
}
