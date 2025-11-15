//Data je datoteka u kojoj se nalazi prica. Koliko je redova u datoteci?
#include <stdio.h>
#include <string.h>

//prva vrerzija sa stringom (fgets) 
int main(){
    FILE *f = fopen("C:\\Users\\strahinja\\Desktop\\ETS-Rade-Koncar-III9\\3 godina\\PIT (baze)\\domaci 4\\datoteke\\4.txt", "r");
    int brRedova = 0;
    char red[256];

    while (fgets(red, sizeof(red), f)) {
        brRedova++;
    }

    fclose(f);

    printf("%d", brRedova);
    return 0;
}

//druga verzija sa charom (fgetc)
int main(){
	FILE *f = fopen("C:\\Users\\strahinja\\Desktop\\ETS-Rade-Koncar-III9\\3 godina\\PIT (baze)\\domaci 4\\datoteke\\4.txt", "r");
    int brRedova = 0;
    char c;
    
    while(!feof(f)){
    	c=fgetc(f);
    	if(c=='\n'){
    		brRedova++;
		}
	}
	
	//dodaje jos jedan red jer se poslednji red ne zavrsava sa \n
	if(brRedova!=0){
		brRedova++;
	}
	
    printf("%d", brRedova);
    return 0;
    
    fclose(f);
}
