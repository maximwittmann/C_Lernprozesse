#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define OG 300
#define UG 30

//Aufgabe zum Goldenen Broiler
int main (){
int KOHLE[3][11], raum, i,k,summe; 
srand(time(NULL)); 
for(i=0;i<3;i++){
	for(k=0;k<10;k++){
		KOHLE[i][k]=rand()%(OG-UG+1)+UG; 
		printf("%3i ", KOHLE[i][k]); 
	}printf("\n");
}

printf("\n");
for(i=0;i<3;i++){
	for(k=0;k<11;k++){
		summe=summe+KOHLE[i][k]; 
		KOHLE[i][10]= summe; 
	}
}


for(i=0;i<3;i++){
	for(k=0;k<11;k++){
	printf("%3i ", KOHLE[i][k]); 
	}printf("\n");
}


return 0;
}
