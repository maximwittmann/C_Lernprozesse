#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int zufall(int, int); 

int main (){
int ugr, ogr,zzahl; 
srand(time(NULL)); 
printf("Geben Sie die Obergrenze ein: "); 
scanf("%i",&ogr); 
printf("\nGeben Sie die Untergrenze ein: "); 
scanf("%i",&ugr); 
for(int i=1; i<20; i++){
printf("%i, ",zufall(ogr,ugr)); 
}
return 0;
}
int zufall(int og, int ug){
int zu; 
zu=rand()%(og-ug+1)+ug; 

return zu; 
}