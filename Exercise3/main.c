#include <stdio.h>
#include <string.h>

void print_possible_strings(char* str, int length, char* result, int index);
int main(void) {
  char str[100];
  printf("Enter a string: ");
  scanf("%s", &str);
  int length = strlen(str);
  char result[length + 1];
  printf("The length of the string is: %d\n", length);
  print_possible_strings(str, length, result, 0);
  return 0;
}

void print_possible_strings(char* str, int length, char* result, int index) {
  int i;
  if (index > 0) {
    result[index] = '\0';
    printf("%s\n", result);
  }
  if (index == length) return;
  for (i = 0; i < length; i++) {
    result[index] = str[i];
    print_possible_strings(str, length, result, index + 1);
  }
}
