#include <stdio.h>
float barrel(float);

int main (){
float li, bar;
printf("Wert in Liter: "); 
scanf("%f",&li); 
bar=barrel(li); 
printf("\n%.2f Liter entspricht: %.2f Barrel",li,bar); 

return 0;
}

float barrel(float liter){
	float barrel; 
	barrel = liter*159; 
	return barrel; 
}