#include <stdio.h>

int main(){
  int werte[4]={13,-4,82,17}, doppelt[4], i,k;
  
  // Verdoppeln
  for(i=0;i<4;i++){
    doppelt[i]=werte[i]*2;    	
  }
  
  for(i=0;i<4;i++){
    printf("Werte[%i]=%3i, ", i, werte[i]);
    printf("Doppelt[%i]=%3i\n", i, doppelt[i]);
  }
  
  printf("-------------------------------\n");
  printf("Umdrehen:\n");
  int ergebnis[4];
  for(i=0;i<4;i++)
  	 ergebnis[3-i]=werte[i];
  	 
// ALternative 1:  
//  int y;
//  for(i=0,y=3;i<4;i++,y--){
//  	 ergebnis[y]=werte[i];
//  }

// ALternative 2:
//  y=3;
//  for(i=0;i<4;i++){
//  	 ergebnis[y]=werte[i];
//  	 y--;
//  }
 
  printf("Werte   : ");
  for(i=0;i<4;i++)
    printf("%3i ",werte[i]);

 
  printf("\nErgebnis: ");
  for(i=0;i<4;i++)
    printf("%3i ",ergebnis[i]);
	   
  printf("\n-------------------------------\n");
  printf("Die wilde 13:\n");  
  int liste[10]={2, -12, 33, 4, 13, -4, 82, 17, 56, 19}, drin=-1;
  for(i=0;i<10;i++){
 	if(liste[i]==13)
 	   drin=i; 	   
    }
 
 if(drin>=0)
   printf("Position %3i ",drin);
 else  
  printf("%3i => nix da",drin);
  

  return 0;
}
