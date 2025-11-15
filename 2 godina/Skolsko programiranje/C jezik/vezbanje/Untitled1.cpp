#include <stdio.h>

main(){
	char mat[3][3];
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat[i][j]='/';
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%c\t",mat[i][j]);
		}
		printf("\n");
	}
}
