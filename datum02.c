#include <stdio.h>
#include <stdbool.h>

int main(){
  int t, m, j;
  bool fehler=false;
  
  do{
  	printf("Bitte Tag eingeben (1-31): ");
  	scanf("%i", &t);	
  } while (t<1 || t>31);
  
  
  printf("Bitte Monat eingeben (1-12): "); scanf("%i", &m);
  printf("Jahr eingeben (1800-2200): "); scanf("%i", &j);
  
  if(j<1800 || j>2200) fehler=true;
  if(m<1 || m>12) fehler=true;
  

  
  if(fehler==false)
    printf("Datum plausibel");
  else  
    printf("Datum falsch"); 
     
  
  return 0;
}
