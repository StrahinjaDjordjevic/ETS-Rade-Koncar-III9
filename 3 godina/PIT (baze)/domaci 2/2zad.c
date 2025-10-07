#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f;
	int br,n,i;
	
	f=fopen("C:\\Users\\strahinja\\Desktop\\Skola\\3 godina\\PIT (baze)\\domaci 2\\2zad.txt", "r");
	fscanf(f,"%d",&n);
	int niz[n];
	for(i=0;i<n;i++){
		fscanf(f,"%d",&niz[i]);
		if(niz[i]>9 && niz[i]<100){
			br++;
		}
	}
	printf("%d",br);
	fclose(f);
}
