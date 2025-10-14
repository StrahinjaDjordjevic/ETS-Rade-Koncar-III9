#include <stdio.h>
//1. U prvom redu je dat broj vrsta i kolona, a zatim u svakom redu po jedna vrsta matrice(vrsta=red)
/*
	a)naci sumu matrice
	b)naci broj neparnih elemenata matrice
	v) maksimum matrice
	g)prosek matrice
	d)poziciju minimalnog elemnta matrice(vrstu i kolonu u kojoj se nalazi element)
	
	e)broj jednocifrenih u drugoj vrsti
	j)suma parnih u prvoj koloni
	h)maksimum trece vrste
	k) prosek druge kolone
	l)minimum prve kolone
*/

int main(){
	FILE *f;
	int i,j;
	int s=0,br=0, brNep;
	float ar;
	f=fopen("C:\\Users\\strahinja\\Desktop\\Skola\\3 godina\\PIT (baze)\\domaci 3\\domaci.txt","r");
	int brR,brK;
	fscanf(f,"%d",&brR);
	fscanf(f,"%d",&brK);
	int mat[brR][brK];
	//a, b
	for(i=0;i<brR;i++){
		for(j=0;j<brK;j++){
			fscanf(f,"%d",&mat[i][j]);
			s+=mat[i][j];
			br++;
			if(mat[i][j]%2==1){
				brNep++;
			}
		}
	}
	
	//v, d
	int maxMat=mat[0][0];
	int minMat=mat[0][0], pozI,pozJ;
	
	for(i=0;i<brR;i++){
		for(j=0;j<brK;j++){
			if(mat[i][j]>maxMat){
				maxMat=mat[i][j];
			}
			if(minMat>mat[i][j]){
				minMat=mat[i][j];
				pozI=i;
				pozJ=j;
			}
		}
	}
	//g
	ar=(float)s/br;
	
	//e
	int brJedn=0;
	for(i=0;i<brK;i++){
		if(mat[1][i]<10){
			brJedn++;
		}
	}
	//j
	int sumParn=0;
	for(i=0;i<brR;i++){
		if(mat[i][0]%2==0){
			sumParn+=mat[i][0];
		}
	}
	//h
	int max3=mat[2][0];
	for(i=0;i<brK;i++){
		if(mat[2][i]>max3){
			max3=mat[2][i];
		}
	}
	//k
	int s2=0,br2=0;
	float ar2;
	for(i=0;i<brR;i++){
		s2+=mat[i][1];
		br2++;
	}
	ar2=(float)s2/br2;
	
	//l
	int min1=mat[0][0];
	for(i=0;i<brR;i++){
		if(mat[i][0]<min1){
			min1=mat[i][0];
		}
	}
	
	printf("Suma matrice je: %d\n",s);
	printf("Broj neparnih elemenata matrice je: %d\n", brNep);
	printf("Maksimum matrice je: %d\n",maxMat);
	printf("Prosek matrice je: %.2f\n", ar);
	printf("Pozicija minimalnog elementa - (%d vrsta, %d kolona)\n\n",pozI, pozJ);
	
	printf("Broj jednocifrenih u drugoj vrsti: %d\n",brJedn);
	printf("Suma parnih u prvoj koloni: %d\n",sumParn);
	printf("Maksimum trece vrste: %d\n",max3);
	printf("Prosek druge kolone: %.2f\n",ar2);
	printf("Minimum prve kolone: %d\n",min1);

	fclose(f);
	
	return 0;
}
