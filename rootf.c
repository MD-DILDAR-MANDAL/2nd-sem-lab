/*program to find the roots of a quadratic equation*/
#include <stdio.h>
#include <math.h>

void main(){
	int a, b, c;
	float x1, x2;
	printf("enter the values of a, b, c: ");
	scanf("%d %d %d",&a,&b,&c);
	int d = b * b - 4 * a * c;
	if(d >= 0){
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b-sqrt(d)) / 2 * a;
		printf("\n root 1: %f root 2: %f \n" , x1, x2);
	}else  printf("\n imaginary \n");
}
