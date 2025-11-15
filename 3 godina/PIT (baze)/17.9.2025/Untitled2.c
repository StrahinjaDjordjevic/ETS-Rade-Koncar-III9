#include <stdio.h>

int main(){
	char znak;
	int x=25;
	printf("unesi znak: ");
	scanf("%c",&znak);
	
	printf("\nZnak: %c\n",znak);
	printf("Dekadni: %d\n",znak);
	printf("Oktalni: %o\n",znak);
	printf("Heksadekadni: %x\n",znak);
	
	printf("Malo slovo unetog znaka: %c",znak+32);
	printf("\n\n\n");
	printf("%d\n",x);
	x=025;
	printf("%d\n",x);
	x=0x25;
	printf("%d\n",x);
	
}
