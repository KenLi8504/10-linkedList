#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "list.h"
int main(){
  printf("This is the list of students \n");
  struct student * example1 = NULL;
  example1 = insert_front(example1,1,90,"Sad");
  example1 = insert_front(example1,2,100,"Exhausted");
  example1 = insert_front(example1,3,100,"No emotions");
  example1 = insert_front(example1,4,80,"Depressed");
  print_list(example1);

  printf("\nTesting remove_node.\n");
  printf("\nThis should do nothing.\n");
  example1 = remove_node(example1,5,80,"Depressed");
  print_list(example1);

  printf("\nThis should do nothing.\n");
  example1 = remove_node(example1,4,80,"Happy");
  print_list(example1);

  printf("\nThis should do nothing.\n");
  example1 = remove_node(example1,4,70,"Sad");
  print_list(example1);

  printf("\nThis should remove the four hours of sleep man and make 3 hour man first.\n");
  example1 = remove_node(example1,4,80,"Depressed");
  print_list(example1);

  printf("\nThis should remove the new first guy, the 3 hour of sleep man\n");
  example1 = remove_node(example1,3,100,"No emotions");
  print_list(example1);

  printf("\nThis should remove the guy at the end, the one hour of sleep guy\n");
  example1 = remove_node(example1,1,90,"Sad");
  print_list(example1);

  printf("\nThis should remove the last guy in the list, the two hour of sleep guy\n");
  example1 = remove_node(example1,2,100,"Exhausted");
  print_list(example1);
}
