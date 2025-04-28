#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#include <time.h>

bool pruef(int);
int zufall(int, int); 

int main (){
int wert, zahl; 
srand(time(NULL)); 

	for(int i=1; i<10;i++){
		zahl=zufall(1,50); 
		wert=pruef(zahl); 
		printf("\n%3i: ",zahl);
		if(pruef(zahl)==true){
			printf("gerade");
		}
		else printf("ungerade"); 
		}
return 0;
}

bool pruef(int a){
	return (a%2==0); //vergleich ist immer true false operator 
}

int zufall(int og, int ug){
int zu; 
zu=rand()%(og-ug+1)+ug; 
return zu; 
}