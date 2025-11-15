#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f;
	int s=0,br=0,x, brProseka=0;
	float ar;
	f=fopen("C:\\Users\\Ucenici\\Documents\\Caka\\PIT baze\\1.10.25\\1.txt","r");
	
	while(!feof(f)){
		fscanf(f,"%d",&x);
		br++;
		s+=x;
	}

	if(br!=0){
		ar=(float)s/br;
	}else{
		printf("Ne moze se izvrsiti ar sredina");
		return 1;
	}
	fclose(f);
	f=fopen("C:\\Users\\Ucenici\\Documents\\Caka\\PIT baze\\1.10.25\\1.txt","r");
	while(!feof(f)){
		fscanf(f,"%d",&x);
		if(x>ar){
			brProseka++;
		}
	}
	printf("%d",brProseka);
	fclose(f);
}
