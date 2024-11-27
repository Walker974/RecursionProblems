#include <stdio.h>
#include <math.h>

int is_palindrome(int number);
int main(void) {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  if (is_palindrome(number)) {
    printf("%d is a palindrome.\n", number);
  } else {
    printf("%d is not a palindrome.\n", number);
  }
}

int is_palindrome(int number) {
  int i;
  if (number < 10) return 1;
  int last_digit = number % 10;
  int digits = (int)log10(number);
  int first_digit = number / (int)pow(10, digits);
  if (first_digit != last_digit) return 0;
  number = (number % (int)pow(10, digits)) / 10;
  return is_palindrome(number);
}
