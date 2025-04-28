#include <stdio.h>
#include <stdlib.h>		//für rand(),srand()
#include <time.h>		//für Systemzeit
#define UG 1			//UG = Untere Grenze
#define OG 100	    	//OG = Obere Grenze
#define ANZAHL 50

int main(){
  int i, zahl[ANZAHL], ges=0, gerade=0, ungerade=0;
  
  srand(time(NULL));				//Start random
  for(i=1;i<=ANZAHL;i++){
  	zahl[i]=rand()%(OG-UG+1)+UG;
  	printf("%5i ", zahl[i]);
  	ges=ges+zahl[i];
  	if(zahl[i]%2==0)
  	  gerade+=zahl[i];
  	else
	  ungerade+=zahl[i];  
    }
    printf("\nSumme gerade Zahlen  : %5i", gerade);
    printf("\nSumme ungerade Zahlen: %5i", ungerade);
    printf("\nSumme alle Zahlen    : %5i", gerade+ungerade);
    printf("\nKontrolle            : %5i", ges);

  return 0;
}
