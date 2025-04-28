#include <stdio.h>

int main(){
  float kap=1000, zsatz=3, zinsen, nkap;
  int jahre=5, i, b=2;
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
