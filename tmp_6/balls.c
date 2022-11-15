//q2 sol

#include <stdio.h>
void solve(int);
void main(){
	int n;
	printf("enter no. of elements\n");
	scanf("%d",&n);
	solve(n);
}
void solve(int n){
	int arr[n],red = 0,green = 0,blue = 0;
	for(int i = 0;i < n;i ++ )
	scanf("%d",&arr[i]);	
	
	for(int i = 0;i < n ;i ++){
	if(arr[i] == 1)red ++;
	else if(arr[i] == 2)green ++;
	else  blue ++;
	}
	printf("red  %d green  %d blue  %d",red,green,blue);
}
