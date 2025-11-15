//Data je datoteka u kojoj se nalazi prica. Koliko je velikih, a koliko malih slova u datoteci?
#include <stdio.h>
#include <string.h>

int main(){
	FILE *f=fopen("C:\\Users\\strahinja\\Desktop\\ETS-Rade-Koncar-III9\\3 godina\\PIT (baze)\\domaci 4\\datoteke\\2.txt","r");
	int brV=0,brM=0;
	char c;
	while(!feof(f)){
		c=fgetc(f);
		if(c>=65 && c<=90){
			brV++;
		}else if(c>=97 && c<=122){
			brM++;
		}
	}
	printf("Broj velikih slova je: %d. Broj malih slova je: %d",brV,brM);
	
	fclose(f);
}
