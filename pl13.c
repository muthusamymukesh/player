#include<stdio.h>
#include<math.h>
void main() {
   int a,b,c,i,d,e,f=0 ;
  printf("Enter the size of value :");
  scanf("%d",&e);
  printf("Enter the value :");
  scanf("%d",&a);
  for(i=0;i<e;i++)
  {
      b=a%10;
        f=f+pow(b,2);
      c=a/10;
  }
      printf("%d",f);
}
