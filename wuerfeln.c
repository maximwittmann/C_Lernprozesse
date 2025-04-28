#include <stdio.h>
#include <stdlib.h>		//für rand(),srand()
#include <time.h>		//für Systemzeit
#define UG 1			//UG = Untere Grenze (kleinste Zahl)
#define OG 6			//OG = Obere Grenze (größte Zahl)
#define ANZAHL 1000000000

int main()
{
  int wurf, z1=0,z2=0, z3=0, z4=0, z5=0, z6=0,i=0; 	
  srand(time(NULL));
 
  for(i=1;i<=ANZAHL;i++){	
  	wurf=rand()%6+1;
//    printf("%i ", wurf);
    
  	switch(wurf){
	  case 1: z1++;break;
	  case 2: z2++;break;
	  case 3: z3++;break;
      case 4: z4++;break;
	  case 5: z5++;break;
	  case 6: z6++;break;	 
	  } 
  }
 
 printf("\nEins  : %i", z1);
 printf("\nZwei  : %i", z2);
 printf("\nDrei  : %i", z3);
 printf("\nVier  : %i", z4);
 printf("\nFuenf : %i", z5);
 printf("\nSechs : %i", z6);
 printf("\n\nGesamt: %i", z1+z2+z3+z4+z5+z6);
 
 return 0;
}
