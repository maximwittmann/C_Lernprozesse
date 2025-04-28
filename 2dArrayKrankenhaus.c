#include <stdio.h>
#include <stdlib.h>
#include <time.h>		
#define UG 1			
#define OG 10
#define MONAT 12
#define KLASSE 6

int main (){
int pflege[MONAT][KLASSE]={0}, i,k,m=0,w=0,zaehler=0,m1=0,m2=0,m3=0,kl=0, mmax=0,fmin=0,mon=0;
	//Tabelle 
	  srand(time(NULL));
		printf(" \nPflegekl.:   1    |    2    |    3   ");
		printf("\nGeschl.:   m | w  |  m |  w |  m |  w\n");
		printf("       --------------------------------\n");
	for(i=0;i<MONAT;i++){
		printf("Monat %2i:",i+1);
	  	for(k=0;k<KLASSE;k++){
	  	pflege[i][k]=rand()%(OG-UG+1)+UG;
	  	printf("%3i |",pflege[i][k]);
		}  
		printf(" \n");
	}
	printf(" \nBelegung Pro Monat gesamt:\n");
//Belegung je Monat
	for(i=0;i<MONAT;i++){
		zaehler=0; 
		printf("Monat %2i:",i+1);
	  	for(k=0;k<KLASSE;k++){
	  	zaehler=zaehler+pflege[i][k];
		}  
		printf("%3i ",zaehler);
		printf(" \n");
	}
//Ausgabe alle männlichen und weibl. Patienten Jan-Dez	
	m=0; 
	w=0; 
	for(i=0;i<MONAT;i++){
	  	for(k=0;k<KLASSE;k++){
	  		if(k%2==0){
			m=m+pflege[i][k];
			}
			else{
			w=w+pflege[i][k];
			}
		}
	}
printf("\nm\204nnlich gesamt: %i, weiblich gesamt: %i\n",m,w); 

//Aufg c Monat abfrage Ausgabe insgesamt
	printf("\ngeben Sie den gesuchten Monat ein: ");
	scanf("%i",&i); 
	while(i<0 || i>12){
		printf("Nur zwischen 1 -12: ");
		scanf("%i",&i);} 
		printf("Monat %2i:",i);
		zaehler =0; 
	  	for(k=0;k<KLASSE;k++){
	  	printf("%3i |",pflege[i-1][k]);
	  	zaehler=zaehler+pflege[i-1][k];
		}  
		printf(" Gesamt: %3i ",zaehler);
		printf(" \n");

//Aufgabe d: Belegung Pflegeklasse
	printf("\nPflegeklasse 2:");
	printf("\nMonat:     m |  w\n"); 
	printf("-------------------\n");
	for(i=0;i<MONAT/2;i++){
		printf("Monat %2i:",i+1);
	  	for(k=2;k<=3;k++){
	  	printf("%3i |",pflege[i][k]);
		} 
		printf(" \n"); 
		}
		
//Aufgabe e Anzahl männliche Pat. 2. Quartal 
	m=0; 
	for(i=4;i<7;i++){
	  	for(k=0;k<KLASSE;k++){
	  		if(k%2==0){
			m=m+pflege[i][k];
			}
		}
	}
	printf("\nAnzahl m\204nnlich 2.Quartal: %3i Patienten\n",m); 
	//Aufgabe f weibl. Pat. Pflegeklasse 1+2 
	w=0; 
	for(i=0;i<MONAT;i++){
	  	for(k=1;k<KLASSE-1;k+=2){
			w=w+pflege[i][k];
		}
	}
	printf("\nAnzahl weibliche Pat. Pflegeklasse 1+2: %3i Patienten\n",w);
	//aufgabe g männli. pat. november 
		m=0; 
	  	for(k=0;k<KLASSE;k+=2){
			m=m+pflege[10][k];
		}
	printf("\nm\204nnlich November: %i\n",m);
	
//Aufgabe h Pflegeklasse mit meisten Männern 
	m1=0; 
	m2=0;
	m3=0;
	for(i=0;i<MONAT;i++){
		m1=m1+pflege[i][0];			
		m2=m2+pflege[i][2];
		m3=m3+pflege[i][4];
	}
printf("\nm\204nnlich Pflegeklasse 1: %i",m1);
printf("\nm\204nnlich Pflegeklasse 2: %i",m2); 
printf("\nm\204nnlich Pflegeklasse 3: %i",m3);  
mmax=m1; 
kl=1; 
if(m2>mmax){
	mmax=m2; 
	kl=2; 
}
else if(m3>mmax){
	m3=mmax;
	kl=3;  
}
printf("\ndie meisten m\204nnlichen Pat. sind Pflegeklasse %i: %3i Patienten\n",kl,mmax); 

//Aufgabe i meiste Männer wenigsten Frauen  
	m=0; 
	mmax=0;
	k=0;
	for(i=0;i<MONAT;i++){
		m=0;
	  	for(k=0;k<KLASSE;k+=2){
			m=m+pflege[i][k];
		}
		if(m>mmax){
			mmax = m;
			mon=i+1;  	
		}
	}
	printf("die meisten M\204nner waren im Monat: %i Anzahl:%i",mon,mmax);

	mon=0;	
	for(i=0;i<MONAT;i++){
	w=0;
	fmin=w=pflege[0][0];
		for(k=1;k<KLASSE;k+=2){
			w=w+pflege[i][k];
		}
			if(fmin<w){
			fmin=w;
			mon=i+1; 
			}
	}
	printf("\ndie wenigsten Frauen waren im Monat: %i Anzahl:%i",mon,fmin);
	/*for(k=0;k<KLASSE;k+=2){	
	m=0;
	for(i=0;i<MONAT;i++){
			m=m+pflege[i][k]; //m kl 1
			//w=w+pflege[i][1]; //w kl 1
		}printf("%i  %i\n",k,m); 
		}*/
return 0;
}
