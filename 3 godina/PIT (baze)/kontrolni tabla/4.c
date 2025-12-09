// 1) koliko je igraca starije od? 2)nova dat sa svim pozicijama? 3)broj igraca
#include <stdio.h>
#include <string.h>
typedef struct Igrac{
	char ime[10];
	char prezime[10];
	char pozicija[20];
	int godiste;
}Igrac;

int main(){
	FILE *f=fopen("C:\\Users\\strahinja\\Desktop\\ETS-Rade-Koncar-III9\\3 godina\\PIT (baze)\\kontrolni tabla\\4.txt","r");
	FILE *novF=fopen("C:\\Users\\strahinja\\Desktop\\ETS-Rade-Koncar-III9\\3 godina\\PIT (baze)\\kontrolni tabla\\pozicije.txt","w");
	
	Igrac g;
	int brIgraca=0, brStarijiOd=0;
	while(!feof(f)){
		fscanf(f,"%s%s%s%d",&g.ime,&g.prezime,&g.pozicija,&g.godiste);
		brIgraca++;
		if(g.godiste>2000){
			brStarijiOd++;
		}
		fprintf(novF,"%s\n",g.pozicija);
	}
//	fclose(f);
//	
//	f=fopen("C:\\Users\\strahinja\\Desktop\\ETS-Rade-Koncar-III9\\3 godina\\PIT (baze)\\kontrolni tabla\\4.txt","r");
//	
	
	printf("Broj igraca je: %d | Stariji od 2000: %d",brIgraca,brStarijiOd);
	
	fclose(novF);
	fclose(f);
}
