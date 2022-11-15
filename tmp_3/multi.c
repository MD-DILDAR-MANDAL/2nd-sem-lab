//q1 sol
#include <stdio.h>

void main(){
	
int n;
printf("enter any integer");
scanf("%d",&n);

for(int i = 1;i <= 10 ;i++ ){
	int tmp = i * n;
	printf("%d * %d = %d\n", n, i ,tmp);
	}
}
