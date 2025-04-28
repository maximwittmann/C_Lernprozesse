#include <stdio.h>
#include <stdlib.h>		//für rand(),srand()
#include <time.h>		//für Systemzeit
#define UG 1			//UG = Untere Grenze (kleinste Zahl)
#define OG 20			//OG = Obere Grenze (größte Zahl)
#define VERSUCHE 5

int main(){
   int i=1,eingabe, zuraten;
   srand(time(NULL));
   zuraten=rand()%(OG-UG+1)+UG;
   printf("-%i-\n",zuraten);
   
   for(i=1;eingabe!=zuraten && i<=VERSUCHE;i++){
   	  printf("\nIhr %i. Tipp: ", i);
   	  scanf("%i", &eingabe);
   	  
   	  if(eingabe<zuraten){
   	  	printf("Die gesuchte Zahl ist gr\224\341er. ");
		 }
   	  else if(eingabe>zuraten){
   	  	printf("Die gesuchte Zahl ist kleiner. ");
		 }	   
   }
      
   if(eingabe==zuraten)
   	  printf("\nTreffer! Ihr Tipp war goldrichtig!");	
   else
   	  printf("\nLeider verloren, gesucht war die %i", zuraten);	
   	  
//    if(i>VERSUCHE)
//   	  printf("\nLeider verloren...");	
//   else
//   	 printf("\nTreffer! Ihr Tipp war goldrichtig!");	
   
   return 0;	
}