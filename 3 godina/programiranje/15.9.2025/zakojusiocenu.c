#include <stdio.h>
#include <time.h>
int n=10;

void Unos(int mat[n][n]){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
//			mat[i][j]=rand()%100;
			mat[i][j]=i*n+j;
		}
	}
}

void Ispis(int mat[n][n]){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",mat[i][j]);
		}
		printf("\n\n");
	}
}
//
//void PescaniSat(int mat[n][n]){
//	int i,j;
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			if((i>j || i+j>) && (i<j || i+j<9)){
//				printf("%d\t",mat[i][j]);
//			}else{
//				printf("*\t");
//			}
//			
//		}
//		printf("\n\n");
//	}
//	
//}
//
//void Transponent(int mat[n][n]){
//	int i,j,pomocna[n][n];
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			pomocna[i][j]=mat[i][j];
//		}
//	}
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			mat[j][i]=pomocna[i][j];
//		}
//	}
//}

void Mnozenje(int mat[n][n], int mat2[n][n]){
	int i,j, nova[n][n],k;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			nova[i][j]=0;
			for(k=0;k<n;k++){
				nova[i][j]+=mat[i][k]*mat2[k][j];
			}	
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",nova[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int mat[n][n], mat2[n][n];
	
	Unos(mat);
	Unos(mat2);
	printf("\n\n\n");
//	PescaniSat(mat);
//	Transponent(mat);
	Mnozenje(mat,mat2);
}
