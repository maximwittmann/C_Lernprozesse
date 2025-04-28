#include <stdio.h>
#include <stdlib.h>		//rand(),srand()
#include <time.h>		//Systemzeit
#include <stdbool.h>		
#define UG 10			//UG = Untere Grenze
#define OG 100		    //OG = Obere Grenze
#define ANZAHL 10

int minFind(int arr[], int anz){
	int i,min=arr[0];
	for(i=1;i<anz;i++){
		if(arr[i]<min){
			min=arr[i];
		}		
	}
	return min;
}

int maxFind(int arr[], int anz){
	int i,max=arr[0];
	for(i=1;i<anz;i++){
		if(arr[i]>max){
			max=arr[i];
		}		
	}
	return max;
}

int nanu(int arr[], int anz){
	int hilf; 
	bool tausch;
	do{ 
	tausch = false; 
	anz--; 
		for(int i=0;i<anz;i++){
			if(arr[i]>arr[i+1]){
				hilf=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=hilf;
				tausch=true;
			}	
		}
	}while(tausch==true); 
	return arr;	
    }

int main(){
  int i, zahl[ANZAHL], neu[ANZAHL],mini, maxi, anz;
  srand(time(NULL));				//Start random
    
  for(i=0;i<ANZAHL;i++){
  	zahl[i]=rand()%(OG-UG+1)+UG;
  	printf("%4i ", zahl[i]);
  	if((i+1)%10==0)
       printf("\n");
  }
  
  mini=minFind(zahl, ANZAHL);
  
  anz=sizeof(zahl)/sizeof(zahl[0]);
  maxi=maxFind(zahl, anz);  
  
  printf("\n\nMinimum: %i", mini);
  printf("\nMaximum: %i", maxi);
  
  printf("\nUnd jetzt kommt nanu ...\n"); 
  nanu(zahl, ANZAHL);
  for(i=0;i<ANZAHL;i++){
  	printf("%4i ", zahl[i]);
  	if((i+1)%10==0)
       printf("\n");
  }
  
  return 0;
}
