// 1) suma matrice 2) max 1 kolone 3) broj 5 u 2. vrsti 4) transformacija matrice
#include <stdio.h>

int main(){
	FILE *f=fopen("C:\\Users\\strahinja\\Desktop\\ETS-Rade-Koncar-III9\\3 godina\\PIT (baze)\\kontrolni tabla\\3.txt","r");
	int brR,brK;
	fscanf(f,"%d",&brR);
	fscanf(f,"%d",&brK);
	int mat[brR][brK];
	int i,j;
	
	for(i=0;i<brR;i++){
		for(j=0;j<brK;j++){
			fscanf(f,"%d",&mat[i][j]);
		}
	}
	
	int s=0;
	for(i=0;i<brR;i++){
		for(j=0;j<brK;j++){
			s+=mat[i][j];
		}
	}
	
	int max1k=mat[0][0];
	for(i=0;i<brR;i++){
		if(mat[i][0]>max1k){
			max1k=mat[i][0];
		}
	}
	
	int br5=0;
	for(i=0;i<brK;i++){
		if(mat[1][i]==5){
			br5++;
		}
	}
	
	printf("Suma matrice je %d | Max 1. kolone je %d | Broj 5 u 2. vrsti %d \n\n",s,max1k,br5);
	
	int transformisanaMat[brK][brR];
	for(i=0;i<brR;i++){
		for(j=0;j<brK;j++){
			transformisanaMat[j][i]=mat[i][j];
		}
	}
	
	for(i=0;i<brK;i++){
		for(j=0;j<brR;j++){
			printf("%d ",transformisanaMat[i][j]);
		}
		printf("\n");
	}
	
	fclose(f);
}
