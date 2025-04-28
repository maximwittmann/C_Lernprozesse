#include <stdio.h>
float brutto(float); 
int main (){
	float wert, mw; 
printf("Geben sie den Geldbetrag ein: "); 
scanf("%f",&wert); 
mw=brutto(wert); 
printf("\nBei einem Bruttokaufpreis von %.2f EUR betr\204gt die Mwst.: %.2f EUR",wert,mw);


return 0;
}

float brutto(float x){
	float mwst; 
	mwst = (x*19)/119; 
	return mwst; 
}