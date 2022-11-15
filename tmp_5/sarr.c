//q1 sol
#include<stdio.h>
void main(){
	printf("enter 10 integer \n");
	int arr[10],sum = 0;
	for(int i = 0;i < 10;i ++){
	scanf("%d",&arr[i]);
	} 
	for(int i = 0;i < 10;i++)sum += arr[i]; 
	printf("%d",sum);	
}
