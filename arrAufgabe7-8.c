#include <stdio.h>
#include <stdlib.h>		//rand(),srand()
#include <time.h>		//Systemzeit
#define UG 0			//UG = Untere Grenze
#define OG 100	    	//OG = Obere Grenze
#define ANZAHL 10

int main(){
  int i, arrNoten[ANZAHL], mini, maxi;
  float durch=0;

//Aufgabe 7  
  srand(time(NULL));				//Start random
  for(i=0;i<=ANZAHL;i++){
  	arrNoten[i]=rand()%(OG-UG+1)+UG;
  	printf("%5i ", arrNoten[i]);
 	durch=durch+arrNoten[i];
    }
  durch=durch/ANZAHL;
  
  mini=maxi=arrNoten[0];
  for(i=1;i<=ANZAHL;i++){
  	if(arrNoten[i]<mini)
  	  mini=arrNoten[i];
  	else if(arrNoten[i]>maxi)
  	  maxi=arrNoten[i];  	
	}
	
  printf("\nMinimum: %4i", mini);
  printf("\nMaximum: %4i", maxi);    
  printf("\nDurchschnitt: %.1f", durch);

//Aufgabe 8
  for(i=0;i<=ANZAHL;i++){
  	printf("\n%4i, ",arrNoten[i]);	
  	if(arrNoten[i]<50){
	     printf("nicht ");	    
	     }
    printf("bestanden, Note: ");
    if(arrNoten[i]>=92)
		printf("1");
	else if(arrNoten[i]>=81)
		printf("2");
	else if(arrNoten[i]>=67)
		printf("3");	
	else if(arrNoten[i]>=50)
		printf("4");
	else if(arrNoten[i]>=30)
		printf("5");		
	else	
	    printf("6");		
  }
  return 0;
}
