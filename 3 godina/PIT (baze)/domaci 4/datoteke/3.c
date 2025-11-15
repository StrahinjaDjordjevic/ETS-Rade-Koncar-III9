//Data je datoteka celih brojeva. Napisati program koji se izracunava zbir najveceg i najmanjeg broja u datoteci.
#include <stdio.h>

int main(){
	FILE *f=fopen("C:\\Users\\strahinja\\Desktop\\ETS-Rade-Koncar-III9\\3 godina\\PIT (baze)\\domaci 4\\datoteke\\3.txt","r");
	int min,max,x;
	
	fscanf(f,"%d",&x);
	min=x;
	max=x;
	while (!feof(f)){
		fscanf(f,"%d",&x);
		if(min>x){
			min=x;
		}
		if(max<x){
			max=x;
		}
	}
	printf("Najmanji broj je: %d\n",min);
	printf("Najveci broj je: %d\n",max);
	printf("Njihov zbir je: %d\n",max+min);
	
	fclose(f);
}
