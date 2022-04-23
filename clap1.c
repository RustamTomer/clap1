#include <stdio.h>
int main() {
  int a,i,n,decision=0;
  printf("Enter number to be checked:");
  scanf("%d",&a);
  n=a/2;
  for(i=2;i<=n;i++){
    if(a%i==0){
      printf("Number is composite");
      decision=1;
      break;
    }
  }
  if(decision==0)
    printf("Number is prime")
    return 0;
}
