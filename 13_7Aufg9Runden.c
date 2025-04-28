#include <stdio.h>
#include <math.h>
double runden(double,int); 

int main (){
double a=5.687125489, zahl;
int komma=2; 
printf("Zahl eingeben: ");
scanf("%lf", &a);
printf("\nAnzahl Nachkommastellen: ");
scanf("%i", &komma);
zahl=runden(a,komma); 
printf("%.*lf",komma,zahl); 

return 0;
}

double runden(double zahl, int stellen){
	int erg; 
	erg=pow(10,stellen);
	zahl=zahl*erg;  
	zahl =round(zahl);
	zahl=zahl/erg; 
	return zahl;  
}