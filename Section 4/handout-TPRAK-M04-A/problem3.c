// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 4
// Percobaan     : 3
// Tanggal       : 25 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem3.c
// Deskripsi     : Program ini akan menghitung rata rata dari input yang diberikan pengguna hingga pengguna memberikan input 999, program ini menyertakan juga validasi input harus berada di antara  0 sampai 100


#include <stdio.h> //mengakses library
int main(){
		//Define VARIABLE
			float rata2,sum; 
			int x,count;
			
		//Input Data
        printf("Masukkan nilai integer :\n");
        scanf("%d",&x); //menerima input bilangan pertama kali
        
        //PROCESS
        sum = 0; //inisialisasi nilai sum
        count = 0; //inisialisasi nilai count
		while (x != 999) //selama nilai input user tidak sama dengan 999
		{ 
			if ((x>=0) && (x<=100)) //jika input berada pada rentang 0-100
			{
				sum = sum + x;
				count = count + 1;
			}
			else //jika input berada di luar rentang 0-100
			{
				printf("Input harus berada pada rentang 0-100!\n");
			}
			printf("Masukkan nilai integer :\n");
	    	scanf("%d",&x); //menerima input bilangan hingga input user tidak sama dengan 999
			}
		if (count != 0) //jika nilai count tidak sama dengan nol
		{
			rata2 = sum / count; //menghitung rata-rata dengan membagi jumlah total integer dan jumlah masukan integer
			printf("Rata-rata dari %d bilangan tersebut adalah %.2f\n",count,rata2); //mencetak nilai count dan rata rata
		}
		else //jika nilai count sama dengan nol
		printf("Rata-rata dari %d bilangan tersebut adalah 0.00\n",count); //statement yang dikeluarkan apabila count = 0
		return 0; //mengakhiri program
}
