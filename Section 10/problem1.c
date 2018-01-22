// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 10
// Percobaan     : 1
// Tanggal       : 31 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem1.c
// Deskripsi     : Program ini akan menghitung luas dari segitiga yang dibentuk oleh tiga titik koordinat dalam bidang 3 dimensi pada koordinat Cartesian
                // Program ini akan menerima input 3 nilai (x,y,z) untuk masing masing koordinat
                // Output yang ditampilkan pada program ini adalah jarak dari tiap koordinat, setengah keliling segitiga, dan luas segitiga yang terbentuk


//Mengakses Library
#include <stdio.h>
#include <math.h>

#define pi 3.1415926

//PROGRAM UTAMA
int main()
{
	// Deklarasi tipe data bentukan
	typedef struct
	{
	    int x;
	    int y;
	    int z;
	} coordinates; //membuat tipe data bentukan bernama coordinates


	// Deklarasi Variabel
	coordinates A; //mendeklarasikan variabel A bertipe coordinates
	coordinates B; //mendeklarasikan variabel B bertipe coordinates
	coordinates C; //mendeklarasikan variabel C bertipe coordinates
	float jarak_AB,jarak_BC,jarak_AC;
    float s,L; //mendeklarasikan variabel untuk menyimpan setengah keliling segitiga dan luas segitiga

    // Meminta masukan koordinat
    printf("Masukkan koordinat A :\n");
    scanf("%d %d %d",&A.x,&A.y,&A.z); //menerima input koordinat A

    printf("Masukkan koordinat B :\n");
    scanf("%d %d %d",&B.x,&B.y,&B.z); //menerima input koordinat B

    printf("Masukkan koordinat C :\n");
    scanf("%d %d %d",&C.x,&C.y,&C.z); //menerima input koordinat C

    //PROCESS
    jarak_AB=sqrt(pow((A.x-B.x),2)+pow((A.y-B.y),2)+pow((A.z-B.z),2)); //menghitung jarak A-B
    jarak_BC=sqrt(pow((B.x-C.x),2)+pow((B.y-C.y),2)+pow((B.z-C.z),2)); //menghitung jarak B-C
    jarak_AC=sqrt(pow((A.x-C.x),2)+pow((A.y-C.y),2)+pow((A.z-C.z),2)); //menghitung jarak A-C

    s= 0.5*(jarak_AB+jarak_BC+jarak_AC); //menghitung setengah keliling segitiga
    L=sqrt(s*(s-jarak_AB)*(s-jarak_BC)*(s-jarak_AC)); //menghitung luas segitiga

    //OUTPUT Result

    // Menampilkan jarak antar titik

    printf("Jarak koordinat A-B adalah %.3f\n",jarak_AB); //menampilkan jarak A-B
    printf("Jarak koordinat B-C adalah %.3f\n",jarak_BC); //menampilkan jarak B-C
    printf("Jarak koordinat A-C adalah %.3f\n",jarak_AC); //menampilkan jarak A-C

    // Menampilkan setengah keliling segitiga
    printf("Setengah keliling segitiga yang terbentuk adalah %.3f\n",s); //menampilkan setengah keliling segitiga pada layar


    // Menampilkan luas segitiga
    printf("Luas segitiga yang terbentuk adalah %.3f\n",L); //menampilkan luas segitiga pada layar

    //End Of Program
    return 0;
}
