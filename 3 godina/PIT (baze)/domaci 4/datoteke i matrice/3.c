//u prvom redu datoteke se nalazi broj vrsta i broj kolona matrice a u svakom seledecem po jedna vrsta matrice celih brojeva. Napisati program kojim se nalazi pozicija maksimuma
//matrice (vrsta i kolona u kojoj se nalazi maksimum matrice)
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
	
	int max=mat[0][0],pozI,pozJ;
	for(i=0;i<brR;i++){
		for(j=0;j<brK;j++){
			if(mat[i][j]>max){
				max=mat[i][j];
				pozI=i;
				pozJ=j;
			}
		}
	}
	printf("Pozicija najveceg broja je %d. red i %d. kolona",pozI+1,pozJ+1);
	fclose(f);
}
