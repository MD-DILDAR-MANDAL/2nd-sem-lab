//q5 sol
#include <stdio.h>
void main(){
    printf("Enter weight and height");
    int wt, ht;
    scanf("%d%d",&wt,&ht);
    float bmi = wt / (ht * ht);
    printf("\nbmi: %f", bmi);
    if(bmi <= 18.5) printf("\nunderweight");
    else if(bmi < 24.9 && bmi >= 18.5) printf("\nnormal weight");
    else if(bmi >= 25 && bmi < 29.9) printf("\noverweight"); 
    else if(bmi = 30) printf("\nobesity");
}
