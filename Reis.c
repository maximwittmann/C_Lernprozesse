#include <stdio.h>

int main(){
  int reis=1, gesamt=0, i;
  
  for(i=1;i<=24;i++){
  	gesamt+=reis;	//gesamt=gesamt+reis
  	printf("%i. Feld: %i K\224rner\n", i,reis);
  	reis*=2;		//reis=reis*2
  }
  printf("\nAm Ende: %i Reisk\224rner", gesamt);
  
  
  return 0;
}
