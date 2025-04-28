#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define OG 10
#define UG 1
#define ANZ 10

int bubblen(int array[], int arrSize){
	int i, schalter=1,hilf;
	do{
		schalter=1; 
		arrSize--; 
	for(i=0; i<arrSize; i++){
		if (array[i]>array[i+1]){
			hilf = array[i]; 
			array[i]=array[i+1]; 
			array[i+1]= hilf; 
			schalter=0; 
		} 
	}
	}while(schalter== 0); 	
	return array; 
}

int main (){
int arr[ANZ]={0}, i; 
srand(time(NULL));

for(i=0; i<ANZ; i++){
	arr[i]=rand()%(OG-UG+1)+UG; 
	printf("%i, ",arr[i]); 
} 
printf("\n");
bubblen(arr, ANZ);
for(i=0; i<ANZ; i++){
	printf("%i, ",arr[i]); 
} 
return 0;
}

