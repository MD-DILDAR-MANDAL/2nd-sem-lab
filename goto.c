#include <stdio.h>
#include <math.h>
void main(){
	float x, y;
	read :
	printf("enter a number:");
	scanf("%f", &x);
	if(x < 0) goto read;
	y = sqrt(x);
	printf("%f",y);
}
