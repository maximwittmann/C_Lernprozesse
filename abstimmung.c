#include <stdio.h>

int main(){
   int i,j=0,n=0,e=0;
   char x;
   
   for(i=1;i<=8;i++){
   	  printf("Bitte w\204hlen sie mit j,n,e: ");
   	  fflush(stdin);
   	  scanf("%c", &x);
   	  
//	  if     (x=='j') j++;
//	  else if(x=='n') n++;  
//    else            e++;
      
   	  if(x=='j'){
   	  	  j++;  
		 }
   	  else if(x=='n'){
   	  	  n++;  
		 }
   	  else {
   	  	  e++;  
		 } 
	} 
	
	printf("\nStimmenverteilung JA: %i", j);
	printf("\nStimmenverteilung Nein: %i", n);
	printf("\nStimmenverteilung Enthalten: %i", e);
   
   return 0;	
}