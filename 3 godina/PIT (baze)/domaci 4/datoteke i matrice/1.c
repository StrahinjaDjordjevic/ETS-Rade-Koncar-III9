//U prvom redu datoteke se nalazi broj vrsta i broj kolona matrice, a u svakom sledecem po jedna vrsta matrice celih brojeva. Napisati proram kojim se izracunava
// prosecna vrednost elemenata neparnih elemenata matrice i prosecna vrednost parnih elemenata matrice
#include <stdio.h>

int main(){
	FILE *f=fopen("C:\\Users\\strahinja\\Desktop\\ETS-Rade-Koncar-III9\\3 godina\\PIT (baze)\\domaci 4\\datoteke i matrice\\1-5.txt","r");
	int brR, brK;
	fscanf(f,"%d",&brR);
	fscanf(f,"%d",&brK);
	int mat[brR][brK];
	int i,j,x;
	for(i=0;i<brR;i++){
		for(j=0;j<brK;j++){
			fscanf(f,"%d",&x);
			mat[i][j]=x;
		}
	}
	
	int br=0,brN=0,brP=0,sN=0,sP=0;
	for(i=0;i<brR;i++){
		for(j=0;j<brK;j++){
			if(br%2==0){
				brP++;
				sP+=mat[i][j];
			}
			if(br%2==1){
				brN++;
				sN+=mat[i][j];
			}
			br++;
		}
	}
	float pN=(float)sN/brN,pP=(float)sP/brP;
	printf("Prosek neparnih je: %.2f, a parnih %.2f",pN,pP);
	
	fclose(f);
}
