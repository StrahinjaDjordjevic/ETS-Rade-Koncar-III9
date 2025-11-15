#include<stdio.h>
main()
{
	//zbir uglova
    int s1,m1,sec1;
    int s2,m2,sec2;
    // njihov zbir i razlika
    printf("\nunesite parametre prvog ugla (stepen, min i sekund)\n");
    scanf("%d%d%d",&s1,&m1,&sec1);
    printf("\nunesite parametre drugog ugla(stepen min i sekund)\n");
    scanf("%d%d%d",&s2,&m2,&sec2);
    int z=sec1+sec2+60*(m1+m2);
    int s=s1+s2+z/3600;
    z=z%3600;
    int m=z/60;
    int sec=z%60;
    printf("\n zbir uglova je : %ds ,%dm , %dsec",s,m,sec);
}
