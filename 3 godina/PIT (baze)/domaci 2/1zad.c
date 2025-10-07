#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f;
	int n,i,s=0;
	
	f=fopen("C:\\Users\\strahinja\\Desktop\\Skola\\3 godina\\PIT (baze)\\domaci 2\\1zad.txt", "r");
	fscanf(f,"%d",&n);
	int niz[n];
	for(i=0;i<n;i++){
		fscanf(f,"%d",&niz[i]);
		if(niz[i]%2==0){
			s+=niz[i];
		}
	}
	printf("%d",s);
	fclose(f);
}
