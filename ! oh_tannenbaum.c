#include <stdio.h>


int main () {
	int z, s, l;
	printf("\n");
	printf("\n");
	for(z=1; z<=20; z=z+1) {
		for(l=20; l>=z; l=l-1) {
				printf(" ");
				}
		for(s=1; s<=z; s=s+1) {
			printf("**");
		}
		printf("\n");		
	}
	for(s=1; s<=4; s=s+1) {
		for(l=0; l<=15; l++) {
			printf(" ");
			}
	    printf("******\n");
		}
	printf("\n");		

	return 0;
}
