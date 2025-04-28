#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(){
	
	int werte[4]={13, -4, 82, 17}, doppelt[4]={}, i=0;

for(i=0;i<4;i++){
	
	doppelt[i] = werte[4-1-i];
	//printf("\nWert: %i", werte[i]);
	printf("\nDoppelt: %i", doppelt[i]);
	}
	
	return 0;
	
}