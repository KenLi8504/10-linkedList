#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct student{
  int sleep;
  double gpa;
  char mood[10];
  struct student *next;
};

void print_list (struct student * stu){
  if (stu == NULL){
    return;
  }
    printf("This student got %d hours of sleep on average.\n",stu -> sleep);
    printf("This student's gpa is %lf.\n",stu -> gpa);
    printf("This student is feeling %s.\n",stu -> mood);
    print_list(stu -> next);
}

struct student * insert_front(struct student * firstStu,int hours, double grade, char mentalState []){
  struct student *newStu = malloc(sizeof(struct student));
  newStu -> sleep = hours;
  newStu -> gpa = grade;
  strcpy(newStu -> mood,mentalState);
  newStu -> next = firstStu;
  return newStu;
}

struct student * makeStudent(int hours,double grade, char mentalState[]){
  struct student *stu = malloc(sizeof(struct student));
  stu -> sleep = hours;
  stu -> gpa = grade;
  stu -> next = NULL;
  strcpy(stu -> mood,mentalState);
  return stu;
}

struct student *free_list(struct student * lastStu){
  while (lastStu != NULL){
    struct student *placeholder = lastStu -> next;
    free(lastStu);
    lastStu = placeholder;
  }
  return lastStu;
}

int main(){
  printf("This is the list of students \n");
  struct student * example1 = makeStudent(10,99,"Happy");
  struct student * example2 = insert_front(example1,5,90,"Sad");
  struct student * example3 = insert_front(example2,3,100,"Exhausted");
  struct student * example4 = insert_front(example3,0,100,"No emotions");
  struct student * example5 = insert_front(example4,8,80,"Depressed");
  print_list(example5);

  printf("\nThis is the list, now all released\n");
  struct student * example6 = free_list(example5);
  print_list(example6);
}
