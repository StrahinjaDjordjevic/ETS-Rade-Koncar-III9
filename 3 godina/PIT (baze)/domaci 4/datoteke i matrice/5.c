//u prvom redu datoteke se nalazi broj vrsta i broj kolona matrice a u svakom sledecem po jedna vrsta matrice celih brojeva. Napisati program kojim se izracunava aritmeticka
//sredina trece kolone
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
	
	int suma3=0;
	float ar;
	for(i=0;i<brR;i++){
		suma3+=mat[i][2];
	}
	printf("Ar 3 kolone je: %.2f",(float)suma3/brR);
	
	fclose(f);
}
