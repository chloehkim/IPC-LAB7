#include <stdio.h>

int main(void)
{
    int x;
    int *p = &x;

    printf("Enter x :  ");
    scanf("%d, &x");
    printf("Value stroed in x:  %d\n", *p);
    printf("Address of x.    :  %p\n", p);

    return 0;
}