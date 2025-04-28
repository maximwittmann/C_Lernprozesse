#include <stdio.h>
#include <stdlib.h>		//für rand(),srand()
#include <time.h>		//für Systemzeit
#define UG 1			//UG = Untere Grenze (kleinste Zahl)
#define OG 3			//OG = Obere Grenze (größte Zahl)

int main(){
   int i,j=0,n=0,e=0, zwischen;
   srand(time(NULL));
   
   for(i=1;i<=8;i++){
//   	  printf("Bitte w\204hlen sie mit j,n,e: ");
//   	  fflush(stdin);
//   	  scanf("%c", &x);
   	  
   	  zwischen=rand()%(OG-UG+1)+UG;
      printf("%i ",zwischen);
   	  if(zwischen==3){			
   	  	  j++;  
		 }
   	  else if(zwischen==2){	
   	  	  n++;  
		 }
   	  else {			
   	  	  e++;  
		 } 
	} 
	
	printf("\nStimmenverteilung JA: %i", j);
	printf("\nStimmenverteilung Nein: %i", n);
	printf("\nStimmenverteilung Enthalten: %i", e);
   
   return 0;	
}