#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f, *fs;
	int n,i,j;
	
	f=fopen("C:\\Users\\strahinja\\Desktop\\Skola\\3 godina\\PIT (baze)\\domaci 2\\5zad.txt", "r");
	fs=fopen("C:\\Users\\strahinja\\Desktop\\Skola\\3 godina\\PIT (baze)\\domaci 2\\5zadSortiran.txt", "w");
	
	fscanf(f,"%d",&n);
	int niz[n],p;
	
	for(i=0;i<n;i++){
		fscanf(f,"%d",&niz[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(niz[i]<niz[j]){
				p=niz[i];
				niz[i]=niz[j];
				niz[j]=p;
			}
		}
	}
	for(i=0;i<n;i++){
		fprintf(fs,"%5d",niz[i]);
	}
	
	fclose(fs);
	fclose(f);
	
}
