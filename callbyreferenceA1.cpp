#include <stdio.h>

void dividieren(int *z1,int z2, int *m){
	while(*z1>=z2){
	*z1=*z1-z2;
	*m+=1; 
}
	
}
int main (){
int	z1=14,z2=3,rest, mal=0; 

printf("erste Zahl: "); 
scanf("%i",&z1); 
printf("division: "); 
scanf("%i",&z2); 
printf("%i : %i = ",z1,z2);
dividieren(&z1,z2,&mal);
printf("%i Rest: %i", mal, z1); 
return 0;
}