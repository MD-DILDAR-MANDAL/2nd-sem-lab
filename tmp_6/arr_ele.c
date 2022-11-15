//q1 sol

#include <stdio.h>

//function declaration
void solve(int,int arr[]); 
void main(){
	int n;
	printf("enter no. of elemests\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements\n");
	for(int i = 0;i < n;i ++ )
	scanf("%d",&arr[i]);

	//function call
	solve(n,arr);
}

//function defination
void solve(int n,int arr[]){
	int sum = 0;
	for(int i = 0;i < n;i ++)sum += arr[i];
	printf("%d\n",sum); 
}
