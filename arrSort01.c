#include <stdio.h>
#include <time.h>
#define UG 100			//UG = Untere Grenze (kleinste Zahl)
#define OG 10000		//OG = Obere Grenze (größte Zahl)
#define ZEILEN 5
#define SPALTEN 5
int main(){
	 float ums[ZEILEN][SPALTEN],gesamt=0;
	 int i,k;
	srand(time(NULL));
	
	for(i=0;i<ZEILEN;i++){
		 	
	  	for(k=0;k<SPALTEN;k++){
	  	ums[i][k]=1;
	  	ums[i][k]=(rand()%(OG-UG+1)+UG)/100.00;
	printf("%1.2f ", ums[i][k]);
	}
	printf(" \n");
	}

	for(i=0;i<ZEILEN;i++){
	  	for(k=0;k<SPALTEN;k++){
	  	gesamt=gesamt+ums[i][k];
	}
	}
printf("Gesamtumsatz: %1.1f", gesamt);
	  return 0;
}
