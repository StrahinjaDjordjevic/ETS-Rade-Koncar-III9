#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f;
	float x;
	int br;
	f=fopen("C:\\Users\\strahinja\\Desktop\\Skola\\3 godina\\PIT (baze)\\domaci 2\\9zad.txt", "r");
	
	while(!feof(f)){
		fscanf(f,"%f",&x);
		if(x>=4.50){
			br++;
		}
	}
	printf("%d ucenika je odlicno",br);
	fclose(f);
}
