//unose se brojevi dok se ne unese 0
#include <stdio.h>

int main(){
	FILE *f;
	int broj;
	f=fopen("C:\\Users\\Ucenici\\Desktop\\brojevi.txt","w");
	do{
		printf("Upisi broj: ");
		scanf("%d",&broj);
		fprintf(f,"%d\n",broj);
	}while(broj!=0);
	
	fclose(f);
}
