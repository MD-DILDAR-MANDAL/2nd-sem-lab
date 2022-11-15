//q2 sol
#include<stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	int sum = 0,ans = 0;
	for(int i = 0; i < n; i++ ){
	sum = sum * 10 + 1;
	ans += sum;
	}
	printf("%d",ans);
}
