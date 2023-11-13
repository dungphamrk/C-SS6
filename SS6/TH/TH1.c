#include <stdio.h>
int main(){
  int sum = 0;
  printf("Cac so nguyen chan trong khoang 1 - 10 la: \n"); 
  for(int i = 1; i < 10; i++) {
    if(i % 2 == 0) {
      printf("%d\t",i);
      sum += i;
    }
  }
  printf("\nTong cac so chan trong khoang 1 - 10 la: %d\n", sum);
}