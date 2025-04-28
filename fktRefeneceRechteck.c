#include <stdio.h>
#include <math.h>
float rechteck(float a,float b,float *u,float* f){
	*u = 2 * (a+b);
	*f = a * b;
     float d=sqrt(a*a + b*b);
     return d;
}
int main(){
  float a=5, b=6, umf, fla, diag;	
 
  diag=rechteck(a,b,&umf,&fla);	//umf,fla=Call by reference
  
  printf("Umfang des Rechtecks aus %.1f und %.1f = %.1f,\n",a,b,umf);
  printf("die Fl\204che betr\204gt %.1f,\n", fla);
  printf("die Diagonale hat %.1f.", diag);
  	 
  return 0;
}
