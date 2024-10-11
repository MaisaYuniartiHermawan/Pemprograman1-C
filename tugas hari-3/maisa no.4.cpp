#include <stdio.h>

int main (){
	 
	 int num;
	 
	 printf("Masukan bilangan bulat positif:");
	 scanf("%d", &num );
	 
	 if (num % 2 ==0){
	 	printf("GENAP\n");
	 } else {
	 	printf("GANJIL\n");
	 }
	 return 0;
}
