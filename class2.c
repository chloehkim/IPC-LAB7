/* Swapping values using a function
 *  swap.c
 */

 #include <stdio.h>

 void swap(int *p, int *q)
 {
     int c;
 
     c = *p;
     *p = *q;
     *q = c;
 }
 
 int main(void)
 {
     int a, b;
 
     printf("a is ");
     scanf("%d", &a);
     printf("b is ");
     scanf("%d", &b);
 
     swap(&a, &b);
 
     printf("After swap:\n"
             "a is %d\n"
             "b is %d\n", a, b);
 
     return 0;
 }