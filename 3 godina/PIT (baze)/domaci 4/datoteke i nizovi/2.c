//U prvom redu datoteke se nalazi broj koji predstavlja koliko elemenata ima niz celih brojeva, a u drugom elementi niza. Napisati program kojim se izracunava prosecna vrednost
// elemenata na parnim pozicijama niza
#include <stdio.h>

int main(){
	FILE *f = fopen("C:\\Users\\strahinja\\Desktop\\ETS-Rade-Koncar-III9\\3 godina\\PIT (baze)\\domaci 4\\datoteke i nizovi\\1.txt","r");
	int n;
	fscanf(f,"%d",&n);
	int niz[n],i,x;
	
	for(i=0;i<n;i++){
		fscanf(f,"%d",&x);
		niz[i]=x;
	}
	
	int s=0;
	int br=0;
	for(i=0;i<n;i++){
		if(i%2==0){
			s+=niz[i];
			br++;
		}
	}
	float prVrednost = (float)s/br;
	printf("%.2f",prVrednost);
	
	fclose(f);
}
