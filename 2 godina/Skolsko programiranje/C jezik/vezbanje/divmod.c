#include <stdio.h>

main(){
	int h1,m1,s1;
	int h2,m2,s2;
	int zbirSekundi;
	//ukupan broj sati, minuta i sekundi
	int h,m,s;
	printf("Unesi prvi sat, minut i sekund\n");
	scanf("%d%d%d",&h1,&m1,&s1);
	printf("Unesi drugi sat, minut i sekund\n");
	scanf("%d%d%d",&h2,&m2,&s2);
	
	zbirSekundi=(h1*3600+m1*60+s1)+(h2*3600+m2*60+s2);
	h=zbirSekundi/3600;
	m=zbirSekundi%3600/60;
	s=zbirSekundi%60;
	printf("%d\t%d\t%d",h,m,s);
}
