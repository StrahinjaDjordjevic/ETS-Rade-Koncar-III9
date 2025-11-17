//u prvom redu datoteke se nalazi broj koji predstavlja koliko elemenata ima niz celih brojeva, a u drugom elementi niza. 
//Napisati program kojim se soritra niz i ubacuje u novu datoteku tako da u prvom redu bude broj elemenata niza a u drugom sortiran niz
#include <stdio.h>

int main(){
	FILE *f=fopen("C:\\Users\\strahinja\\Desktop\\ETS-Rade-Koncar-III9\\3 godina\\PIT (baze)\\domaci 4\\datoteke i nizovi\\1.txt","r");
	FILE *fSortiran=fopen("C:\\Users\\strahinja\\Desktop\\ETS-Rade-Koncar-III9\\3 godina\\PIT (baze)\\domaci 4\\datoteke i nizovi\\sortiran.txt","w");
	int n;
	fscanf(f,"%d",&n);
	int niz[n],i,x,j;
	for(i=0;i<n;i++){
		fscanf(f,"%d",&x);
		niz[i]=x;
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(niz[i]>niz[j]){
				x=niz[i];
				niz[i]=niz[j];
				niz[j]=x;
			}
		}
	}
	fprintf(fSortiran,"%d\n",n);
	for(i=0;i<n;i++){
		fprintf(fSortiran,"%d ",niz[i]);
	}
	fclose(fSortiran);
	fclose(f);
}
