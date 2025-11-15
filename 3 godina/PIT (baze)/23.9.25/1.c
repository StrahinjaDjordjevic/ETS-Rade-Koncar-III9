#include <stdio.h>

int main(){
	int ocena,br5=0;
	
	do{
		printf("Unesi ocenu(unesi 0 da izadjes iz petlje): ");
		scanf("%d",&ocena);
		if(ocena==5){
			br5++;
		}
	}while(ocena!=0);

	printf("Uneo si %d petica",br5);
	
	return 0;
}
