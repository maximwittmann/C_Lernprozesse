#include <stdio.h>

int main (){
int mini=0, maxi=0, z=0, zahl; 
printf("Zahl bitte:"); 
scanf("%i", &zahl); 
mini=maxi=zahl; 
while(z<10){
	printf("\nZahl bitte:"); 
	scanf("%i",&zahl); 
	if(zahl>maxi){
		maxi=zahl; 
	}
	else if(zahl<mini){
		mini=zahl; 
	}
	z++; 
}

printf("\nMinimum ist: %i",mini); 
printf("\nMaximum ist: %i",maxi); 

return 0;
}
