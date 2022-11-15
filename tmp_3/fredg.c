//q4 sol
#include<stdio.h>
void main(){
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	
	int arr[10];
	for(int i = 0;i < 10;i++)arr[i] = 0;

	while(n > 0){
			int r = n % 10;
			n = n / 10;
			arr[r]++;
			}

	for(int i = 0; i < 10;i++) {
		if(arr[i] != 0) printf("%d -- %d \n",i,arr[i]);
	}

}
