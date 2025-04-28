#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int in=0,z=0,x=0,erg=0;
  int zuf=0;
  
  srand(time(NULL));
  
  z=rand()%99+1;
  x=rand()%99+1;
  zuf=rand()%100+1;
  
  printf("\n\nWie lautet das Ergebnis von "); 
  if (zuf%4==0){
    printf("%i plus %i? ", z,x);
    erg=z+x;
  }   
  else if (zuf%4==1)  {
    printf("%i mal %i? ", z,x);
    erg=z*x;
  } 
  else if (zuf%4==2)  {
    printf("%i minus %i? ", z,x);
    erg=z-x;
  }
  else {
    printf("%i modulo %i? ", z,x);
    erg=z%x;
  }
        
  scanf("%i", &in);
  
  if(in==erg)
    printf("Richtig!");
  else
    printf("Leider verloren ... ");
     
  return 0;
}

