#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	/*
	for(i=0;i<10;i++){
		for(j=0;j<strlen(nizStr[i]);j++){
			nizStr[i][j]=nizStr[i][j]+3;
		}
	}
	*/
	char *g=(char*)malloc(21*sizeof(char));
	for(i=0;i<9;i++){
		for(j=i+1;j<10;j++){
			if(strcmp(nizStr[i],nizStr[j])==1){
				strcpy(g,nizStr[i]);
				strcpy(nizStr[i],nizStr[j]);
				strcpy(nizStr[j],g);
			}
		}
	}
	
	for(i=0;i<10;i++){
		printf("%s",nizStr[i]);
		printf("\n");
	}
	
	return 0;
}



/*
1. Strahinja (21 max)
2. Dusica(21 max)
3. 
4.
5.
6.
.
.
.
10.
*/
