/* Internal swap
 *  internal_swap.c
 */

 #include <stdio.h>

 void internal_swap (int a, int b)
 {
     int c;
 
     printf("a is %d, b is %d\n", a, b);
 
     c = a;
     a = b;
     b = c;
 
     printf("a is %d, b is %d\n", a, b);
 }
 
 int main(void)
 {
     int a, b;
 
     printf("a is ");
     scanf("%d", &a);  //여기는 a,b를 이니셜라이즈 한다 인풋을 통해서, 아니면 우리가 이니셜라이즈 해줘얌.
     printf("b is ");
     scanf("%d", &b);
 
     internal_swap(a, b); // 
 
     printf("After internal_swap:\n"
             "a is %d\n"
             "b is %d\n", a, b);
 
     return 0;
 }