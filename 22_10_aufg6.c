#include <stdio.h>


int main (){
float a,b,c,d,e,f,z; 
a=5;
b=4+4*(a+3*3);
c=a+b/a+b;
d=-7+c;
e=(b+a)/5-a*2;
f=((c-d)*2-a)/e;
z=c-b/(2*f)-e;

printf(" a=%f, b=%f, %f, %f, %f, %f, %f", a,b,c,d,e,f,z); 
return 0;
}
