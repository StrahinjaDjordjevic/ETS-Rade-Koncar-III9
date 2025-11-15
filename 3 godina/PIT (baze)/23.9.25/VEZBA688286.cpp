#include<stdio.h>
int main(){
	int a;
	FILE*f1,*f2,*f3;
	f1=fopen("C:\\Users\\Ucenici\\Desktop\\Visina.txt","r");
	f2=fopen("C:\\Users\\Ucenici\\Desktop\\180+.txt","w");
	f3=fopen("C:\\Users\\Ucenici\\Desktop\\180-.txt","w");
	printf("unesi broj");
	scanf("%d",&a);
	while(a!=0){
		fprintf(f1,"%d",a);
		scanf("%d",&a);
	}
	fclose(f1);
}
