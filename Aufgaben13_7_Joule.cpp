#include <stdio.h>
float joule(float); 

int main (){
	float k, j; 
printf("Geben Sie den Wert in Kcal ein: "); 
scanf("%f",&k); 
j = joule(k); 
printf("\nErgebnis %.2f Kcal sind %.2f Joule",k,j); 

return 0;
}
float joule(float k){
	float erg; 
	erg= k*4.31; 
	return erg; 
}