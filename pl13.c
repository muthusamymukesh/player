#include<stdio.h>
void main() {
   int a,b,c,d,e,f ;
  printf("Enter the value :");
  scanf("%d",&a);
  if(a!=0)
  {
      b=a%10;
      c=a/10;
      d=c%10;
      e=c/10;
      f=(b^2)+(d^2)+(e^2);
      printf("The sum of square of digites :%d",f);
  }
}
