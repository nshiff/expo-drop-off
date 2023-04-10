#include exp_drop_off.s
#include <stdio.h>

int nate_assert(int expected, int actual){
  

  if(expected == actual){
    printf("match - %d == %d", expected, actual);
  }
  else{
    printf("testfail - %d != %d", expected, actual);
  }

  return 0;
}

int main(){
  printf("hello, world\n");

  int result0 = exp_drop_off(0);
  int result1 = exp_drop_off(1);
  int result2 = exp_drop_off(2);
  int result3 = exp_drop_off(3);
  int result4 = exp_drop_off(4);

  nate_assert(0, result0);
  nate_assert(1, result1);
  nate_assert(2, result2);
  nate_assert(3, result3);
  nate_assert(4, result4);

  return 0;
}