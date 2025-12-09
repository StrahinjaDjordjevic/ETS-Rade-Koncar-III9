// 1) broj parnih 2)max 3)suma svih 4)prosek
#include <stdio.h>

int main(){
	FILE *f=fopen("C:\\Users\\strahinja\\Desktop\\ETS-Rade-Koncar-III9\\3 godina\\PIT (baze)\\kontrolni tabla\\1.txt","r");
	int x,brP=0,max,s=0,br=0;
	float ar;
	
	fscanf(f,"%d",&x);
	max=x;
	if(x%2==0){
		brP++;
	}
	s+=x;
	br++;
	
	while(!feof(f)){
		fscanf(f,"%d",&x);
		if(x>max){
			max=x;
		}
		if(x%2==0){
			brP++;
		}
		s+=x;
		br++;
	}
	ar=(float)s/br;
	
	printf("Broj parnih je: %d | Max je: %d | Suma svih je: %d | Prosek je: %.2f",brP,max,s,ar);
	
	fclose(f);
}
