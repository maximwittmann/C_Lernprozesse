#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define UG 1
#define OG 25
#define ANZ 100-1

int main(){
	
	int arr[100]={0}, i=0, z=0, z2=0;
	
srand(time(NULL));

//for(i=0;i<=ANZ;i++){


for(i=0;i<=ANZ;i++){
	arr[i]=rand()%(OG-UG+1)+UG;
	if(arr[i]%6==0){
	z++;
}
if(arr[i]%5==0){
	arr[i]=227;
			   }

if(arr[i]==23){
	z2++;
}
if(i%10==0){
printf("\n");
}
printf("%7i", arr[i]);

}

printf("\n\n%i Zahlen sind durch 6 Teilbar", z);
printf("\n\n%i Zahlen davon sind eine 23", z2);


	return 0;
}
