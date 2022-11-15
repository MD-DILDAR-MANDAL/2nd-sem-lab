#include <stdio.h>

void main(){
	
	//q1 sol
	int  n = 4;
	for(int j = 0;j < n; j++){
		for(int i = 0;i < 6 ;i ++) printf("* ");
	
	printf("\n");
	}
	
	//q2 sol
	int m = 8;
	for(int i = 1;i <= m; i++){
	 	for(int j = 0; j < i; j++){
		printf("*");
} 
	printf("\n");
}

	//q3 sol
	int o = 6;
	for(int i = 1;i < o + 2; i++){
 		for(int j = 1; j < i; j++) {
		printf("%d ",j);
	} 
	printf("\n");
	}
	
	printf("\n\n");
	
	for(int i = o + 1;i > 1; i--){
	 for(int j = 1; j < i; j++) {
		printf("%d ",j);
	} 
	printf("\n");
	}
}
