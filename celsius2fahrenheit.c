/*
Liste der Umrechnungswerte von Celsius in Fahrenheit
(F=C°*1,8+32) von -50° bis +70° Celsius in 5°-Schritten.
*/

#include <stdio.h>

int main(){
  int c,f;
  for(c=-50;c<=70;c=c+5)	{	//c=c+5
	f=c*1.8+32;			//F=C*1,8+32
    printf("\t%+3i C\t=\t%4i F\n", c,f);
  }
}









