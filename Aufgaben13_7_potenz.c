#include <stdio.h>
float hoch(float, float); 

int main (){
float b=10,e=4,erg; 
printf("Geben Sie die Basis ein: ");
scanf("%f",&b);
printf("\nGeben Sie die Potenz ein: ");
scanf("%f",&e);
erg=hoch(b,e); 
printf("Ergebnis: %.2f",erg); 
return 0;
}
float hoch(float basis, float exponent){
	float erg=1;
	int i;  
	for(i=1;i<=exponent;i++){
		erg=erg*basis; 
	}
	return erg;
}