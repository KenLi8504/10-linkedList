#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "list.h"
int main(){
  printf("This is the list of students \n");
  struct student * example1 = NULL;
  example1 = insert_front(example1,5,90,"Sad");
  example1 = insert_front(example1,3,100,"Exhausted");
  example1 = insert_front(example1,0,100,"No emotions");
  example1 = insert_front(example1,8,80,"Depressed");
  print_list(example1);

  printf("\nThis is the list, now all released\n");
  example1 = free_list(example1);
  print_list(example1);
}
