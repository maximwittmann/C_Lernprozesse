#include <stdio.h>


int main(){
	
	int x=0, y=0;
	int mini=0, maxi=0;
	y++;
	
	printf("\nZahl bitte: ");
		scanf("%i", &x);
		mini=maxi=x;
		
	while(y<5){
		printf("\nZahl bitte: ");
		scanf("%i", &x);
				
if(x>maxi){
	maxi=x;
}
	else if(x<mini){
		mini=x;
		
		}
y++;
}
printf("\n%i ist das Maximum", maxi);
printf("\n%i ist das Minimum", mini);
	return 0;
}
