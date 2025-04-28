#include <stdio.h>

int main(){
  double zuZahlen=2.02, gegeben=2000, zurueck;
  int anz=0;
  
  zurueck=gegeben-zuZahlen;
  
  printf("zu zahlen: %5.2f\n", zuZahlen);
  printf("Gegeben  : %5.2f\n", gegeben);
  printf("Zurueck  : %5.2f\n\n", zurueck);

  // 500-Euroschein
  while(zurueck>=500){
  	zurueck=zurueck-500;
  	anz++;
  }
  if(anz>0){
	  printf("%2i x 500,00 => ", anz);
	  printf("Rest: %.2f\n", zurueck);
      anz=0;
  }

  // 200-Euroschein
  while(zurueck>=200){
  	zurueck=zurueck-200;
  	anz++;
  }
  if(anz>0){
	  printf("%2i x 200,00 => ", anz);
	  printf("Rest: %.2f\n", zurueck);
      anz=0;
  }

  // 100-Euroschein
  while(zurueck>=100){
  	zurueck=zurueck-100;
  	anz++;
  }
  if(anz>0){
	  printf("%2i x 100,00 => ", anz);
	  printf("Rest: %.2f\n", zurueck);
      anz=0;
  }

  // 50-Euroschein
  while(zurueck>=50){
  	zurueck=zurueck-50;
  	anz++;
  }
  if(anz>0){
	  printf("%2i x  50,00 => ", anz);
	  printf("Rest: %.2f\n", zurueck);
      anz=0;
  }


  // 20-Euroschein
  while(zurueck>=20){
  	zurueck=zurueck-20;
  	anz++;
  }
  if(anz>0){
	  printf("%2i x  20,00 => ", anz);
	  printf("Rest: %.2f\n", zurueck);
      anz=0;
  }
  
  // 10-Euroschein
  while(zurueck>=10){
  	zurueck=zurueck-10;
  	anz++;
  }
  if(anz>0){
	  printf("%2i x  10,00 => ", anz);
	  printf("Rest: %.2f\n", zurueck);
      anz=0;
  }
  
  // 5-Euroschein
  while(zurueck>=5){
  	zurueck=zurueck-5;
  	anz++;
  }
  if(anz>0){
	  printf("%2i x   5,00 => ", anz);
	  printf("Rest: %.2f\n", zurueck);
      anz=0;
  }
  
  // 2-Euromünze  
  while(zurueck>=2){
  	zurueck=zurueck-2;
  	anz++;
  }
  if(anz>0){
	  printf("%2i x   2,00 => ", anz);
  	  printf("Rest: %.2f\n", zurueck); 
      anz=0;
  }
  // 1-Euromünze
  while(zurueck>=1){
  	zurueck=zurueck-1;
  	anz++;
  }
  if(anz>0){
  	 printf("%2i x   1,00 => ", anz);
  	 printf("Rest: %.2f\n", zurueck); 
     anz=0;
  }
     
  // 50-Centmünze
  while(zurueck>=0.5){
  	zurueck=zurueck-0.5;
  	anz++;
  }
  if(anz>0){
  	 printf("%2i x   0,50 => ", anz);
  	 printf("Rest: %.2f\n", zurueck); 
     anz=0;
  }

  // 20-Centmünze
  while(zurueck>=0.2){
  	zurueck=zurueck-0.2;
  	anz++;
  }
  if(anz>0){
  	 printf("%2i x   0,20 => ", anz);
  	 printf("Rest: %.2f\n", zurueck); 
     anz=0;
  }
  
    // 10-Centmünze
  while(zurueck>=0.1){
  	zurueck=zurueck-0.1;
  	anz++;
  }
  if(anz>0){
  	 printf("%2i x   0,10 => ", anz);
  	 printf("Rest: %.2f\n", zurueck); 
     anz=0;
  }   

  // 5-Centmünze
  while(zurueck>=0.05){
  	zurueck=zurueck-0.05;
  	anz++;
  }
  if(anz>0){
  	 printf("%2i x   0,05 => ", anz);
  	 printf("Rest: %.2f\n", zurueck); 
     anz=0;
  } 

  // 2-Centmünze
  while(zurueck>=0.02){
  	zurueck=zurueck-0.02;
  	anz++;
  }
  if(anz>0){
  	 printf("%2i x   0,02 => ", anz);
  	 printf("Rest: %.2f\n", zurueck); 
     anz=0;
  } 
  
  // 1-Centmünze
  while(zurueck>=0.0){
  	zurueck=zurueck-0.01;
  	anz++;
  }
  if(anz>0){
  	 printf("%2i x   0,01 => ", anz);
  	  printf("Rest: 0.00\n"); 
     anz=0;
  }   
  
  return 0;
}
