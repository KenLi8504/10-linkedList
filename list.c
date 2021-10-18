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

// struct student * remove_node(struct student *front,int hours,double grade, char mentalState[]){
//   if (lastStu != NULL){
//     struct student *placeholder = lastStu -> next;
//   }
// }

struct student *free_list(struct student * lastStu){
  while (lastStu != NULL){
    struct student *placeholder = lastStu -> next;
    free(lastStu);
    lastStu = placeholder;
  }
  return lastStu;
}

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
}
