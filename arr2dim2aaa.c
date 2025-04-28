#include <stdio.h>
#include <stdlib.h>		//rand(),srand()
#include <time.h>		
#define UG 1			
#define OG 120000
#define ZEILEN 50
#define SPALTEN 125

int main(){
  float ums[ZEILEN][SPALTEN],gesamt=0, mini=0, maxi=0, filiale=0;
  int i,k;
  
  srand(time(NULL));	
  for(i=0;i<ZEILEN;i++){
  	for(k=0;k<SPALTEN;k++){
  		ums[i][k]=1;
  		ums[i][k]=rand()%(OG-UG+1)+UG;
 		//ums[i][k]=ums[i][k]/100.0;
  		ums[i][k]=(rand()%(OG-UG+1)+UG)/100;
  		printf("%6.2f |", ums[i][k]);
	    }
	printf("\n");		 	
    }
 //a: Gesamtumsatz berechnen
   for(i=0;i<ZEILEN;i++){
  	for(k=0;k<SPALTEN;k++){
		gesamt=gesamt+ums[i][k];
	   
	   
	    }	 	
    }
    
    
   printf("\n\nGesamtumsatz: %4.2f", gesamt);
   
//b: Umsatz Produkt Nr. 10 (Zeile 9)
   gesamt=0;
   i=9;
   for(k=0;k<SPALTEN;k++){
		gesamt=gesamt+ums[i][k];
	    }	 	
   printf("\nUmsatz Produkt Nr. %i: %4.2f", i, gesamt);
   
//b2: Umsatz Filiale Nr. 23 (Spalte 22)   
   gesamt=0;
   k=22;
   for(i=0;i<ZEILEN;i++){
   	   gesamt=gesamt+ums[i][k];
	   }
   printf("\nUmsatz Filale Nr. %i: %4.2f", 23, gesamt);

//c1: Umsatz alle Produkte ("Zeilensumme")
   for(i=0;i<ZEILEN;i++){
	   gesamt=0;
	   for(k=0;k<SPALTEN;k++){
			gesamt=gesamt+ums[i][k];
		    }	 	
	   printf("\nUmsatz Produkt Nr. %2i: %4.2f", i, gesamt);
   }
//c2: Umsatz alle Filialen (Spaltensumme)   
   
   for(k=0;k<SPALTEN;k++){
	   gesamt=0;
	   for(i=0;i<ZEILEN;i++){
	   	   gesamt=gesamt+ums[i][k];
		   }
	   printf("\nUmsatz Filale Nr. %2i: %4.2f", k+1, gesamt);  
    }
   for(k=0;k<SPALTEN;k++){
   	gesamt=0;
   	
   	for(i=0;i<ZEILEN;i++){
   		gesamt=gesamt+ums[i][k];
   	}
   	
   	if(gesamt>10000){
   		filiale++;
   		printf("\n\nFiliale Nr. %i macht %.2f Umsatz", k+1, gesamt);
   	}}
   	
   		printf("\n\n%.0f Filialen machen mehr als 10000EUR Umsatz", filiale);
   		
  return 0;
}
