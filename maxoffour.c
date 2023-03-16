#include <stdio.h>

int main() {
  int num1, num2, num3, num4;
  int max;

  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);
  printf("Enter the third number: ");
  scanf("%d", &num3);
  printf("Enter the fourth number: ");
  scanf("%d", &num4);

  if (num1 >= num2 && num1 >= num3 && num1 >= num4) {
    max = num1;
  } else if (num2 >= num1 && num2 >= num3 && num2 >= num4) {
    max = num2;
  } else if (num3 >= num1 && num3 >= num2 && num3 >= num4) {
    max = num3;
  } else {
    max = num4;
  }

  printf("The largest number is %d\n", max);

  return 0;
}
