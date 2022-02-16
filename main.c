#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int heure, minute, seconde;
	printf("Entrer le nombre de seconde : ");
	scanf("%d", &seconde);
	printf("Seconde saisie : %d", seconde);
	
	//Contrôle de la saisie
	while (seconde < 0){
		printf("Saisie invalide ! Reessayez : ");
		scanf("%d", &seconde);
	}
	heure = seconde / 3600;
	seconde = seconde  % 3600;
	minute = seconde / 60;
	seconde = seconde % 60;
	printf("Donne : %d heure(s)  %d minute(s)  %d seconde(s)", heure, minute, seconde) ;
	system("pause");
	return 0;
}
