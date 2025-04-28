#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#define ANZAHL 50
#define OG 99
#define UG 1

int main(){
	
	int arr[5]={25,9,14,25,7};
	int i=0, anz=5;
	int hilf=0;
	bool tausch=true;
	
	//srand(time(NULL));
	
	printf("Vorher : ", arr[i]);
	
	
	for(i=0;i<5;i++){
		printf("[%2i]", arr[i]);
	
	//arr[i]=rand()%(OG-UG+1)+UG;
}

do{

tausch=false;
anz=anz-1;
	
for(i=0;i<anz;i++){
	
	if(arr[i]>arr[i+1]){
			
		
hilf    = arr[i];
arr[i]  = arr[i+1];
arr[i+1]= hilf;
tausch  = true;
}
}
	
					
			
}while(tausch==true);

printf("\nNachher: ");


for(i=0;i<5;i++)
	printf("[%2i]", arr[i]);
					
		

	return 0;
}
