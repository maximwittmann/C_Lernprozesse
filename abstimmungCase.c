#include <stdio.h>

int main(){
   int i,j=0,n=0,e=0;	//Deklaration von 4 Integer-Variablen
   char x;				//Deklaration einer Character-Variablen
   
   for(i=1;i<=8;i++){	//FOR-Schleife 1 bis 8
   	  printf("Bitte w\204hlen sie mit j,n,e: ");
   	  fflush(stdin);
   	  scanf("%c", &x);
   	  
   	  switch(x){
		case 'j':{
		         j++;
				 break;
			     }
		case 'n': n++; break;  
		default : e++; break; 
	    }		  
	} 
	
	printf("\nStimmenverteilung JA: %i", j);
	printf("\nStimmenverteilung Nein: %i", n);
	printf("\nStimmenverteilung Enthalten: %i", e);
   
   return 0;	
}