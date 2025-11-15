#include <stdio.h>

int main(){
	FILE *f, *fj, *fd;
	int x;
	f=fopen("C:\\Users\\Ucenici\\Documents\\Caka\\PIT baze\\7.10.25\\1 zadatak\\pocetna.txt","r");
	fj=fopen("C:\\Users\\Ucenici\\Documents\\Caka\\PIT baze\\7.10.25\\1 zadatak\\jednocifreni.txt","w");
	fd=fopen("C:\\Users\\Ucenici\\Documents\\Caka\\PIT baze\\7.10.25\\1 zadatak\\dvocifreni.txt","w");

	while(!feof(f)){
		fscanf(f,"%d",&x);
		if(x<10){
			fprintf(fj,"%d\n",x);
		}else if(x>9 && x<100){
			fprintf(fd,"%d\n",x);
		}
	}
	
	fclose(fj);
	fclose(fd);
	fclose(f);
}
