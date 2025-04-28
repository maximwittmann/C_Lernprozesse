#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define UG 1
#define OG 100
#define ANZ 10

int main(){
	int z[ANZ]={0}, i,b,mini=1,maxi=1, trig;
	float durch;
	
	srand(time(NULL));
	
	for(i=0;i<ANZ;i++){
		mini=maxi=z[i]=rand()%(OG-UG+1)+UG;
		
	}
	
	for(b=0;b<ANZ;b++){
		printf("\n%2i: %3i \n", b, z[b]);
	
	durch=durch+z[b];

	

     if(z[b]>maxi){
       maxi = z[b];
	   }
  	 else if(z[b]<mini){
       mini = z[b];
	   }
}
  printf("\nMinimum: %i", mini);
  printf("\nMaximum: %i", maxi);

	durch=durch/ANZ;
	printf("\nDurchschnitt = %.2f", durch);
	return 0;
}
