#include <stdio.h>

void main(){
    int p, n ,r;
    printf("enter p , n , r");
    scanf("%d%d%d", &p, &n , &r);
    float sint = (p * n * r)/100;
    printf("required simple interest: %f",sint);

}