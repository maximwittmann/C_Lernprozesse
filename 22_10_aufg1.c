#include <stdio.h>
float praemie(int, float);

int main (){
	float flaeche, Vpraemie; 
	int persAnz;
printf("Geben Sie Anzahl der Personen ein: ");
scanf("%i", &persAnz); 
printf("Geben Sie die Wohnflaeche ein: ");
scanf("%f", &flaeche); 
Vpraemie= praemie(persAnz, flaeche)	;
printf("Die Praemie beträgt: %.2f EUR",Vpraemie); 

return 0;
}

float praemie(int pers, float flqm){
	float praemie; 
	if(pers<=2){	
	praemie= 10 + flqm / 2; 
	}
	else if(pers==3){
	praemie= 15 + flqm; }
	else if(pers==4){
	praemie= 15 + 1.5 * flqm; }	
	else if(pers>4){
	praemie= 25 + 2 * flqm; }
	return praemie; 
}