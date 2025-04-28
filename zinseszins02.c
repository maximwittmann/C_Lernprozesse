#include <stdio.h>

int main(){
  float kap=1000, zsatz=3, zinsen, nkap;
  int jahre=5, i, b=2;

  do{
	  printf("Kapital (500-500000): ");
	  scanf("%f", &kap);
  }while(kap<500 || kap>500000);
  
  do{
	  printf("Zinssatz (0.5-10): ");
	  scanf("%f", &zsatz);
  }while(zsatz<.5 || zsatz>10);
  
  printf("Stehzeit in Jahren (1-50): ");
  scanf("%i", &jahre);  
  while(jahre<1 || jahre>50){
  	printf("Sie haben %i eingeben, erlaubt sind ", jahre);
	printf("nur Werte von 1 bis 50!!!\nNochmal bitte: ");
	scanf("%i", &jahre); 	
  }
   
  printf("Jahre  Kapital    Zinsen  Neues Kapital\n");
  for(i=1;i<=jahre;i++){
  	 zinsen=kap*zsatz/100;
  	 nkap=kap+zinsen;
  	 //printf("%*i %10.2f",b, i, kap);
  	 printf("%3i %10.2f",i, kap);
  	 printf("%10.2f %10.2f\n", zinsen, nkap);
  	 kap=nkap;
  	 //b++;
  }
  
  
  return 0;
}
