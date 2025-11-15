//Data je datoteka sa ocenama ucenika na pismenom. Napisati program kojim se izracunava proescnu ocena ucenika
#include <stdio.h>

int main(){
	FILE *f;
	int br=0,s=0,x;
	float prosecnaOcena;
	f=fopen("C:\\Users\\strahinja\\Desktop\\ETS-Rade-Koncar-III9\\3 godina\\PIT (baze)\\domaci 4\\datoteke\\1.txt","r");
	while(!feof(f)){
		fscanf(f,"%d",&x);
		br++;
		s+=x;
	}
	if(br>0){
		prosecnaOcena=(float)s/br;
		printf("Prosecna ocena je: %.2f",prosecnaOcena);
	}else{
		printf("Svi su pobegli sa pismenog!");
	}
	
	fclose(f);
}
