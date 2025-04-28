#include <stdio.h>
int main (){
	int i=1,k=1;
//	
//	while(k<=10){
//		printf("%3i*%3i=%3i\n", k,i,(k*i));	
//		i++;
//		if(i>10){
//			k++;
//			i=1;
//		}
//	}
//	
	
/*	Lösung mit FOR-Schleifen
	for(i=1;i<=10;i++){
		for(k=1;k<=10;k++){
			printf("%3i*%3i=%3i\n", k,i,(k*i));
		}
	}
*/	   
	
//	Lösung mit WHILE-Schleifen
    i=1;
	while(i<=10){
		k=1;
		do{
			printf("%3i*%3i=%3i\n", k,i,(k*i));
			k++;
		}while(k<=10);
	    i++;
    }

return 0;
}
