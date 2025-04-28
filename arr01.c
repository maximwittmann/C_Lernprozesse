#include <stdio.h>
#define ANZ 30
#define UG 1
#define OG 100
int main(){
  int z[ANZ]={0}, i,b;
  srand(time(NULL)); 
//  for(i=0;i<ANZ;i++){
//  
//  	printf("Zahl bitte: ");
//  	scanf("%i", &z[i]);
//  }
  
  for(b=0;b<ANZ;b++){

   z[b]=rand()%(OG-UG+1)+UG;
  	printf("%i: %i\n", b, z[b]);
}
  return 0;
}
