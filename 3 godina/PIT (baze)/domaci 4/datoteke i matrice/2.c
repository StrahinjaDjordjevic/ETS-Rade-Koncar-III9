//U prvom redu datoteke se nalazi broj vrsta i broj kolona matrice a u svakom sledecem po jenda vrsta matrice celih brojeva. Napisati program kojim se izracunava koliko
//je dvocifrenih elemenata matrice
#include <stdio.h>
#include <stdlib.h>

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
	
	int brojDvocifrenih=0;
	for(i=0;i<brR;i++){
		for(j=0;j<brK;j++){
			if(abs(mat[i][j])>9 && abs(mat[i][j])<100){
				brojDvocifrenih++;
			}
		}
	}
	printf("%d",brojDvocifrenih);
	
	fclose(f);
}
