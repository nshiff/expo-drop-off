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

  int result0 = sparc_expo(0);
  int result1 = sparc_expo(1);
  int result2 = sparc_expo(2);
  int result3 = sparc_expo(3);
  int result4 = sparc_expo(4);

  nate_assert(0, result0);
  nate_assert(1, result1);
  nate_assert(2, result2);
  nate_assert(3, result3);
  nate_assert(4, result4);

  return 0;
}