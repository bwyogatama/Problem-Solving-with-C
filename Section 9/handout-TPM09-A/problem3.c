// Tugas Pendahuluan Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 9
// Percobaan     : 3
// Tanggal       : 26 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem3.c
// Deskripsi     : program ini akan mengalikan dua buah matriks. Pertama tama User diminta untuk menginputkan orde kedua matriks untuk validasi proses perkalian
                //Jika memungkinkan, barulah program ini akan meminta input dari user untuk mengisis tiap elemen matriks

//mengakses library
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//Deklarasi Variable
    int row1, row2, kol1,kol2,i,j,k;
    int **M1; //deklarasi variabel untuk dynamic multidimensional array
    int **M2; //deklarasi variabel untuk dynamic multidimensional array
    int **Hasil; //deklarasi variabel untuk dynamic multidimensional array

	//Input Orde Matriks
    printf("Masukkan orde matriks pertama :\n");
    scanf("%d %d",&row1,&kol1); //menerima input orde matriks pertama
    printf("Masukkan orde matriks kedua :\n");
    scanf("%d %d",&row2,&kol2); //menerima input orde matriks kedua


	//Alokasi Memori

	//Alokasi memori untuk baris  ketiga matriks
    M1 = (int**)calloc(row1,sizeof(int*));
    M2 = (int**)calloc(row1,sizeof(int*));
    Hasil = (int**)calloc(row1,sizeof(int*));

    //Alokasi memori untuk kolom ketiga matriks dengan iterasi
    for(i=0; i<row1; i++)
    M1[i] = (int *)calloc(kol1,sizeof(int));
    for(i=0; i<row2; i++)
    M2[i] = (int *)calloc(kol2,sizeof(int));
    for(i=0; i<row1; i++)
    Hasil[i] = (int *)calloc(kol2,sizeof(int));

	//Cek Orde Matriks
	if (kol1!=row2) //kondisi apabila perkalian tidak dapat dilakukan
    printf("Orde matriks yang dimasukkan salah!\n"); //memberi peringatan kepada user apabila orde matriks tidak valid
    else //apabila orde matriks valid
    {
        //Input Nilai matriks pertama menggunakan iterasi
        for (i=0;i<row1;i++)
        {
        for (j=0;j<kol1;j++)
        {
            printf("Masukkan elemen (%d, %d) dari matriks pertama :\n",i,j);
            scanf("%d",&M1[i][j]); //menerima input elemen pada baris ke-i kolom ke-j
        }
        }
        //Input Nilai matriks kedua
        for (i=0;i<row2;i++)
        {
        for (j=0;j<kol2;j++)
        {
        printf("Masukkan elemen (%d, %d) dari matriks kedua :\n",i,j);
        scanf("%d",&M2[i][j]);//menerima input elemen pada baris ke-i kolom ke-j
        }
        }

        //Proses Perkalian Matriks
        for (i=0;i<row1;i++)
        {
		for (j=0;j<kol2;j++)
		{
			Hasil[i][j] = 0; //inisialisasi matriks hasil perkalian
			for (k=0;k<kol1;k++)
			{
				Hasil[i][j] = Hasil[i][j] + (M1[i][k]*M2[k][j]); //mengalikan Matriks A dan Matriks B
			}
		}
        }
        //Cetak Matriks Pertama
        printf("Matriks pertama :\n");
        for (i=0;i<row1;i++)
        {
            for (j=0;j<kol1;j++)
            {
            printf("%d\t",M1[i][j]); //mencetak elemen pada baris -i kolom -j
            }
            printf("\n"); //berpindah baris apabila semua elemen pada kolom -j sudah dicetak
        }


        //Cetak Matriks kedua
        printf("Matriks kedua :\n");
        for (i=0;i<row2;i++)
        {
            for (j=0;j<kol2;j++)
            {
            printf("%d\t",M2[i][j]);//mencetak elemen pada baris -i kolom -j
            }
            printf("\n");//berpindah baris apabila semua elemen pada kolom -j sudah dicetak
        }

        //Cetak Matriks hasil perkalian
        printf("Hasil perkalian matriks :\n");
        for (i=0;i<row1;i++)
        {
            for (j=0;j<kol2;j++)
            {
            printf("%d\t",Hasil[i][j]);//mencetak elemen pada baris -i kolom -j
            }
            printf("\n");//berpindah baris apabila semua elemen pada kolom -j sudah dicetak
        }
    }
    //END of Program
    return 0;
}
