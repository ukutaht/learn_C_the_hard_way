#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.1251;
  char initial = 'A';
  char first_name[] = "Zed";
  char last_name[] = "Shaw";

  printf("You are %d miles away.\n", distance);
  printf("You have %f levels of power.\n", power);
  printf("You have %f levels of superpower.\n", super_power);
  printf("You have an initial %c.\n", initial);
  printf("You have a first name %s .\n", first_name);
  printf("You have a last name %s .\n", last_name);
  printf("Your whole name is  %s %c. %s.\n", first_name, initial, last_name);

  return 0;
}