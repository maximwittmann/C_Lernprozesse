#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define SUCH 13

int main(){
	
	int liste[10]={2, -12, 33, 4, 13, -4, 82, 17, 56, 19}, gef=-1, i=0;

   for(i=0;i<10;i++){

   if(liste[i]==SUCH){
	
		gef=0;
	
		printf("\n%i befindet sich auf Position: %i", liste[i],i+1);
}
	}
	
	if (gef==-1)
	printf("%i", gef);
	
	return 0;
	
}