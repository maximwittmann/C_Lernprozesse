#include <stdio.h>

int main(){
  double zuZahlen=2.01, gegeben=2.02, zurueck;
  int anz=0, zur;
  
  zurueck=gegeben-zuZahlen;
  zur=zurueck*100;
  
  printf("zu zahlen: %5.2f\n", zuZahlen);
  printf("Gegeben  : %5.2f\n", gegeben);
  printf("Zurueck  : %5.2f\n\n", zurueck);
  // 500-Euroschein
  while(zur>=50000){
  	zur=zur-50000;
  	anz++;
  }
  if(anz>0){
	  printf("%2i x 500,00 => ", anz);
	  printf("Rest: %.2f\n", (zur/100.0));
      anz=0;
  }

  // 200-Euroschein
  while(zur>=20000){
  	zur=zur-20000;
  	anz++;
  }
  if(anz>0){
	  printf("%2i x 200,00 => ", anz);
	  printf("Rest: %.2f\n", (zur/100.0));
      anz=0;
  }

  // 100-Euroschein
  while(zur>=10000){
  	zur=zur-10000;
  	anz++;
  }
  if(anz>0){
	  printf("%2i x 100,00 => ", anz);
	  printf("Rest: %.2f\n", (zur/100.0));
      anz=0;
  }

  // 50-Euroschein
  while(zur>=5000){
  	zur=zur-5000;
  	anz++;
  }
  if(anz>0){
	  printf("%2i x  50,00 => ", anz);
	  printf("Rest: %.2f\n", (zur/100.0));
      anz=0;
  }


  // 20-Euroschein
  while(zur>=2000){
  	zur=zur-2000;
  	anz++;
  }
  if(anz>0){
	  printf("%2i x  20,00 => ", anz);
	  printf("Rest: %.2f\n", (zur/100.0));
      anz=0;
  }
  
  // 10-Euroschein
  while(zur>=1000){
  	zur=zur-1000;
  	anz++;
  }
  if(anz>0){
	  printf("%2i x  10,00 => ", anz);
	  printf("Rest: %.2f\n", (zur/100.0));
      anz=0;
  }
  
  // 5-Euroschein
  while(zur>=500){
  	zur=zur-500;
  	anz++;
  }
  if(anz>0){
	  printf("%2i x   5,00 => ", anz);
	  printf("Rest: %.2f\n", (zur/100.0));
      anz=0;
  }
  
  // 2-Euromünze  
  while(zur>=200){
  	zur=zur-200;
  	anz++;
  }
  if(anz>0){
	  printf("%2i x   2,00 => ", anz);
  	  printf("Rest: %.2f\n", (zur/100.0)); 
      anz=0;
  }
  // 1-Euromünze
  while(zur>=100){
  	zur=zur-100;
  	anz++;
  }
  if(anz>0){
  	 printf("%2i x   1,00 => ", anz);
  	 printf("Rest: %.2f\n", (zur/100.0)); 
     anz=0;
  }
     
  // 50-Centmünze
  while(zur>=50){
  	zur=zur-50;
  	anz++;
  }
  if(anz>0){
  	 printf("%2i x   0,50 => ", anz);
  	 printf("Rest: %.2f\n", (zur/100.0)); 
     anz=0;
  }

  // 20-Centmünze
  while(zur>=20){
  	zur=zur-20;
  	anz++;
  }
  if(anz>0){
  	 printf("%2i x   0,20 => ", anz);
  	 printf("Rest: %.2f\n", (zur/100.0)); 
     anz=0;
  }
  
    // 10-Centmünze
  while(zur>=10){
  	zur=zur-10;
  	anz++;
  }
  if(anz>0){
  	 printf("%2i x   0,10 => ", anz);
  	 printf("Rest: %.2f\n", (zur/100.0)); 
     anz=0;
  }   

  // 5-Centmünze
  while(zur>=5){
  	zur=zur-5;
  	anz++;
  }
  if(anz>0){
  	 printf("%2i x   0,05 => ", anz);
  	 printf("Rest: %.2f\n", (zur/100.0)); 
     anz=0;
  } 

  // 2-Centmünze
  while(zur>=2){
  	zur=zur-2;
  	anz++;
  }
  if(anz>0){
  	 printf("%2i x   0,02 => ", anz);
  	 printf("Rest: %.2f\n", (zur/100.0)); 
     anz=0;
  } 
  
  // 1-Centmünze
  while(zur>=1){
  	zur=zur-1;
  	anz++;
  }
  if(anz>0){
  	 printf("%2i x   0,01 => ", anz);
  	 printf("Rest: %.2f\n", (zur/100.0)); 
     anz=0;
  }   
  
  return 0;
}
