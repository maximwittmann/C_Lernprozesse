#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define UG 1			//UG = Untere Grenze (kleinste Zahl)
#define OG 1000		//OG = Obere Grenze (größte Zahl)
#define ANZ 100
int main ()
{
int arr[ANZ]={100};//{25,9,14,25,7}
int anz=5;
int i=0,sortier=0,getauscht=0, pruef=0;
int hilf=0;
bool tausch=true;
    srand(time(NULL));
	printf("Vorher: ");
	for(i=0;i<ANZ;i++){
	 arr[i]=rand()%100+1;	
	 printf("%3i", arr[i]);
	}
	
do{
	tausch=false;
	anz--;
	for(i=0;i<ANZ;i++){
		if(arr[i]>arr[i+1]){
			hilf=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=hilf;
			tausch=true;
			getauscht++;
		}
		sortier++;			
	}
	pruef++;
}while(tausch==true);
	
printf("\nNachher: ");
for(i=0;i<ANZ;i++)
	printf("%3i", arr[i]);
	
printf("\n\nSortierl\204ufe: %3i", sortier);	
printf("\nGetauscht   : %3i", getauscht);
printf("\nPr\201fschleife: %3i", pruef);
	
	return 0;
}

