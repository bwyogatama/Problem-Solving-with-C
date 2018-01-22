// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 4
// Percobaan     : 2
// Tanggal       : 25 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem2.c
// Deskripsi     : Program ini akan menghitung rata rata dari input yang diberikan pengguna hingga pengguna memberikan input 999


#include <stdio.h> //mengakses library
int main(){
		//Define VARIABLE
			float rata2; 
			int x,sum,count;
			
		//Input Data
        printf("Masukkan nilai integer :\n");
        scanf("%d",&x); //menerima input bilangan pertama kali
        
        //PROCESS
        sum = 0; //inisialisasi nilai sum
        count = 0; //inisialisasi nilai count
		while (x != 999) //selama nilai input user tidak sama dengan 999
		{ 
			sum = sum +x;
			count = count +1;
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
