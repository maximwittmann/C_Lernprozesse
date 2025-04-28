#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define OG 100
#define UG 1
#define ANZ 10 

//Kapitel 13.8 Aufg. 14 
void swap(int *z1, int *z2){
	int hilf; 
		if(*z1>*z2){
			hilf = *z2; 
			*z2=*z1; 
			*z1=hilf; 
		}
}
void Bubblen(int arr[], int arrSize){
	int schalter=1,i; 
	do{	
	schalter=1; 
	arrSize--; 
		for(i=0; i<arrSize;i++){
			if(arr[i]>arr[i+1]){	
			swap(&arr[i],&arr[i+1]);
			schalter =0; 
			}
		}
	}while(schalter==0); 
}

int main (){
int arr[ANZ]={0},i; 
srand(time(NULL)); 
	for(i=0; i<ANZ; i++){
		arr[i]= rand()%(OG-UG+1)+UG; 
		printf("%i, ",arr[i]); 
	}
Bubblen(arr, ANZ); 
	printf("\nneu: \n"); 
	for(i=0; i<ANZ; i++){
		printf("%i, ",arr[i]); 
	}
return 0;
}
