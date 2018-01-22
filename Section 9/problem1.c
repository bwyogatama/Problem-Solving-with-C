// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 9
// Percobaan     : 1
// Tanggal       : 28 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan menghitung jumlah angka nol di belakang hasil faktorial sebuah bilangan integer kemudian merata ratakannya. Pertama tama program akan menerima input jumlah bilangan integer
                //yang akan dihitung. Kemudian program akan menerima input bilangan satu persatu untuk dihitung jumlah angka nol dan rata ratanya.
                //Program akan menampilkan hasil perhitungan baik secara sorting ascending maupun tanpa sorting


//Mengakses Library
#include <stdio.h>  /* Library for standard input and output in command prompt screen */
#include <stdlib.h> /* Library for memory allocation in dynamic array */

// Deklarasi Prosedur atau fungsi disini (opsional)
/*Fungsi penghitung_nol
*menghitung jumlah angka nol di belakang sebuah bilangan integer
*mengembalikan jumlah angka nol yang telah dihitung
*Pre: n is defined */
int penghitung_nol (int n);


/* Program Utama */
int main(void)
{
  /* Variabel */
  int n,temp;
  double sum;
  int i,j; //pencacah
  int* bilangan; //deklarasi variable untuk dynamic array
  int* jml_nol; //deklarasi variable untuk dynamic array
  double rata2; //variabel bertipe double untuk menyimpan rata rata
  /* Input */
  printf("Masukkan jumlah data : \n");
  scanf("%d",&n); //menerima input jumlah data yang akan dihitung

  /*Memory Allocation*/
  bilangan = (int*)calloc(n,sizeof(int)); //Alokasi memori untuk array bilangan dengan elemen sebanyak n
  jml_nol = (int*)calloc(n,sizeof(int));  //Alokasi memori untuk array jumlah nol dengan elemen sebanyak n

  /* Menghitung nilai nol di faktorial */

    //Menginput setiap bilangan kemudian menghitung jumlah nol dari hasil faktorial dengan iterasi
    for (i=0;i<n;i++)
    {
    printf("Masukkan faktorial ke-%d : \n",i);
    scanf("%d",&bilangan[i]); //menerima input bilangan ke-i
    jml_nol[i] = penghitung_nol(bilangan[i]); //memanggil fungsi penghitung nol
    }

  /* Keluaran pada layar tanpa sorting */
  printf("**Tanpa Sorting**\n");
  printf("Faktorial\tNol\n");
  for (i=0;i<n;i++) //menampilkan output program dengan keadaan tanpa sorting
    printf("%d\t\t%d\n",bilangan[i],jml_nol[i]);


  /* Proses sorting ascending */

	//melakukan proses sorting secara ascending dengan metode selection sort
	for (i=0;i<(n-1);i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (bilangan[j]<bilangan[i]) //apabila nilai array pada indeks ke j lebih kecil dibandingkan nilai array pada indeks ke i (kondisi untuk sorting ascending)
			{
			temp = bilangan[i]; //menukar isi array bilangan pada indeks ke i dengan isi array bilangan pada indeks ke j
			bilangan[i] = bilangan[j];
			bilangan[j] = temp;
			temp = jml_nol[i]; //menukar isi array jml_nol pada indeks ke i dengan isi array jml_nol pada indeks ke j
			jml_nol[i] = jml_nol[j];
            jml_nol[j] = temp;
			}
		}
	}

  /* Keluaran pada layar dengan sorting */
  printf("**Dengan Sorting**\n");
  printf("Faktorial\tNol\n");
  for (i=0;i<n;i++) //menampilkan output program dengan keadaan setelah disorting
    printf("%d\t\t%d\n",bilangan[i],jml_nol[i]);


  /* Menghitung rata-rata */
    //menghitung rata rata dengan iterasi
    sum = 0; //inisialisasi nilai sum
    for (i=0;i<n;i++)
    {
        sum = sum+jml_nol[i]; //menghitung jumlah total semua data
    }
    rata2 = sum/n;
    printf("Rata-rata angka nol : %.3f\n",rata2); //menampilkan hasil perhitungan rata rata pada layar

  /* Melepas memory */
    free(bilangan);
    free(jml_nol);

  return 0; //mengakhiri program
}

// Definisi Prosedur atau fungsi disini (opsional)
/*Fungsi penghitung_nol
*menghitung jumlah angka nol di belakang sebuah bilangan integer
*mengembalikan jumlah angka nol yang telah dihitung
*Pre: n is defined */
int penghitung_nol (int n)
{
    int temp;
    int divider,sum;
    sum = 0; //inisisalisasi nilai sum
    divider = 5; //inisialisasi pembagi
    temp = n/divider;
    while ((temp) >=1) //kondisi looping (selama nilai temp lebih besar dari 1)
    {
        sum = sum+temp;
        divider = divider*5;
        temp = n/divider;
    }
    return(sum); //mengembalikan hasil perhitungan
}

