#include <stdio.h>
#include <stdlib.h>		//für rand(),srand()
#include <time.h>		//für Systemzeit
#define UG 4			//UG = Untere Grenze (kleinste Zahl)
#define OG 17			//OG = Obere Grenze (größte Zahl)
#define ANZAHL 50

int main(){
  int i, zahl;
  srand(time(NULL));				//Start random
  for(i=1;i<=ANZAHL;i++){
  	zahl=rand()%(OG-UG+1)+UG;
  	printf("%i ", zahl);
  } 
  return 0;
}
