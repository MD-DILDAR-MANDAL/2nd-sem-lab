#include <stdio.h>

void main(){
    int l, b ,ar ,pr;
    printf("enter length and breadth");
    scanf("%d%d", &l, &b);
    ar = l * b;
    pr = 2 * (l + b);
    printf("area: %d perimeter: %d",ar,pr);

}