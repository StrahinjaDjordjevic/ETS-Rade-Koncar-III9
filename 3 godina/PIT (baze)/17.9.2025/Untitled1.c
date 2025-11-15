#include <stdio.h>

int Suma(int broj){
	int cs,cd,cj,suma=0;
	
	cs=broj/100;
	cd=broj%100/10;
	cj=broj%10;
	
	return suma=cs+cd+cj;
}

int main(){
	int broj,cs,cd,cj;
	int suma=0;
	printf("Unesi trocifreni broj: ");
	scanf("%d",&broj);
	
	if(broj<1000 && broj>99){
		printf("%d",Suma(broj));
	}else{
		printf("nisi uneo dobar broj");
		return 1;
	}
	
	return 0;
}
