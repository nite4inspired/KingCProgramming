// teenager = age >= 13 ? (age <= 19 ? true : false) : false;

#define true 1
#define false 0
#include <stdio.h>

int main(void) {
  int teenager, age;
  age = 11;
  printf("%d\n", teenager = age >= 13 ? (age <= 19 ? true : false) : false);
  age = 13;
  printf("%d\n", teenager = age >= 13 ? (age <= 19 ? true : false) : false);
  age = 15;
  printf("%d\n", teenager = age >= 13 ? (age <= 19 ? true : false) : false);

}

