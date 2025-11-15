#include <stdio.h>

int main(){
	int ocena;
	printf("unesi ocenu: ");
	scanf("%d",&ocena);
	
	switch(ocena){
		case 1:
			printf("Nedovoljan(1)");
			break;
		case 2:
			printf("Dovoljan(2)");
			break;
		case 3:
			printf("Dobar(3)");
			break;
		case 4:
			printf("Vrlo dobar(4)");
			break;
  		case 5:
  			printf("Odlican(5)");
  			break;
  		default:
  			printf("Nisi uneo dobru ocenu");
  			return 1;
	}
	return 0;		
}
