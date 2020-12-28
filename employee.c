#include<stdio.h>
#include<conio.h>
#include<string.h>
struct org
{
char name [30];
int emp_ph,salary,age;
};
void main()
{
struct org employee[20];
int i,n;
printf("\n enter the number of employeed in your organization : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n name : \t employee age : \t employee salary : \t employee phone number \n",i+1);
scanf("%s%d%d%d",&employee[i].name,&employee[i].age,&employee[i].salary,&employee[i].emp_ph);
}
for(i=0;i<n;i++)
{
printf("\n %s \t %d \t %d \t %d \t ",i+1,employee[i].name,employee[i].age,employee[i].salary,employee[i].emp_ph);
}
getch();
}
