
#ifndef STUDENT_H_
#define STUDENT_H_

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

char mo ;

typedef struct{
char name[20];
char phone [11];
int  age;
}person;

struct student
{
    char name[20];
    char address[30];
    char grade;
    int  n_of_pro ;
    int  age;
    int  Class;
    int ID ;
    person father ;
    person mother ;
    person *brathers;
};

void file1_student(void);
void student_print(void);
void student_printByRef(const struct student* ps);
void student_printArr(const struct student* ps,int size);
void add_student(void);
void student_scanByRef(struct student* ps);
int student_findMaxAge ( struct student* arr,int size);
void bubbleSortAge( struct student* arr,int size);
void swap_student(struct student*s1,struct student* s2);
void bubbleSortAgeStudent( struct student* arr,int size);


#endif // STUDENT_H_


