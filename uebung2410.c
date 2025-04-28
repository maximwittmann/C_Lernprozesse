#include <stdio.h>


int main (){
int arr[2][17], i,k,jahr=0,min=0, median=0; 
arr[0][0]=200; 
arr[0][1]=210; 
arr[0][2]=197;
arr[0][3]=300;
arr[0][4]=390;  
arr[0][5]=213; 
arr[0][6]=180; 
arr[0][7]=233; 
arr[0][8]=255;
arr[0][9]=241;
arr[0][10]=267;
min=arr[0][0]; 
		arr[1][0]=1981;
		for( i=1; i<11;i++){
		arr[1][i]=arr[1][i-1]+1;	
		}		
		printf("Preise: ");
		for(i=0; i<2;i++){
			for(k=0; k<11;k++){
			printf("%4i ", arr[i][k]);
			if(min<arr[i][k]){
				min = arr[0][k]; 
				jahr = arr[1][k];
			}
			}printf("\n");
			printf("Jahr: ");
 		}
 		for(k=0; k<11;k++){
			median = median+arr[0][k];}
 		//median = median/10; 
	printf("\ng\201nstigste war: %i EUR im Jahr %i", min,jahr);
	printf("\nDurchschnittspreis: %i EUR", median/10); 
return 0;
}
