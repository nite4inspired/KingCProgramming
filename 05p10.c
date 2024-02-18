#include <stdio.h>

int main(void) {
  int grade;
  printf("Enter numerical grade: ");
  scanf("%d", &grade);
  switch(grade / 10) {
    case 10: case 9: printf("Letter grade: %c\n", 'A'); break;
    case 8: printf("Letter grade: %c\n", 'B'); break;
    case 7: printf("Letter grade: %c\n", 'C'); break;
    case 6: printf("Letter grade: %c\n", 'D'); break;
    case 5: case 4: case 3: case 2: case 1: case 0: printf("Letter grade: %c\n", 'F');

  }
}