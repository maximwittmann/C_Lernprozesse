#include <stdio.h>
int quader(int, int, int); 

int main (){
	int zahl1,zahl2,zahl3,ergebnis; 
printf("Geben Sie die erste Seite des Quaders ein: ");
scanf("%i",&zahl1); 
printf("\nGeben Sie die zweite Seite des Quaders ein: ");
scanf("%i",&zahl2); 
printf("Geben Sie die dritte Seite des Quaders ein: ");
scanf("%i",&zahl3); 
ergebnis=quader(zahl1,zahl2,zahl3); 
printf("Volumen des Quaders ist: %i m^3",ergebnis); 
return 0;
}
int quader(int a, int b, int c){
	//int erg; 
	//	erg=a*b*c; 
	return (a*b*c); 
}