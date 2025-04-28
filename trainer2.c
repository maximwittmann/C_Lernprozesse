#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int in=0,z=0,x=0,erg=0;
  int zuf=0;
  char rz;
  
  srand(time(NULL));
  
  z=rand()%99+1;
  x=rand()%99+1;
  zuf=rand()%100+1;
  
  printf("\n\nWie lautet das Ergebnis von "); 
  if (zuf%4==0){
  	rz='+';
  	erg=z+x;
    }
  else if (zuf%4==1){
    rz='*';	
  	erg=z*x;
    }
  else if (zuf%4==2){	
    rz='-';	
	erg=z-x;
  }
  else {
  	rz='%';
   erg=z%x;
  }
  printf("%i %c %i? ", z,rz, x);
        
  scanf("%i", &in);
  
  if(in==erg)
    printf("Richtig!");
  else
    printf("Leider verloren ... ");
     
  return 0;
}

