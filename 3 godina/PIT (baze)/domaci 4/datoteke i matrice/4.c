//U prvom redu datoteke se nalazi broj vrsta i broj kolona matrice, a u svakom seldecem po jedna vrsta matrice celih brojeva. Napisati program kojim se izracunava
// prosecna vrednost druge vrste
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
	
	int s2=0;
	float prosekDruge;
	for(i=0;i<brK;i++){
		s2+=mat[1][i];
	}
	prosekDruge=(float)s2/brK;
	printf("%.2f",prosekDruge);
	
	fclose(f);
}
