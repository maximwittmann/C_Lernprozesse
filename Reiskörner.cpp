#include <stdio.h>
int main(){
 
 	int reis=1, gesamt=0, i;
 
 
	for(i=1;i<=8;i++){
		gesamt+=reis;
 	printf("%i. Feld: %i k\224rner \n", i,reis);
 	reis*=2;
 }


	return 0;
}
