#include <stdio.h>
#include <math.h>

int main (){
	float alas, tinggi, sisi_miring;
	
	//input sisi alas dan sisi tinggi
	printf("Masukan panjang alas segitiga (dalam cm): ");
	scanf("%f", &alas);
	
	printf("Masukan tinggi segitiga (dalam cm): ");
	scanf("%f", &tinggi)
	
	//menghitung sisi miring menggunakan rumus phytagoras
	;sisi_miring = sqrt((alas*alas) + (tinggi*tinggi))
	
	//menampilkan hasil perhitungan
	;printf("panjang sisi miring segitiga adalah: %.2f cm\n", sisi_miring)
	
	;return 0;
}
