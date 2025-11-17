//U prvom redu datoteke se nalazi broj koji predstavlja koliko elemenata ima niz celih brojeva, a u drugom elementi niza. Napisati program kojim se kreira novi niz
// sa elementima niza koji su iznad proseka date datoteke
#include <stdio.h>

int main(){
	FILE *f=fopen("C:\\Users\\strahinja\\Desktop\\ETS-Rade-Koncar-III9\\3 godina\\PIT (baze)\\domaci 4\\datoteke i nizovi\\1.txt","r");
	int n;
	fscanf(f,"%d",&n);
	int niz[n],i,x;
	int s=0;
	for(i=0;i<n;i++){
		fscanf(f,"%d",&x);
		niz[i]=x;
		s+=x;
	}
	float prosek=(float)s/n;
	int br=0;
	for(i=0;i<n;i++){
		if(niz[i]>prosek){
			br++;
		}
	}
	int noviNiz[br],j=0;
	for(i=0;i<n;i++){
		if(niz[i]>prosek){
			noviNiz[j++]=niz[i];
		}
	}
	for(i=0;i<br;i++){
		printf("%d ",noviNiz[i]);
	}
	fclose(f);
}
