#include <stdio.h>
#include <stdlib.h>


void ispis(int **mat){
	int i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d",mat[i][j]);
		}
		printf("\n");
	}
}

int zbir(int **mat){
	int i,j;
	int zbir=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i+j>4){
				zbir+=mat[i][j];
			}
		}
	}
	return zbir;
}

int main(){
	int i,j;
	
	int **mat=(int**)malloc(5*sizeof(int*));
	
	for(i=0;i<5;i++){
		mat[i]=(int*)malloc(5*sizeof(int));
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			mat[i][j]=(i+j)%5;
		}
	}
	
	ispis(mat);
	printf("%d",zbir(mat));
}
