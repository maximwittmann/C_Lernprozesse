#include <stdio.h>
#include <stdlib.h>		//rand(),srand()
#include <time.h>		//Systemzeit
#define UG 1			//UG = Untere Grenze00
#define OG 23000
#define ZEILEN 100
#define SPALTEN 50

int main(){
  float ums[ZEILEN][SPALTEN],gesamt=0;
  int i,k;
  
  srand(time(NULL));	
  for(i=0;i<ZEILEN;i++){
  	for(k=0;k<SPALTEN;k++){
//  		ums[i][k]=1;
//  		ums[i][k]=rand()%(OG-UG+1)+UG;
//  		ums[i][k]=ums[i][k]/100.0;
   	ums[i][k]=(rand()%(OG-UG+1)+UG)/100.0;
//  		printf("%6.2f |", ums[i][k]);
	    }
//	printf("\n");		 	
    }

// Umsatzstarke Filalen ("Spaltensumme")
   float grenze=10000;
   int anz=0;
   for(k=0;k<SPALTEN;k++){
	   gesamt=0;
	   for(i=0;i<ZEILEN;i++){
			gesamt=gesamt+ums[i][k];
		    }
	   printf("\nUmsatz Filale Nr. %2i: %9.2f", k, gesamt);		 	
	   if(gesamt>grenze){
	    	anz++;
	    	printf("<======");
	     	}
		}
   printf("\n\nIn %i Filialen machen wir mehr als %.2f Umsatz ", anz, grenze);
   
  return 0;
}
