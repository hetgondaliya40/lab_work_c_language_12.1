/*Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_standard
- stu_school*/

#include<stdio.h>
#include<string.h>

struct student{
int id;
char name[100];
int age;
char course[100];
char city[100];
int std;
char school[100];
};

void main(){

struct student s;
struct student s2;
struct student s3;
printf("_______STUDENT1_______\n\n");

printf("Enter id: ");
scanf("%d",&s.id);
printf("Enter Name: ");
scanf("%s",&s.name);
printf("Enter Age: ");
scanf("%d",&s.age);
printf("Enter Course: ");
scanf("%s",&s.course);
printf("Enter City: ");
scanf("%s",&s.city);
printf("Enter Std: ");
scanf("%d",&s.std);
printf("Enter School name: ");
scanf("%s",&s.school);


printf("Id is %d\n",s.id);
printf("Name is %s\n",s.name);
printf("Age is %d\n",s.age);
printf("Corse is %s\n",s.course);
  printf("City name is %s\n",s.city);
printf("Std is %d\n",s.std);
printf("school name is %s\n",s.school);

printf("_______STUDENT2_______\n\n");


printf("Enter id: ");
scanf("%d",&s2.id);
printf("Enter Name: ");
scanf("%s",&s2.name);
printf("Enter Age: ");
scanf("%d",&s2.age);
printf("Enter Course: ");
scanf("%s",&s2.course);
printf("Enter City: ");
scanf("%s",&s2.city);
printf("Enter Std: ");
scanf("%d",&s2.std);
printf("Enter School name: ");
scanf("%s",&s2.school);


printf("Id is %d\n",s2.id);
printf("Name is %s\n",s2.name);
printf("Age is %d\n",s2.age);
printf("Corse is %s\n",s2.course);
  printf("City name is %s\n",s2.city);
printf("Std is %d\n",s2.std);
printf("school name is %s\n",s2.school);


printf("_______STUDENT3_______\n\n");

printf("Enter id: ");
scanf("%d",&s3.id);
printf("Enter Name: ");
scanf("%s",&s3.name);
printf("Enter Age: ");
scanf("%d",&s3.age);
printf("Enter Course: ");
scanf("%s",&s3.course);
printf("Enter City: ");
scanf("%s",&s3.city);
printf("Enter Std: ");
scanf("%d",&s3.std);
printf("Enter School name: ");
scanf("%s",&s3.school);


printf("Id is %d\n",s3.id);
printf("Name is %s\n",s3.name);
printf("Age is %d\n",s3.age);
printf("Corse is %s\n",s3.course);
  printf("City name is %s\n",s3.city);
printf("Std is %d\n",s3.std);
printf("school name is %s\n",s3.school);

}

