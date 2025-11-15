#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sortiranje(char **nizStr){
	int i,j;
	char *deg;
	
	for(i=0;i<9;i++){
		for(j=i+1;j<10;j++){
			if(strlen(nizStr[i])>strlen(nizStr[j])){
				deg=nizStr[i];
				nizStr[i]=nizStr[j];
				nizStr[j]=deg;
			}
		}
	}
	
	for(j=0;j<10;j++){
		printf("%s",nizStr[j]);
		printf("\n");
	}
}


int main(){
	int i,j;
	char **nizStr=(char**)malloc(10*sizeof(char*));
	
	for(i=0;i<10;i++){
		nizStr[i]=(char*)malloc(21*sizeof(char));
	}
	
	for(i=0;i<10;i++){
		scanf("%s",nizStr[i]);
	}
	printf("\n");
	printf("\n");
	sortiranje(nizStr);
}
