#include <stdio.h>
#include <time.h>
#define ANZ 1000
#define MUSEUM 5 
#define TAG 8

int main (){
int stat[MUSEUM][TAG]={0}, i=0,k=0,zBes=0; 

	for(i =1; i<MUSEUM; i++ ){ 
	printf("Museum %i: ",i);
		for(k=1;k<TAG;k++){
		 	stat[i][k]=1;
		 	printf("%i  ",stat[i][k]); 
		}printf("\n");
	}
	printf("\n");
	for(i=1; i<MUSEUM; i++ ){
		zBes=0; 
		for(k=1;k<TAG;k++){
			zBes+=stat[i][k];
		}	printf("Museum %i: %i Besucher w\204hrend der Woche\n",i,zBes); 
	}
		printf("\n");
	for(k=1;k<TAG;k++){	
		zBes=0; 
		printf("Tag %i: ",k);
		for(i=1; i<MUSEUM; i++ ){
			zBes+=stat[i][k];
		}	printf(" %i Besucher in allen Museen\n",i,zBes); 
	}
return 0;
}
