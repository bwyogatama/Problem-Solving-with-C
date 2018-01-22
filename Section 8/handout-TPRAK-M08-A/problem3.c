// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 8
// Percobaan     : 3
// Tanggal       : 10 Maret 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem3.c
// Deskripsi     : Program ini akan menerima input berupa sisi sisi segitiga kemudian mencari luas dan nilai setiap sudut dari segitiga tersebut

//mengakses library
#include <stdio.h>
#include <math.h>
#define pi 3.141592654 //mendefinisikan konstanta pi

// Deklarasi fungsi

/*PROCEDURE scan
*membaca 3 sisi segitiga dari user
*parameter input berupa alamat dari ketiga sisi segitiga yang hendak dibaca
*Pre: a,b,c is defined */
void scan (int* a, int* b, int* c);
/*PROCEDURE print
*menampilkan ketiga sudut segitiga dan luas segitiga
*Pre: angle_a,angle_b,angle_c is defined*/
void print (double angle_a,double angle_b,double angle_c,double luas);
/*FUNCTION area
*menghitung luas dari segitiga menggunakan rumus L=sqrt(sx(s-a)x(s-b)x(s-c))
*Pre: a,b,c is defined
*Parameter output: L*/
double area (int a,int b,int c);
/*FUNCTION angle_a
*menghitung sudut a dari segitiga dalam satuan derajat
*Pre: a,b,c is defined
*Parameter output: angle*/
double angle_a (int a,int b,int c);
/*FUNCTION angle_b
*menghitung sudut b dari segitiga dalam satuan derajat
*Pre: a,b,c is defined
*Parameter output: angle*/
double angle_b (int a,int b,int c);
/*FUNCTION angle_c
*menghitung sudut c dari segitiga dalam satuan derajat
*Pre: a,b,c is defined
*Parameter output: angle*/
double angle_c (int a,int b,int c);

//PROGRAM UTAMA
int main(void){
	//Define VARIABLE
	int x,y,z;
	double luas,sudut_a,sudut_b,sudut_c;
	//INPUT Data
	scan(&x,&y,&z); //memanggil PROCEDURE scan
	//PROCESS
    luas = area(x,y,z); //memanggil Fungsi area
    sudut_a = angle_a(x,y,z); //memanggil Fungsi angle_a
    sudut_b = angle_b(x,y,z); //memanggil Fungsi angle_b
    sudut_c = angle_c(x,y,z); //memanggil Fungsi angle_c
	//OUTPUT Result
    print(sudut_a,sudut_b,sudut_c,luas); //memanggil PROCEDURE print
	return 0;
}

//Definisi Fungsi

/*PROCEDURE scan
*membaca 3 sisi segitiga dari user
*parameter input berupa alamat dari ketiga sisi segitiga yang hendak dibaca
*Pre: a,b,c is defined */
void scan (int* a, int* b, int* c)
{

    printf("Masukkan sisi x :\n");
	scanf("%d",a); //menerima input sisi pertama
	printf("Masukkan sisi y :\n");
	scanf("%d",b); //menerima input sisi kedua
	printf("Masukkan sisi z :\n");
	scanf("%d",c); //menerima input sisi ketiga
}

/*PROCEDURE print
*menampilkan ketiga sudut segitiga dan luas segitiga
*Pre: angle_a,angle_b,angle_c is defined*/
void print (double angle_a,double angle_b,double angle_c,double luas)
{

	printf("Nilai sudut a : %.3f derajat\n",angle_a); //menampilkan sudut_a
	printf("Nilai sudut b : %.3f derajat\n",angle_b); //menampilkan sudut_b
	printf("Nilai sudut c : %.3f derajat\n",angle_c); //menampilkan sudut_c
	printf("Luas segitiga : %.3f cm2\n",luas); //menampilkan luas
}

/*FUNCTION area
*menghitung luas dari segitiga menggunakan rumus L=sqrt(sx(s-a)x(s-b)x(s-c))
*Pre: a,b,c is defined
*Parameter output: L*/
double area (int a,int b,int c)
{
    double L,s;
    s = (a+b+c)/2;
    L = sqrt(s*(s-a)*(s-b)*(s-c)); //menghitung luas segitiga
    return (L);
}

/*FUNCTION angle_a
*menghitung sudut a dari segitiga dalam satuan derajat
*Pre: a,b,c is defined
*Parameter output: angle*/
double angle_a (int a,int b,int c)
{
    double angle,radian,temp;
    //menghitung sudut a
    temp = (pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c);
    radian = acos(temp);
    angle = radian*180 / pi;
    return(angle);
}

/*FUNCTION angle_b
*menghitung sudut b dari segitiga dalam satuan derajat
*Pre: a,b,c is defined
*Parameter output: angle*/
double angle_b (int a,int b,int c)
{
    double angle,radian,temp;
    //menghitung sudut b
    temp = (pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c);
    radian = acos(temp);
    angle = radian*180 / pi;
    return(angle);
}

/*FUNCTION angle_c
*menghitung sudut c dari segitiga dalam satuan derajat
*Pre: a,b,c is defined
*Parameter output: angle*/
double angle_c (int a,int b,int c)
{
    double angle,radian,temp;
    //menghitung sudut c
    temp = (pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b);
    radian = acos(temp);
    angle = radian*180 / pi;
    return(angle);
}
