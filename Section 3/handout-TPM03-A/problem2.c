// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul         : 3
// Percobaan     : 2
// Tanggal       : 20 Februari 2016
// Nama (NIM)    : Bobbi Winema Yogatama (13214071)
// Nama File     : problem2.c
// Deskripsi     : Program ini akan menerima input satuan derajat asal, satuan derajat tujuan, dan nilai suhu kemudian mengonversi nilai suhu tersebut dari satuan derajat asal ke satuan derajat tujuan

#include <stdio.h>//mengakses library
int main(void){

    //Define VARiABLE
    int pilihan1,pilihan2;
    double suhu,hasil_konv;

    //Input Data
	printf("Silakan memilih satuan asal\n1. Celcius\n2. Reamur\n3. Fahrenheit\n");
	scanf ("%d",&pilihan1); //menerima input satuan asal

	printf("Silakan memilih satuan tujuan\n1. Celcius\n2. Reamur\n3. Fahrenheit\n");
    scanf ("%d",&pilihan2); //menerima input satuan tujuan

	printf("Masukkan nilai yang akan dikonversi :\n");
	scanf("%lf",&suhu); //menerima input suhu yang akan dikonversi


    //Conditional Statement
    
    if (pilihan1 == 1) //jika satuan asal dipilih Celcius
    {
            if (pilihan2 == 1) //jika satuan tujuan dipilih Celcius
            {
                hasil_konv = suhu; //mengonversi dari Celcius ke Celcius
                printf("%.3f Celcius = %.3f Celcius\n",suhu,hasil_konv);
            }
            else if (pilihan2 ==2) //jika satuan tujuan dipilih Reamur
            {
                hasil_konv = suhu*4/5; //mengonversi dari Celcius ke Reamur
                printf("%.3f Celcius = %.3f Reamur\n",suhu,hasil_konv);
            }
			else if (pilihan2 == 3) //jika satuan tujuan dipilih Fahrenheit
            {
                hasil_konv = suhu*9/5+32; //mengonversi dari Celcius ke Fahrenheit
                printf("%.3f Celcius = %.3f Fahrenheit\n",suhu,hasil_konv);
            }
    }
    else if (pilihan1 == 2) //jika satuan asal dipilih Reamur
    {
            if (pilihan2==1)//jika satuan tujuan dipilih Celcius
            {
            	hasil_konv = suhu*5/4; //mengonversi dari Reamur ke Celcius
				printf("%.3f Reamur = %.3f Celcius\n",suhu,hasil_konv);
            }
            else if (pilihan2 == 2) //jika satuan tujuan dipilih Reamur
			{
				hasil_konv = suhu; //mengonversi dari Reamur ke Reamur
				printf("%.3f Reamur = %.3f Reamur\n",suhu,hasil_konv);
            }
            else if (pilihan2 == 3) //jika satuan tujuan dipilih Fahrenheit
			{
				hasil_konv = suhu*9/4+32; //mengonversi dari Reamur ke Fahrenheit
				printf("%.3f Reamur = %.3f Fahrenheit\n",suhu,hasil_konv);
			}    
    }

    else if (pilihan1 ==3) //jika satuan asal dipilih Fahrenheit
    {
            if (pilihan2 == 1) //jika satuan tujuan dipilih Celcius
            {
            	hasil_konv = (suhu-32)*5/9; //mengonversi dari Fahrenheit ke Celcius
            	printf("%.3f Fahrenheit = %.3f Celcius\n",suhu,hasil_konv);
            }
            else if (pilihan2 == 2) //jika satuan tujuan dipilih Reamur
			{ 
				hasil_konv = (suhu-32)*4/9; //mengonversi dari Fahrenheit ke Reamur
				printf("%.3f Fahrenheit = %.3f Reamur\n",suhu,hasil_konv);
            }
            else if (pilihan2 == 3) //jika satuan tujuan dipilih Fahrenheit
            {
            	hasil_konv = suhu; //mengonversi dari Fahrenheit ke Fahrenheit
				printf("%.3f Fahrenheit = %.3f Fahrenheit\n",suhu,hasil_konv);
    		}
    }

	return 0; //mengakhiri program
}
