// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 13
// Percobaan     : 1
// Tanggal       : 11 April 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan melakukan sorted merge 2 buah sorted list memanfaatkan linked list


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
    int a,b,i,j,A,B;
    int temp;

    //INISIALISASI
    linked_list1.qhead = NULL;
    linked_list1.qtail = NULL;
    linked_list2.qhead = NULL;
    linked_list2.qtail = NULL;
    linked_list3.qhead = NULL;
    linked_list3.qtail = NULL;

	printf("Jumlah anggota list A : \n");
    scanf("%d",&A);

        for (i=0;i<(A);i++)
        {
            printf("Data list A : \n");
            scanf("%d",&a); //menerima masukkan nilai selanjutnya sampai 3 kali masukkan
            pushTail(a,&linked_list1); //memanggil prosedur pushTail
        }



	printf("Jumlah anggota list B : \n");
	scanf("%d",&B);

	int Arr[A+B];

        for (i=0;i<(B);i++)
        {
            printf("Data list B : \n");
            scanf("%d",&b); //menerima masukkan nilai selanjutnya sampai 3 kali masukkan
            pushTail(b,&linked_list2); //memanggil prosedur pushTasil
        }


        //menggabungkan 2 linked list
        for (i=0;i<(A);i++)
        {
            temp = popHead(&linked_list1); //memanggil fungsi popHead
            pushTail(temp,&linked_list3); //memanggil prosedur pushTail
        }
        for (i=0;i<(B);i++)
        {
            temp = popHead(&linked_list2); //memanggil fungsi popHead
            pushTail(temp,&linked_list3); //memanggil prosedur pushTail
        }

        //memasukkan linked list ke dalam array
        for (i=0;i<(A+B);i++)
        {
            Arr[i] = popHead(&linked_list3);
        }

        //PROCESS
        //melakukan proses sorting secara ascending dengan metode selection sort
        for (i=0;i<((A+B)-1);i++)
        {
            for (j=i+1;j<(A+B);j++)
            {
                if (Arr[j]<Arr[i]) //apabila nilai array pada indeks ke j lebih kecil dibandingkan nilai array pada indeks ke i (kondisi untuk sorting ascending)
                {
                temp = Arr[i]; //menukar isi matriks pada indeks ke i dengan indeks ke j
                Arr[i] = Arr[j];
                Arr[j] = temp;
                }
            }
        }


        //PROSES memasukkan array ke dalam linked list
        for (i=0;i<(A+B);i++)
        {
            pushTail (Arr[i],&linked_list3); //menambahkan elemen array ke dalam linked list ketiga
        }

        printf("Hasil sorted merge : \n");
        for (i=0;i<(A+B);i++)
		printf("%d ",popHead(&linked_list3)); //menampilkan list setelah dilakukan sorted merge

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
