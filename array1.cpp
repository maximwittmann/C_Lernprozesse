#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define UG 1
#define OG 100
#define ANZ 3000

int main(){
	int z[ANZ]={0}, i,b;
	float durch;
	
	srand(time(NULL));
	
	for(i=0;i<ANZ;i++){
		z[i]=rand()%(OG-UG+1)+UG;
		
	}
	
	for(b=0;b<ANZ;b++){
		printf("\n%2i: %3i \n", b, z[b]);
	
	durch=durch+z[b];
}
	durch=durch/ANZ;
	printf("\nDurchschnitt = %.2f", durch);
	return 0;
}
