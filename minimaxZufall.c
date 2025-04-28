#include <stdio.h>
#include <stdlib.h>		//für rand(),srand()
#include <time.h>		//für Systemzeit
#define UG 1			//UG = Untere Grenze (kleinste Zahl)
#define OG 3200			//OG = Obere Grenze (größte Zahl)

int main(){
  int i=0, mini=0, maxi=0, zahl=0;
  
  srand(time(NULL));
  zahl=rand()%(OG-UG+1)+UG;
  printf("%5i ",zahl);
  
  mini=maxi=zahl;
  for(i=2;i<=50;i++){
 	 zahl=rand()%(OG-UG+1)+UG;
  	 printf("%5i ",zahl);
	 
	 if(i%5==0)
	 	printf("\n"); 	

     if(zahl>maxi){
       maxi = zahl;
	   }
  	 else if(zahl<mini){
       mini = zahl;
	   }
    }
  printf("\nMinimum: %i", mini);
  printf("\nMaximum: %i", maxi);
  return 0;
}
