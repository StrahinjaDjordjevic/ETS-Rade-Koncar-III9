#include <stdio.h>

int main(){
	FILE *f,*fp,*fn;
	int br;
	f=fopen("C:\\Users\\Ucenici\\Documents\\Caka\\PIT baze\\23.9.25\\4zad.txt", "r");
	fp=fopen("C:\\Users\\Ucenici\\Documents\\Caka\\PIT baze\\23.9.25\\5zadParni.txt", "w");
	fn=fopen("C:\\Users\\Ucenici\\Documents\\Caka\\PIT baze\\23.9.25\\5zadNeparni.txt", "w");
	
	while(!feof(f)){
		fscanf(f,"%d",&br);
		printf("%d",br);
		if(br%2==0){
			fprintf(fp,"%d ",br);
		}else{
			fprintf(fn,"%d ",br);
		}
	}
	
	fclose(f);
	fclose(fp);
	fclose(fn);
}
