#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f,*sf;
	int n,i,j,max=0,p;
	f=fopen("C:\\Users\\Ucenici\\Documents\\Caka\\PIT baze\\1.10.25\\2.txt","r");
	sf=fopen("C:\\Users\\Ucenici\\Documents\\Caka\\PIT baze\\1.10.25\\2sortiran.txt","w");
	
	fscanf(f,"%d",&n);
	int niz[n];
	for(i=0;i<n;i++){
		fscanf(f,"%d",&niz[i]);
		printf("%5d",niz[i]);
	}
	max=niz[0];
	for(i=0;i<n;i++){
		if(niz[i]>max){
			max=niz[i];
		}
	}
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(niz[i]>niz[j]){
				p=niz[i];
				niz[i]=niz[j];
				niz[j]=p;
			}
		}
	}
	for(i=0;i<n;i++){
		fprintf(sf,"%d\t",niz[i]);		
	}
	printf("\n\n%d",max);
	
	fclose(sf);
	fclose(f);
}
