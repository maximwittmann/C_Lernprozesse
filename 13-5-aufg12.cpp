#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define UG 1
#define OG 100
#define ANZ 25

int main(){
	
	int arr[25]={0}, i=0, eing=0, vers=0;
	
srand(time(NULL));

for(i=0;i<=ANZ;i++){
	
	arr[i]=rand()%(OG-UG+1)+UG;
	printf("%i ", arr[i]);
	
}



while(vers<=2){

printf("\nBitte Zahl erraten: ");
scanf("\n%i", &eing);

if(eing!=arr[i]){
printf("Zahl nicht vorhanden");
vers++;
}
printf("%i", vers);
}
if(eing==arr[i]){
printf("%i ist im Array vorhanden", arr[i]);

}
	
	return 0;
}
