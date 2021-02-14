#include<stdio.h>
typedef struct student
{
	int id;
	char name[20],sub[200];
	int marks,math,eng,sci;
}std;

void input(v1)
{
	int i,n,Subjects, math, eng, sci;
	printf("Enter number of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter Details:\n");
	printf("Enter name of the student:\t");
	scanf("%s",v[i].name);
	printf("Enter students id:\t");
	scanf("%d",&v[i].id);
	printf("Marks scored in all subjects\t");
	}
	{
	printf("Enter total marks scored in mathematics:\t");
	scanf("%d",&math);
	printf("Enter total marks scored in English:\t");
	scanf("%d",&eng);
	printf("Enter total marks scored in Science:\t");
	scanf("%d",&sci);
	}
}



int addition(add)
{
	v[i].marks=math+eng+sci;
	printf("Total marks scored by the student:%d",total);
	
}


int main()
{
	


int display(d1)
{
	printf("Display the students details:  \n");
	for(i=0;i<n;i++)
	{
	printf("Name of the student  %s\n",v[i].name);
	printf("Enter students id: %d\t",v[i].id);
	printf("Total marks scored %d  ",v[i].marks);
	}
}

	




