#include <stdio.h>
#include <stdlib.h>		//rand(),srand()
#include <time.h>		//Systemzeit
#define UG 1			//UG = Untere Grenze00
#define OG 10000
#define ZEILEN 10
#define SPALTEN 5

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
  		printf("%6.2f |", ums[i][k]);
	    }
	printf("\n");		 	
    }

// Umsatz alle Produkte ("Zeilensumme")
   float mini, maxi;
   int pmin, pmax;
   
   for(i=0;i<ZEILEN;i++){
	   gesamt=0;
	   for(k=0;k<SPALTEN;k++){
			gesamt=gesamt+ums[i][k];
		    }	 	
	   printf("\nUmsatz Produkt Nr. %2i: %4.2f", i, gesamt);
	   if(i==0){
	   	  pmin=pmax=i;
	   	  mini=maxi=gesamt;
	      }
	    if(gesamt>maxi){
	    	maxi=gesamt;
	    	pmax=i;
	     	}
	    else if(gesamt<mini){
	    	mini=gesamt;
	    	pmin=i;
	     	} 
   }
   printf("\n\nBestes Produkt Nr. %2i      : %4.2f", pmax, maxi);
   printf("\nSchlechtestes Produkt Nr. %2i: %4.2f", pmin, mini);
   
  return 0;
}
