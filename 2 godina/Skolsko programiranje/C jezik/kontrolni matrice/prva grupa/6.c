#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int abc[26] = {0};
	int i,br=0, index=0;
	for(i=0;i<26;i++){
		printf("%d ",abc[i]);
	}
	printf("\n");
	//pravi string i oslobadja visak memorije
	char *rec=(char*)malloc(21*sizeof(char));
	scanf("%s",rec);
	rec=(char*)realloc(rec,strlen(rec)*sizeof(char));
	
	printf("\n");
	printf("%s",rec);
	
	// menja vrednosti abecede sa odgovarajucom pozicijom i brojem ponavljanja slova
	for(i=0;i<strlen(rec);i++){
		br=rec[i]-'a';
		abc[br]++;
	}
	
	//ispisuje abecedu sa izmenjenim vrednostima
	printf("\n");
	for(i=0;i<26;i++){
		printf("%d ",abc[i]);
	}
	printf("\n\n");
	
	//pronalazi maksimum
	int max=0;
	for(i=0;i<26;i++){
		if(abc[i]>max){
			max=abc[i];
			index=i;
		}
	}
	
	printf("Index na kome se najcesce slovo nalazi: %d\n",index);
	
	//slovo koje se najcesce ponavlja
	char slovo = index+'a';
	printf("Slovo koje se najvise ponavlja: %c\n",slovo);
	
	//njegova ucestanost
	float ucestanost = max/(float)strlen(rec);
	printf("Njegova ucestanost je: %.1f",ucestanost);
	
	return 0;
}
