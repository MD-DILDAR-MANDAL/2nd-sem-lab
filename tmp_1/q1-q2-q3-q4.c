#include <stdio.h>
void main(){
	
	//q1 sol
	float a = 500.15 , b = 3000.30;
	float c =  b-a;
	int rem = 20 % 13;
	int div = 1567 / 23;
	printf("%d\n%f\n%d\n%d\n",1729 + 2000,c,rem,div);
	
	//q2 sol	
	printf("\n* * * * **");
	printf("\n* * * * **");
	printf("\n* * * * **");
	printf("\n* * * * **");
	
	//q3 sol
	printf("\nEnter length and breadth\n");
	int l,bl;
	scanf("%d%d",&l,&bl);
	printf("\n area: %d",l*bl);
	printf("\n perimeter %d",2*(l+bl));
	
	//q4 sol
	printf("\nEnter mass and acceleration");
	float ms,ac,frc;
	scanf("%f %f", &ms, &ac);
	frc = ms * ac;
	printf("%f",frc);
	printf("\n Force: %f",frc);

}
