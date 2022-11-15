//q2 sol
#include<stdio.h>
void main(){
	printf("enter size and elements \n");
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i < n;i ++){
	scanf("%d",&arr[i]);
	} 
	for(int i = n-1;i >= 0;i --){ 
	printf("%d\n",arr[i]);
	}
}
