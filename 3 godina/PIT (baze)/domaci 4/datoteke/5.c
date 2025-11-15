//data je datoteka celih brojeva. napisati program kojim se nalazi koji po redu je najveci broj u datoteci
#include <stdio.h>

int main(){
	FILE *f=fopen("C:\\Users\\strahinja\\Desktop\\ETS-Rade-Koncar-III9\\3 godina\\PIT (baze)\\domaci 4\\datoteke\\5.txt", "r");
	int max,pozMax,x,trenPoz;
	
	fscanf(f,"%d",&x);
	max=x;
	trenPoz++;
	while(!feof(f)){
		fscanf(f,"%d",&x);
		trenPoz++;
		if(max<x){
			max=x;
			pozMax=trenPoz;
		}
	}
	printf("Pozicija najveceg je: %d",pozMax);
	
	fclose(f);
}
