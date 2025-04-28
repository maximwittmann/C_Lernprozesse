#include <stdio.h>
#include <stdlib.h>		//für rand(),srand()
#include <time.h>		//für Systemzeit
#define UG 1			//UG = Untere Grenze (kleinste Zahl)
#define OG 6			//OG = Obere Grenze (größte Zahl)
#define ANZAHL 10000

int main()
{
  int wurf, z[7]={0},i; 	
  srand(time(NULL));
 
  for(i=1;i<=ANZAHL;i++){	
     wurf=rand()%6+1;
	 z[wurf]++;
     printf("%i ", wurf);   
  }
 for(i=0;i<7;i++)
  printf("\n%i: %i", i, z[i]);
 
 return 0;
}
