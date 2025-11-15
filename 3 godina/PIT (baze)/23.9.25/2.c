#include <stdio.h>

int main(){
	int n, max;
	int i, br;
	
	printf("Unesi n: ");
	scanf("%d",&n);
	printf("Unesi broj: ");
	scanf("%d",&br);
	max=br;
	for(i=0;i<n-1;i++){
		printf("Unesi broj: ");
		scanf("%d",&br);
		if(br>max){
			max=br;
		}
	}
	
	printf("Max br je: %d",max);
	
	return 0;
}
