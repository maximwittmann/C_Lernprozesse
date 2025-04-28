#include <stdio.h>
#include <math.h>
int rechteck(int,int);
int dreieck(int, int);
float kreis(float);

int main (){
int a= 7, b=5, c=0,w=0; 
float ra,erg; 
do{
printf("Geben Sie ein: Fl\204che Rechteck: [1], Fl\204che Dreieck: [2] Fl\204che Kreis [3]: "); 
scanf("%i",&w); 
printf("\n");
}while(w!=1 && w!=2&& w!=3);
if(w==1){
printf("\nGeben Sie die erste Seite des Rechteckes ein: ");
scanf("%i",&a); 
printf("\nGeben Sie die zweite Seite des Rechteckes ein: ");
scanf("%i",&b);
c=rechteck(a,b); 
printf("\nFl\204che: %i", c); 
}
else if(w==2){
	printf("\nGeben Sie die Grundfl\204che des Dreiecks ein: ");
	scanf("%i",&a); 
	printf("\nGeben Sie die H\224he des Dreiecks ein: ");
	scanf("%i",&b);
	c = dreieck(a,b);
	printf("\nFl\204che: %i", c); 
}
else if(w==3){
	printf("\nGeben Sie den Radius des Kreises ein: ");
	scanf("%f",&ra); 
	erg = kreis(ra);
	printf("\nFl\204che: %.2f", erg); 
}

return 0;
}

int rechteck(int zahl1, int zahl2){
	int erg; 
	erg = (zahl1*zahl2); 
	return erg;
}

int dreieck(int g, int h){
	int erg; 
	erg = (g*h)/2; 
	return erg; 
}

float kreis(float r){
	float erg; 
	erg= pow(r,2)*M_PI; 
	return erg; 
}