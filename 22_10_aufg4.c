#include <stdio.h>
int note(int); 

int main (){
	int przZahl=0, erg; 
	printf("Geben Sie ihr Ergebnis in Prozent ein: "); 
	scanf("%i",&przZahl); 
	erg= note(przZahl); 
	printf("\nIhre Note ist: %i", erg); 
return 0;
}
int note(int pzahl){
	int note=0; 
	if(pzahl>92){
	note =1; 	
	}
	else if(pzahl<=91&&pzahl>=81){
		note = 2; 
	}
	else if(pzahl<=80&&pzahl>=67){
		note = 3; 
	}
	else if(pzahl<=66&&pzahl>=50){
		note = 4; 
	}
	else if(pzahl<=49&&pzahl>=30){
	note = 5; 
	}
	else if(pzahl<30){
	note = 6; 
	}
	return note; 
}