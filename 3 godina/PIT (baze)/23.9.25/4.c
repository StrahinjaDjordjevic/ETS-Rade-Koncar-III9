#include <stdio.h>

int main(){
	FILE *f;
	int br;
	f=fopen("C:\\Users\\Ucenici\\Documents\\Caka\\PIT baze\\23.9.25\\4zad.txt", "w");
	
	printf("Unesi broj: ");scanf("%d",&br);
	while(br!=0){
		printf("Unesi broj: ");
		fprintf(f,"%5d",br);
		scanf("%d",&br);
	}
	
	fclose(f);
}
