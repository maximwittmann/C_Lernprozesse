#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(){
	
	int i=1 ,arr[50]={0}, gerade=0, ungerade=0, summeger=0, summeung=0;

srand(time(NULL));

for(i=1;i<=50;i++){
	arr[50]=rand()%(50-1+1)+50;
	
	if(arr[50]%2==0){
	
	summeger=summeger+arr[50];
	gerade++;
	
	printf("%i \n", arr[50]);
}
	
	
else if(arr[50]%2==1){
    summeung=summeung+arr[50];
	ungerade++;
	
	printf("%i \n", arr[50]);

}
}
printf("\nGerade %i", gerade);
printf("\nUngerade %i", ungerade);

printf("\nSumme gerade: %i", summeger);
printf("\nSumme ungerade %i", summeung);


	return 0;
}
