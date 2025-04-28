#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define OG 50
#define UG 1
#define ANZ 100

int main (){
int arr[ANZ]={0}, arrgerade[ANZ/2]={0}, i=0,k=0;

srand(time(NULL)); 
for(i=0;i<ANZ;i++){
	arr[i]=rand()%(OG-UG+1)+UG; 
	printf("%i, ",arr[i]); 
}
printf("\n------------------------------------\n");
for(i=0;i<ANZ;i++){
	if(arr[i]%2==0){
		arrgerade[k]=arr[i];
		printf("%i, ",arrgerade[k]);  
		k++;
	} 	
}
return 0;
}
