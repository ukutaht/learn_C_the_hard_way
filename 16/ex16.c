#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

struct Person Person_create(char *name, int age, int height, int weight)
{
  struct Person who;

  who.name = name;
  who.age = age;
  who.height = height;
  who.weight = weight;

  return who;
}

void Person_print(struct Person who)
{
  printf("Name: %s\n", who.name);
  printf("\tAge: %d\n", who.age);
  printf("\tHeight: %d\n", who.height);
  printf("\tWeight: %d\n", who.weight);
}

int main(int argc, char *argv[])
{
  struct Person uku = Person_create( "Uku Taht", 19, 193, 82);
  struct Person nathan = Person_create( "Nathan", 23, 191, 84);

  printf("Size of a person is %lu\n", sizeof(struct Person));
  Person_print(uku);
  Person_print(nathan);

  uku.age += 20;
  uku.height -= 2;
  uku.weight += 5;
  Person_print(uku);

  nathan.age += 20;
  nathan.weight += 10;
  Person_print(nathan);

  return 0;
}
