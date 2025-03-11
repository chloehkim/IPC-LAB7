/* Internal swap
 *  internal_swap.c
 */

 #include <stdio.h>. //처음 *쓰면 포인터고 그다음에 사용하면 그 주소에 저장된 밸류를 의미한다.

 void internal_swap (int a, int b)
 {
     int c;
 
     printf("a is %d, b is %d\n", a, b);
 
     c = a;
     a = b;
     b = c;
 
     printf("a is %d, b is %d\n", a, b);
 }  //return function을 사용하지 않는 이유는 multiful return을 받을 수 없기 때문에 포인터를 사용해서 그 변수를 바꾸어준다. 
 
 int main(void)
 {
     int a, b;
 
     printf("a is ");
     scanf("%d", &a);  //여기는 a,b를 이니셜라이즈 한다 인풋을 통해서, 아니면 우리가 이니셜라이즈 해줘얌.
     printf("b is ");
     scanf("%d", &b);
 
     internal_swap(a, b); // 그 밸류만 들어가지 이 함수에 들어가면 새로운 a,b address에 밸류가 저장된다.... ?
 
     printf("After internal_swap:\n"
             "a is %d\n"
             "b is %d\n", a, b);
 
     return 0;
 }