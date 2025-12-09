//1) ar sredina neparnih 2) suma niza 3) max niza 4)sortiranje niza 5)formiranje novih?
#include <stdio.h>

int main(){
	FILE *f=fopen("C:\\Users\\strahinja\\Desktop\\ETS-Rade-Koncar-III9\\3 godina\\PIT (baze)\\kontrolni tabla\\2.txt","r");
	int n;
	fscanf(f,"%d",&n);
	int niz[n],i,x,j;
	
	for(i=0;i<n;i++){
		fscanf(f,"%d",&x);
		niz[i]=x;
	}
	
	int brN=0,sN=0,s=0;
	float arN;
	int max=niz[0];
	
	for(i=0;i<n;i++){
		if(niz[i]%2==1){
			brN++;
			sN+=niz[i];
		}
		s+=niz[i];
		if(niz[i]>max){
			max=niz[i];
		}
	}
	if(brN!=0){
		arN=(float)sN/brN;
	}else{
		printf("Nema neparnih brojeva");
	}
	printf("Aritmeticka sredina neparnih: %.2f | Suma niza: %d | Max niza: %d\n\n",arN,s,max);
	
	int p;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(niz[i]>niz[j]){
				p=niz[i];
				niz[i]=niz[j];
				niz[j]=p;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",niz[i]);
	}
	printf("\n\n");
	
	int nizN[brN];
	j=0;
	for(i=0;i<n;i++){
		if(niz[i]%2==1){
			nizN[j++]=niz[i];
		}
	}
	for(i=0;i<brN;i++){
		printf("%d ",nizN[i]);
	}
	
	fclose(f);
}
