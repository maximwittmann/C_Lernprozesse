#include <stdio.h>
#include <ctype.h>

int main(){
  float kap=1000, zsatz=3, zinsen, nkap, zkap;
  int i;
  char ziel;

  do{
	  printf("Kapital (500-500000): ");
	  scanf("%f", &kap);
  }while(kap<500 || kap>500000);
  
  do{
	  printf("Zinssatz (0.5-10): ");
	  scanf("%f", &zsatz);
  }while(zsatz<.5 || zsatz>10);
  
  printf("Was ist Ihr Ziel?\nKapital (v)erdoppeln oder 1(M)illion? ");
  fflush(stdin);
  scanf("%c", &ziel);  
  while(tolower(ziel)!='m' && tolower(ziel)!='v'){
	  printf("Bitte nur (v)erdoppeln oder 1(M)illion eingeben! ");
	  fflush(stdin);
	  scanf("%c", &ziel);  	
  }
  
  if(ziel=='v')
    zkap=kap*2;
  else
    zkap=1000000;  
  
  printf("Jahre  Kapital    Zinsen  Neues Kapital\n");
  for(i=1;nkap<=zkap;i++){
  	 zinsen=kap*zsatz/100;
  	 nkap=kap+zinsen;
  	 printf("%3i %10.2f",i, kap);
  	 printf("%10.2f %10.2f\n", zinsen, nkap);
  	 kap=nkap;
  	 //b++;
  }
  
  
  return 0;
}
