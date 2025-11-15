#include <stdio.h>

int main(){
	FILE *f, *fProsek, *fpm;
	int redIkolona[2],brR,brK,i,j;
	int brParnih=0;
	
	f=fopen("C:\\Users\\Ucenici\\Documents\\Caka\\PIT baze\\7.10.25\\2 zadatak\\2zad.txt","r");
	fProsek=fopen("C:\\Users\\Ucenici\\Documents\\Caka\\PIT baze\\7.10.25\\2 zadatak\\2zadProsek.txt","w");
	fpm=fopen("C:\\Users\\Ucenici\\Documents\\Caka\\PIT baze\\7.10.25\\2 zadatak\\2zadPM.txt","w");
	
	for(i=0;i<2;i++){
		fscanf(f,"%d",&redIkolona[i]);
	}
	brR=redIkolona[0];
	brK=redIkolona[1];
	int mat[brR][brK];
	// A primer
	for(i=0;i<brR;i++){
		for(j=0;j<brK;j++){
			fscanf(f,"%d",&mat[i][j]);
			if(mat[i][j]%2==0){
				brParnih++;
			}
		}
	}
	// B primer
	int max=mat[1][0];
	for(i=0;i<brK;i++){
		if(mat[1][i]>max){
			max=mat[1][i];
		}
	}
	// V primer
	int s=0;
	for(i=0;i<brR;i++){
		s+=mat[i][2];
	}
	// G primer
	float prosek[brR];
	int sP,brP;
	for(i=0;i<brR;i++){
		sP=0;
		
		for(j=0;j<brK;j++){
			sP+=mat[i][j];
		}
		prosek[i]=(float)sP/brK;
		fprintf(fProsek,"%.2f\n",prosek[i]);
	}
	//D primer
	int maxPM[brK];
	for(i=0;i<brK;i++){
		maxPM[i]=0;
		for(j=0;j<brR;j++){
			if(maxPM[i]<mat[j][i]){
				maxPM[i]=mat[j][i];
			}
		}
	}
	
	for(i=0;i<brR;i++){
		for(j=0;j<brK;j++){
			fprintf(fpm,"%5d",mat[i][j]);
		}
		fprintf(fpm,"\t\t%.2f\n",prosek[i]);
	}
	fprintf(fpm,"\n");
	for(i=0;i<brK;i++){
		fprintf(fpm,"%5d",maxPM[i]);
	}
	
	printf("Broj parnih je: %d\n",brParnih);
	printf("Maksimum druge vrste je: %d\n",max);
	printf("Suma trece kolone je: %d\n",s);
	
	//zameni prvu vrstu i poslednju NE RADI
	int pomocniNiz[brR][brK];
	for(i=0;i<brR;i++){
		for(j=0;j<brK;j++){
			pomocniNiz[brR][brK]=mat[0][j];
			mat[0][j]=mat[brR][j];
			mat[brR][j]=pomocniNiz[brR][brK];
		}
	}
	
	for(i=0;i<brR;i++){
		for(j=0;j<brK;j++){
			printf("%d",mat[i][j]);
		}
		printf("\n");
	}
	
	
	fclose(fpm);
	fclose(fProsek);
	fclose(f);
}
