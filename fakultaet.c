#include <stdio.h>

int main(){
 int i, zahl;
 long long f=1;

 printf("Zahl bitte: ");
 scanf("%i", &zahl);
 
 for(i=1;i<=zahl;i++){
    f=f*i;	
//  printf("%2i=%5i\n", i,f);  
  }
  printf("Fakult\204t von %2i ist %lld\n", zahl,f);   
 return 0;
}