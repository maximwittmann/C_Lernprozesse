#include <stdio.h>


int main (){
int alter =0, k=0, sm=0, sw=0;
char gesch='x'; 
int ma[5][2]={0}; 
printf("Ihr Alter? (-1 f\201r Ende) "); 
scanf("%i", &alter); 
while(alter>0){
	printf("\nIhr Geschlecht? (m/w) "); 
	fflush(stdin);
	scanf("%c",&gesch); 
	if(gesch=='m'){
	k=0;
	sm++; 
	}
	else{
		k=1; 
		sw++; 
	}
	if(alter<18){
		ma[0][k]++; 
	}
	else if(alter<=30){
		ma[1][k]++; 
	}
	else if(alter<=50){
		ma[2][k]++; 
	}
	else if(alter<=65){
		ma[3][k]++; 
	}
	else{
		ma[4][k]++; 
	}
	printf("\nIhr Alter? (-1 f\201r Ende) "); 
	scanf("%i", &alter); 
}

	printf("\nAlter:        \tM  \tW"); 
	printf("\n---------------------------");
	printf("\nUnter 18:   \t%i \t%i",ma[0][0],ma[0][1]);
	printf("\n18-30:      \t%i \t%i",ma[1][0],ma[1][1]);
	printf("\n31-50:      \t%i \t%i",ma[2][0],ma[2][1]);
	printf("\n51-65:      \t%i \t%i",ma[3][0],ma[3][1]);
	printf("\n\232ber 65: \t%i \t%i",ma[4][0],ma[4][1]);
	printf("\n---------------------------");
	printf("\nSumme:      \t%i \t%i",sm,sw);
return 0;
}
