#include <stdio.h>
#include <stdlib.h>
//Aufgabe 13 Rabattberechnung

int main (){
char WVK=' ', STK= ' '; 
float umsatz = 0, rabatt=0,rBetrag=0; 

printf("Wiederverk\204ufer? j/n "); 
fflush(stdin); 
scanf("%c", &WVK); 
printf("\nStammkunde? j/n "); 
fflush(stdin); 
scanf("%c", &STK); 
printf("Umsatz? "); 
scanf("%f",&umsatz); 

	if(WVK=='j'){
		rabatt=20; 
	}
	if(STK == 'j'){
		rabatt = rabatt+8; 
	}
	if(umsatz>30000){
		rabatt=rabatt+10; 
	}
	else if(umsatz > 10000){
		rabatt = rabatt +5; 
	}
	
	rBetrag= (umsatz * rabatt)/100; 
	printf("Sie erhalten %.0f %% Rabatt ", rabatt); 
	printf("\nRabattbetrag insgesamt: %.2f EUR", rBetrag); 
return 0;
}
