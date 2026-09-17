#include<stdio.h>
#include<string.h>

#define SUBJECTS 5

struct Student
{
	char name[50];
	int age;
	char course[30];
	
	int studyHours;
	int confidence;
	int intrest;
	
	char subjectName[SUBJECTS][30];
	int score[SUBJECTS];
};

int main()
{
	struct Student student;
	
	int i;
	
	strcpy(student.subjectName[0],"	Mathematics");
	strcpy(student.subjectName[1],"Science");
	strcpy(student.subjectName[2],"English");
	strcpy(student.subjectName[3],"Computer");
	strcpy(student.subjectName[4],"General Knowledge");
	
	
	printf("===========================================\n");
	printf("     PERSONALIZED LEARNING AGENT\n");
	printf("============================================\n");
	
	printf("\nEnter student name:");
	scanf(" %[^\n]",student.name);
	
	
	printf("Enter age:");
	scanf("%d",&student.age);
	
	printf("Enter class/course:");
	scanf(" %[^\n]",student.course);
	
	printf("\nHow many hours can you study per day?");
	scanf("%d",&student.studyHours);
	
	printf("Confidence level (1-5):");
	scanf("%d",&student.confidence);
	
	
	printf("Interest level (1-5):");
	scanf("%d",&student.intrest);
	
	printf("\n==========ENTER SUBJECT SCORES==========\n");
	
	for(i=0;i<SUBJECTS;i++)
	{
		printf("%s score (0-100):",student.subjectName[i]);
		scanf("%d",&student.score[i]);
	}
	printf("\n==========PERFORMANCE==========\n");
	
	for(i=0;i < SUBJECTS;i++)
	{
		printf("%-20s : %d%%\n",student.subjectName[i],student.score[i]);
	}
	printf("\nWelcome to the Personalized Learning Recommendation Agent!\n");
	
	
	return 0;
}
