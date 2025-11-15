#include <stdio.h>

int main(){
	int n,s=0,br=0,broj, i;
	float ar;
	printf("Unesi n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Unesi broj: ");
		scanf("%d",&broj);
		if(broj%2==0){
			s+=broj;
			br++;
		}
	}
	
	if(br!=0){
		ar=(float)s/br;
		printf("Prosek parnih je: %.2f",ar);
		return 0;
	}else{
		printf("Ne moze se izraziti prosek");
		return 1;
	}
	
	
	
}
