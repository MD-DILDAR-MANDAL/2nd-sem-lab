#include <stdio.h>
void main(){
	int n1 = 2020,n2 = 3020;
	int ans = (n2 - n1) / 4;
	printf("%d\n",ans);

	for(int i = n1 + 1,j = 1;i < n2;i++){
		if(i % 4 == 0){
			printf("%d. %d \n",j,i);
			j++;
			
		}
	}
}
