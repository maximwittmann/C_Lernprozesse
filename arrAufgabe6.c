#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>		//rand(),srand()
#include <time.h>		//Systemzeit
#define UG 1			//UG = Untere Grenze
#define OG 10000			//OG = Obere Grenze
#define ANZAHL 100

int main(){
    int array[ANZAHL], i, z6=0, z23=0, sorti, anz=ANZAHL;
    bool schalter;
    
    srand(time(NULL));				//Start random
    for(i=0;i<ANZAHL;i++){
  		array[i]=rand()%(OG-UG+1)+UG;
  		printf("%6i", array[i]);
  		if((i+1)%10==0)
  			printf("\n");
	}
    
	for(i=0;i<ANZAHL;i++){
    	if(array[i]%6==0)
    	  z6++;
    	if(array[i]%5==0)
		  array[i]=227;
		if(array[i]==23)
    	  z23++;   
	}
	
	do{
		schalter=false;
		anz--;
		for(i=0;i<anz;i++){
			if(array[i]>array[i+1]){
				sorti=array[i];
				array[i]=array[i+1];
				array[i+1]=sorti;
				schalter=true;
			}
		}
    }while(schalter==true);
	
	printf("\n------------------------------\n");
	for(i=0;i<ANZAHL;i++){
  		printf("%6i", array[i]);
  		if((i+1)%10==0)
  			printf("\n");
	}
 
    printf("\n%i Zahlen sind durch 6 teilbar.", z6);
    printf("\n23 kommt %i mal vor.", z23);
  return 0;
}
