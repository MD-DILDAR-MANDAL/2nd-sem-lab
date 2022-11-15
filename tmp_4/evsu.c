#include<stdio.h>
void main(){
	int n,sum = 0,sum2=0;
	printf("enter n");
	scanf("%d",&n);
	for(int i = 1; i <= n;i ++){
	if(i % 2 == 0)sum += i;
	else sum2 += i;
	}
	printf("even sum = %d\n",sum);
	printf("odd sum = %d\n",sum2); 
	
}
