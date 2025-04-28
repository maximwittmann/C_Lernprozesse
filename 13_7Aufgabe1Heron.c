#include <stdio.h>
#include <math.h>
float heron(float, float, float); 

int main (){
	float seite1, seite2,seite3,fl; 
printf("Geben Sie die erste Seite ein: ");
scanf("%f",&seite1);
printf("\nGeben Sie die zweite Seite ein: ");
scanf("%f",&seite2);
printf("\nGeben Sie die dritte Seite ein: ");
scanf("%f",&seite3);
fl=heron(seite1,seite2,seite3); 
printf("\nDie Fl\204che betr\204gt: %.2f", fl); 

return 0;
}

float heron(float a, float b, float c){
float s,f;
s=(a+b+c)/2; 
f = sqrt((s-a)*(s-b)*(s-c)*s); 
return f; 	
}