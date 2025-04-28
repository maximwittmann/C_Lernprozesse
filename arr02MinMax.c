#include <stdio.h>
#include <stdlib.h>		
#include <time.h>		
#define UG 1			//UG = Untere Grenze (kleinste Zahl)
#define OG 100	     	//OG = Obere Grenze (größte Zahl)
#define ANZ 30

int main(){
  int z[ANZ]={0}, i,b, mini, maxi;
  
  
  srand(time(NULL));
  
  for(i=0;i<ANZ;i++){
  	z[i]=rand()%(OG-UG+1)+UG;
  }
 
  // Minimum und Maximum ermitteln:
//  mini=maxi=z[0];
//  for(i=1;i<ANZ;i++){
//	if(z[i]>maxi)
//	   maxi=z[i];
//	else if(z[i]<mini)
//	   mini=z[i];  
//  }

	for(i=0;i<ANZ;i++){
    	if(i==0)
    		mini=maxi=z[i];
		else if(z[i]>maxi)
	   		maxi=z[i];
		else if(z[i]<mini)
	   		mini=z[i];
    }
     
     
  for(b=0;b<ANZ;b++)
  	printf("%3i", z[b]);

  printf("\nMinimum: %3i", mini); 
  printf("\nMaximum: %3i", maxi); 
  return 0;
}
