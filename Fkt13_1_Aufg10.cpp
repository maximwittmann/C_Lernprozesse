#include <stdio.h>
#include <math.h>
float zinsz(float, int , float );

int main (){
int t_steh; 
float aKap, zinsS, kWert; 
printf("Ihr Anfangskapital: "); 
scanf("%f", &aKap); 
printf("\nIhr Zinssatz: "); 
scanf("%f", &zinsS); 
printf("\ngeplante Stehzeit: "); 
scanf("%i", &t_steh); 
kWert= zinsz(aKap, t_steh, zinsS); 
printf("\nihr Kapitalwert nach geplanter Stehzeit: %.2f EUR", kWert); 

return 0;
}
float zinsz(float anfKap, int steh_t, float zSatz){
	return anfKap*pow(1+(zSatz/100),steh_t); 
}