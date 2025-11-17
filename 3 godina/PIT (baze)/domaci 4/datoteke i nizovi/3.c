//U prvom redu datoteke se nalazi broj koji predstavlja koliko elemenata ima niz realnih brojeva, a u drugom elementi niza. Napisati program kojim se izracunava pozicija maksimalnog 
//elementa niza.
#include <stdio.h>

int main(){
	FILE *f=fopen("C:\\Users\\strahinja\\Desktop\\ETS-Rade-Koncar-III9\\3 godina\\PIT (baze)\\domaci 4\\datoteke i nizovi\\1.txt","r");
	int n;
	fscanf(f,"%d",&n);
	int niz[n],i,x;
	for(i=0;i<n;i++){
		fscanf(f,"%d",&x);
		niz[i]=x;
	}
	int max=niz[0],pozMax;
	for(i=0;i<n;i++){
		if(max<niz[i]){
			max=niz[i];
			pozMax=i;
		}
	}
	printf("%d",pozMax);
	
	fclose(f);
}
