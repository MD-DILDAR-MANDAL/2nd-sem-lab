#include<stdio.h>
void main(){
	int n,sum = 0,sum2=0;
	printf("enter n");
	scanf("%d",&n);
	while(n > 0){
	if(n % 2 == 0)sum += n;
	else sum2 += n;
	n --;
	}
	printf("even sum = %d\n",sum);
	printf("odd sum = %d\n",sum2); 
	
}
