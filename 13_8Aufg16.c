#include <stdio.h>
#include <math.h>
void kreis(float r,float *d,float *u,float *a,float *o,float *v){
	*d = 2* r; 
	*u = 2* M_PI * r; 
	*a = M_PI * pow(r,2); 
	*o= 4*M_PI* pow(r,2); 
	*v= (4/3.0)*M_PI*pow(r,3); 
}

int main (){
float r,d,u,a,o,v;
printf("radius: "); 
scanf("%f",&r);  
kreis(r,&d,&u,&a,&o,&v); 
printf("Durchmesser: %.2f, Umfang: %.2f, Flaeche: %.2f, Oberflache: %.2f", d, u, a,o); 
printf(" Volumen: %.2f",v); 
return 0;
}
