#include <stdio.h>

int main(){
    int a, b, c, IsATriangle;

    //Function 1: Get Input
    printf("Enter 3 sides (intergers) of a triangle\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    printf("Side A is %d\n", a);
    printf("Side B is %d\n", b);
    printf("Side C is %d\n", c);

    //Function 2: Is a Triangle?
    if((a < b + c) && (b < a + c) && (c < a + b))
        IsATriangle = 1;
    else IsATriangle = 0;

    //Function 3: Determine Triangle Type if(IsATriangle)
    if(IsATriangle)
        if((a == b) && (b == c))
            printf("Triangle is Equilateral");
        else if((a != b) && (a != c) && (b != c))
            printf("Triangle is Scalene");
        else printf("Triangle is Isosceles");
    else printf("Not a Triangle");

    return 0;
    system("pause");
}