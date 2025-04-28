#include <stdio.h>
#include <time.h>
#define OG 90
#define UG 10

int main (){
int hallen[3][11],k,i,summe=0;
srand(time(NULL)); 
		for(i=0;i<3;i++){	
			for(k=0; k<10;k++){
				hallen[i][k]=rand()%(OG-UG+1)+1;
			}	
		}
		
		for(i=0;i<3;i++){
			summe =0;
			for(k=0; k<10;k++){
				summe= summe + hallen[i][k]; 
			}	
		hallen[i][10]=summe; 
		//printf(" %4i ", summe);
		printf("\n");
		}
		
			printf("\n");
		for(i=0;i<3;i++){
			printf("Halle %1i: ",i+1); 
			for(k=0; k<11;k++){
			printf("%3i ", hallen[i][k]);
			}printf("\n");
		}
return 0;
}
