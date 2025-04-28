#include <stdio.h>
float verbrauch(int, int, float);

int main (){
int leTank, neuTank, geLi, erg; 	
printf("Km beim letzten Tanken: "); 
scanf("%i",&leTank); 
printf("\nneue Km Stand: "); 
scanf("%i",&neuTank); 
printf("\ngetankt in Liter: "); 
scanf("%i",&geLi); 
erg=verbrauch(leTank, neuTank, geLi); 
printf("\nVerbrauch: %i ",erg);

return 0;
}
float verbrauch(int anf, int ende, float li){
	return li*100/(ende - anf); 
}