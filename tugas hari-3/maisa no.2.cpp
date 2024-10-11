#include <stdio.h>

int main (){
	float celcius, fahrenheit, reamur;
	
	//input nilai suhu dalam celcius
	printf ("Masukan suhu dalam Celcius: ");
	scanf("%f", &celcius);
	
	//Menghitung suhu dalam Fahrenheit dan Reamur
	fahrenheit = (celcius * 9/5) + 32;
	reamur + celcius * 4/5;
	
	//menampilkan hasil konversi
	printf ("suhu dalam Fahrenheit: %.2f\n",fahrenheit);
	printf("suhu dalam Reamur: %.2f\n", reamur);
	
	return 0;

}
