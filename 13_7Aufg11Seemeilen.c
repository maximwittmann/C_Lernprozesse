#include <stdio.h>
float seeM(float km);

int main (){
float kiloM, seeMei, geschw=4;
int t=10;
printf("KM:"); 
scanf("%f",&kiloM); 
seeMei=seeM(kiloM); 
printf("\n%.2f Km entspricht: %.2f Seemeilen",kiloM,seeMei); 
//1 Grog pro stunde 10m Seemansgarn

return 0;
}
float seeM(float km){
	float sm; 
	sm= km/1.852; 
	return sm;
}