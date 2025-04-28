#include <stdio.h>
#include <math.h>
float pytagoras(float, float); 

int main (){
float seite1, seite2, erg; 
printf("Geben Sie die erste Seite ein: ");
scanf("%f",&seite1); 
printf("\nGeben Sie die zweite Seite ein: ");
scanf("%f",&seite2); 
erg=pytagoras(seite1,seite2); 
printf("\nErgebnis: %.2f", erg); 

return 0;
}
float pytagoras(float a, float b){
	float c; 
	c = sqrt(pow(a,2)+pow(b,2)); 
	return c; 
}