// This program prints odd numbers from 1 to N

#include <stdio.h>
int main () {
    int N, x = 1;
  printf("Enter the value of N:  ") ;
  scanf("%d", &N) ;
  for (x = 1; x<=N; x = x+2){
    printf("%d\n", x);

  }
  return 0;
}