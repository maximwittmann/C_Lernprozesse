#include <stdio.h>
#include <stdlib.h>		//rand(),srand()
#include <time.h>		//Systemzeit
#define UG 1			//UG = Untere Grenze
#define OG 10000
#define ZEILEN 10
#define SPALTEN 5

int main(){
  float ums[ZEILEN][SPALTEN],gesamt=0;
  int i,k;
  
  srand(time(NULL));	
  for(i=0;i<ZEILEN;i++){
  	for(k=0;k<SPALTEN;k++){
  		ums[i][k]=rand()%(OG-UG+1)+UG;
  		ums[i][k]=ums[i][k]/100.0;
//   	ums[i][k]=(rand()%(OG-UG+1)+UG)/100.0;
  		printf("%6.2f |", ums[i][k]);
	    }
	printf("\n");		 	
    }
 
   for(i=0;i<ZEILEN;i++){
  	for(k=0;k<SPALTEN;k++){
		gesamt=gesamt+ums[i][k];
	    }	 	
    }
   printf("\n\nGesamtumsatz: %4.2f", gesamt);
  return 0;
}
