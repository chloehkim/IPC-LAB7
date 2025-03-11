/* Swapping values using a function
 *  swap.c
 */

 #include <stdio.h>

 void swap(int *p, int *q)  //들어온 &a, &b는 포인터 p(*p),와 q(*q)에 저장된다. 
 {
     int c;
 
     c = *p; // *p = &a main() 에 저장된 숫자가 c에 저장
     *p = *q; // *q = &b main( )에 저장된 숫자가 *p에 저장 
     *q = c; // 새로 저장된 c는 *q에 저장된다. 
 } //return이 없어도 이미 포인터를 사용했기때문에 각 address에 저장된 변수는 바뀐다. 이것은 main ()에도 영향을 미침.
  
 int main(void)
 {
     int a, b;
 
     printf("a is ");
     scanf("%d", &a); //user가 입력한 숫자는 a에 저장된다
     printf("b is ");
     scanf("%d", &b); //user가 입력한 숫자는 b에 저장된다.
 
     swap(&a, &b); //그냥 a,b가 아닌 &a, &b가 들어가면 a,b의 메모리 주소가 들어간다. 
 
     printf("After swap:\n"
             "a is %d\n"
             "b is %d\n", a, b);
 
     return 0;
 }