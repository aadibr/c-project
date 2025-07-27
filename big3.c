#include <stdio.h>
void biggest3()
{
    int a, b, c;

    printf("Enter the numbers a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Finding max using compound expressions
    if (a >= b && a >= c)
        printf("%d is the largest number.", a);
    else if (b >= a && b >= c)
        printf("%d is the largest number.", b);
    else
        printf("%d is the largest number.", c);

    //return 0;
 }
