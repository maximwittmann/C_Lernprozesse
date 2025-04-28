#include <stdio.h>

int main(){
  double zuZahlen=2.02, gegeben=0, zurueck, mehr;
  int anz=0, zur,fuenfer=50000, zweier=20000, einser=10000;
  
  printf("zu zahlen: %5.2f\n", zuZahlen);
  printf("Gegeben  : %5.2f\n", gegeben);
  
  while(gegeben<zuZahlen){
  	printf("%.2lf => Zu wenig, neue Eingabe: ", gegeben);
  	scanf("%lf",&mehr);
  	gegeben=gegeben+mehr;
  }
  
  zurueck=gegeben-zuZahlen;
  zur=zurueck*100;

  printf("Zurueck  : %5.2lf\n\n", zurueck);
  
while(zur>0){
  anz=zur/fuenfer;  
  zur=zur-(anz*fuenfer); 
  if(anz>0){
	  printf("%2i x %.2lf => ", anz, (fuenfer/100.0));
	  printf("Rest: %.2lf\n", (zur/100.0));
      anz=0;
  }
  
  anz=zur/zweier;  
  zur=zur-(anz*zweier);
    if(anz>0){
	  printf("%2i x %.2lf => ",anz, (zweier/100.0));
	  printf("Rest: %.2lf\n", (zur/100.0));
      anz=0;
  }

  anz=zur/einser;  
  zur=zur-(anz*einser);
    if(anz>0){
	  printf("%2i x %.2lf => ",anz, (einser/100.0));
	  printf("Rest: %.2lf\n", (zur/100.0));
      anz=0;
  }  
  fuenfer=fuenfer/10;
  zweier=zweier/10;
  einser=einser/10;
}  
  
 return 0;
}
