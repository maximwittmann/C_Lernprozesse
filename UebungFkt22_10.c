#include <stdio.h>
#include <stdlib.h>
#include <time.h>		
#define UG 1			
#define OG 1000
#define ANZ 100
int minFind(int [], int);
int maxFind(int [], int);

int main (){
int zahl[ANZ]={0}, i,min,max; 

srand(time(NULL)); 
for(i=0;i<ANZ;i++){
	zahl[i]=rand()%(OG-UG+1)+UG; 
	printf("%5i ",zahl[i]); 
	if(i+1%10==0)
	printf("\n"); 

}
	min =minFind(zahl, ANZ); 
	max =maxFind(zahl,ANZ);
printf("\nkleinste Zahl: %i ",min); 
printf(" gr\224\341te Zahl: %i",max); 

return 0;
}

int minFind(int arr[], int arrSize){
	int i, mini=arr[0]; 
	for(i=1; i<arrSize; i++){
		if(mini>arr[i]){
			mini = arr[i]; 
		}
	}
	return mini; 
}

int maxFind(int arr[], int arrSize){
	int i, maxi=arr[0]; 
	for(i=1; i<arrSize; i++){
		if(maxi<arr[i]){
			maxi = arr[i]; 
		}
	}
	return maxi; 
}