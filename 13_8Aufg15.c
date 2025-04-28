#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define OG 100
#define UG 1
#define ANZ 10 
//Kapitel 13.8 Aufgabe 15 
void minimax(int array[], int arrSize,int *min, int *max){
	*min=*max=array[0];
	for(int i=1; i<arrSize; i++){
		if(array[i]> *max){
			*max = array[i]; 
		}
		else if (array[i]<*min){
			*min = array[i]; 
		}
	}
}
int main (){
int arr[ANZ]={0},min,max; 
	srand(time(NULL)); 
	printf("%i, ",arr[0]); 
	for(int i=0; i<ANZ;i++){
		arr[i]= rand()%(OG-UG+1)+UG; 
		printf("%i, ",arr[i]); 
	}
	minimax(arr, ANZ, &min, &max); 
	printf("\nMini: %i Maxi %i", min,max); 
return 0;
}
