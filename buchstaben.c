#include <stdio.h>
#include <stdlib.h>		//für rand(),srand()
#include <time.h>		//für Systemzeit
#define UG 65			//UG = Untere Grenze (kleinste Zahl)
#define OG 90			//OG = Obere Grenze (größte Zahl)

int main(){
   int i, zwischen;
   srand(time(NULL));
   
//   for(i=1;i<=8;i++){
//   	  zwischen=rand()%(OG-UG+1)+UG;
////      printf("\n%i = %c",zwischen, zwischen, zwischen);
//      printf("%c",zwischen);
//}

//Ausgabe A - Z
   for(i=97;i<=122;i++){		//Gross: 65-90
      printf("%c%c",i,i-32);
   }
return 0;
}
