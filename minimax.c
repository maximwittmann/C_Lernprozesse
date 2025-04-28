#include <stdio.h>

int main(){
  int i=0, mini=0, maxi=0, zahl=0;
  
  printf("1. Zahl: ");
  scanf("%i", &zahl);
  mini = maxi = zahl;
  
  for(i=2;i<=5;i++){
     printf("%i. Zahl: ",i);
     scanf("%i", &zahl);	

     if(zahl>maxi){
       maxi = zahl;
	   }
  	 else if(zahl<mini){
       mini = zahl;
	   }
    }
  printf("\nMinimum: %i", mini);
  printf("\nMaximum: %i", maxi);
  return 0;
}
