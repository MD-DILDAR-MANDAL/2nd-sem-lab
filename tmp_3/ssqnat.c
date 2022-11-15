//q3 sol
#include<stdio.h>
void main(){
	int n,sum = 0;
	scanf("%d",&n);
	for(; n > 0; n --)sum +=  n * n;
	printf("%d",sum);
}
