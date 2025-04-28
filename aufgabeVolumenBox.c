#include <stdio.h>


int main (){
float a=10,h=0,vol=0,vmax=0,hmax=0,i=0; 
for(h=0; h<5;h+=.01){
	vol=(a-2*h)*(a-2*h)*h; 
		if(vol>vmax){
		vmax=vol; 
		hmax=h;
		}
}
printf("\nh: %.2f V: %.2f cm^2",hmax,vmax); 
return 0;
}
