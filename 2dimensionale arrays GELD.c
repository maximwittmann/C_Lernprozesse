#include <stdio.h>
#include <time.h>
#define UG 100			//UG = Untere Grenze (kleinste Zahl)
#define OG 1000		//OG = Obere Grenze (größte Zahl)
#define ZEILEN 100
#define SPALTEN 50
int main(){
	 float ums[ZEILEN][SPALTEN],gesamt=0;
	 int i,k;
	srand(time(NULL));
	
	for(i=0;i<ZEILEN;i++){
	  	for(k=0;k<SPALTEN;k++){
	  	ums[i][k]=1;
	  	ums[i][k]=rand()%(OG-UG+1)+UG;
	printf("%1.0f ", ums[i][k]);
	}
	printf(" \n");
	}
		printf("gesamtumsatz von Nr %i: %4.2f", i, gesamt);
	  return 0;
	}