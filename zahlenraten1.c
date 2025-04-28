#include <stdio.h>
#include <stdlib.h>		//für rand(),srand()
#include <time.h>		//für Systemzeit
#define UG 1			//UG = Untere Grenze (kleinste Zahl)
#define OG 20			//OG = Obere Grenze (größte Zahl)

int main(){
   int i,eingabe, zuraten;
   srand(time(NULL));
   zuraten=rand()%(OG-UG+1)+UG;
   printf("-%i-\n",zuraten);
   
   do{
   	  printf("Ihr Tipp: ");
   	  scanf("%i", &eingabe);
   	  
   	  if(eingabe<zuraten){
   	  	printf("Die gesuchte Zahl ist gr\224\341er. ");
		 }
   	  else if(eingabe>zuraten){
   	  	printf("Die gesuchte Zahl ist kleiner. ");
		 }
   }while(eingabe!=zuraten);
   
   printf("\nTreffer! Ihr Tipp war goldrichtig!");	
	  
   return 0;	
}