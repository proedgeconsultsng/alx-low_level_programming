#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
  char password[PASSWORD_LENGTH + 1] = {0};
  char valid_characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  int i;

  srand(time(NULL));

  for (i = 0; i < PASSWORD_LENGTH; i++) {
    password[i] = valid_characters[rand() % (sizeof(valid_characters) - 1)];
  }

  printf("%s\n", password);

  return 0;
}

