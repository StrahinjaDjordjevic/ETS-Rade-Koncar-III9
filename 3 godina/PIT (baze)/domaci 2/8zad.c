#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f;
	int s=0,br=0, x;
	float ar;
	f=fopen("C:\\Users\\strahinja\\Desktop\\Skola\\3 godina\\PIT (baze)\\domaci 2\\8zad.txt", "r");
	
	while(!feof(f)){
		fscanf(f,"%d",&x);
		s+=x;
		br++;
	}
	if(br!=0){
		ar=(float)s/br;
		printf("%f",ar);
	}else{
		printf("Nema dobrih brojeva za zadatak");
	}
	
	fclose(f);
}
