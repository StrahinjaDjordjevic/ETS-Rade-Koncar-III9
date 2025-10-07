#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f;
	int min,n,i;
	
	f=fopen("C:\\Users\\strahinja\\Desktop\\Skola\\3 godina\\PIT (baze)\\domaci 2\\3zad.txt", "r");
	fscanf(f,"%d",&n);
	int niz[n];
	for(i=0;i<n;i++){
		fscanf(f,"%d",&niz[i]);	
	}
	min=niz[0];
	for(i=0;i<n;i++){
		if(niz[i]<min){
			min=niz[i];
		}
	}
	
	printf("%d",min);
	fclose(f);
}
