// A group work project using C program for the implementation of
// menu driven program for student record management system

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Variable to keep track of
// number of students
int i = 0;


// Trying if using file can work
FILE *fp;

// Structure to store the student
struct sinfo {
	char fname[50];
	char lname[50];
	int admissionnumber;
	char course[50];
} st[55];

// Function to add the student
void add_student()
{

	printf("Add the Students Details\n");
	printf("-------------------------\n");
	printf("Enter the first "
		"name of student\n");
	scanf("%s", st[i].fname);
	printf("Enter the last name"
		" of student\n");
	scanf("%s", st[i].lname);
	printf("Enter the Admission Number\n");
	scanf("%d", &st[i].admissionnumber);

	printf("Enter the course name\n");
	scanf("%s", st[i].course);
}

// Function to find the student
// by the Admission number
void find_rl()
{
	int x;
	printf("Enter the Admission Number"
		" of the student\n");
	scanf("%d", &x);
	for (int j = 1; j <= i; j++) {
		if (x == st[i].admissionnumber) {
			printf(
				"The Students Details are\n");
			printf(
				"The First name is %s\n",
				st[i].fname);
			printf(
				"The Last name is %s\n",
				st[i].lname);
			printf(
				"The course name is %s\n",
				st[i].course);
		}
		break;
	}
}

// Function to find the student
// by the first name
void find_fn()
{
	char a[50];
	printf("Enter the First Name"
		" of the student\n");
	scanf("%s", a);
	int c = 0;

	for (int j = 1; j <= i; j++) {
		if (!strcmp(st[j].fname, a)) {

			printf(
				"The Students Details are\n");
			printf(
				"The First name is %s\n",
				st[i].fname);
			printf(
				"The Last name is %s\n",
				st[i].lname);
			printf(
				"The Admission Number is %d\n ",
				st[i].admissionnumber);
			
			printf(
				"The course %s\n",
				st[i].course);
		}
		else
			printf(
				"The First Name not Found\n");
	}
}

// Function to find
// the students enrolled
// in a particular course
void find_c()
{
	char id[50];
	printf("Enter the course \n");
	scanf("%s", id);
	int c = 0;

	for (int j = 1; j <= i; j++) {
			if (!strcmp(st[j].course, id)) {

				printf(
					"The Students Details are\n");
				printf(
					"The First name is %s\n",
					st[i].fname);
				printf(
					"The Last name is %s\n",
					st[i].lname);
				printf(
					"The Admission Number is %d\n ",
					st[i].admissionnumber);
				

				c = 1;

				break;
			}
			else
				printf(
					"The First Name not Found\n");
	}
}

// Function to print the total
// number of students
void tot_s()
{
	printf("The total number of"
		" Student is %d\n",
		i);
	printf("\n you can have a "
		"max of 55 students\n");
	printf("you can have %d "
		"more students\n",
		55 - i);
}

// Function to delete a student
// by the Admission number
void del_s()
{
	int a;
	printf("Enter the Admission Number"
		" which you want "
		"to delete\n");
	scanf("%d", &a);
	for (int j = 1; j <= i; j++) {
		if (a == st[j].admissionnumber) {
			for (int k = j; k < 49; k++)
				st[k] = st[k + 1];
			i--;
		}
	}
	printf("Admission Number %d"
		" is removed Successfully\n", a);
}

// Function to update a students data
void up_s()
{

	printf("Enter the Admission number"
		" to update the entry : ");
	long int x;
	scanf("%ld", &x);
	for (int j = 0; j < i; j++) {
		if (st[j].admissionnumber == x) {
			printf("1. first name\n"
				"2. last name\n"
				"3. Admission no.\n"
				"4. courses\n");
			int z;
			scanf("%d", &z);
			switch (z) {
			case 1:
				printf("Enter the new "
					"first name : \n");
				scanf("%s", st[j].fname);
				break;
			case 2:
				printf("Enter the new "
					"last name : \n");
				scanf("%s", st[j].lname);
				break;
			case 3:
				printf("Enter the new "
					"Admission number : \n");
				scanf("%d", &st[j].admissionnumber);
				break;
			case 4:
				printf("Enter the new course \n");
				scanf(
					"%s", st[j].course);
				break;
			}
			printf("UPDATED SUCCESSFULLY.\n");
		}
	}
}

// A function to display all available students

void display(){
	printf("\t----------------------------------"
	"-------------------------------------------"
	"--------------------------------------------\n");

	printf("\t\t\t\t\t\t\tDeluxe University\n");

	printf("\t----------------------------------"
	"-------------------------------------------"
	"--------------------------------------------\n\n\n\n");
	

	printf("\t\t\t\t---------------------------"
		"------------------------------"
		"-------------------\n\n");
	printf("\t\t\t\tADMNO\t\tFIRST NAME\t\tLAST NAME\t\tCOURSE\t\t\n");

	printf("\t\t\t\t---------------------------"
		"------------------------------"
		"-------------------\n");

	printf("\n\t\t\t\t%d\t\t%s\t\t\t%s\t\t\t%s\t\t",st[i].admissionnumber,st[i].fname,st[i].lname,st[i].course);
	


	// while (fread(&st[i], sizeof(st),1, fp) == 1)
	// 	printf("\n%s\t\t\t\t\t\t",
	// 		st[i].fname, st[i].lname, st[i].course, st[i].admissionnumber);

	printf("\n\n\n\t");
	
	

	printf("\t\t\t\t\tThe total number of data retrieved is %d\n",i);
	
}

// Driver code
void main()

{
	int choice, count;
	while (i <= 1) {
		printf("The Task that you "
			"want to perform\n");
		printf("1. Add Student Details\n");
		printf("2. Find the Student "
			"Details by Admission Number\n");
		printf("3. Find the Student "
			"Details by First Name\n");
		printf("4. Find the Student "
			"Details by Course Name\n");
		printf("5. Find the Total number"
			" of Students\n");
		printf("6. Delete the Students Details"
			" by Admission Number\n");
		printf("7. Update the Students Details"
			" by Admission Number\n");
		printf("8. View All Available Student\n");
		printf("9. To Exit\n");
		printf("Enter your choice to "
			"find the task\n\n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			add_student();
			break;
		case 2:
			find_rl();
			break;
		case 3:
			find_fn();
			break;
		case 4:
			find_c();
			break;
		case 5:
			tot_s();
			break;
		case 6:
			del_s();
			break;
		case 7:
			up_s();
			break;
		case 8:
			display();
			break;
		case 9:
			exit(0);
			break;
		}
	}
}