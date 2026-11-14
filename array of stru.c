#include<stdio.h>
#include<string.h>
struct Student {
	char name[50];
	int roll_no;
	float marks;
};
	int main() {
		struct Student s[3];
		int i;
		strcpy(s[0].name, "Dolly");
		s[0].roll_no = 2632561;
		s[0].marks = 98.8;
		strcpy(s[1].name, "Amit");
		s[1].roll_no = 2632456;
		s[1].marks = 89.7;
		strcpy(s[2].name, "Hari");
		s[2].roll_no = 2632671;
		s[2].marks = 99.6;
		printf("hamari puri class ki list \n\n");
		for(i=0; i<3; i++) {
			printf("Student %d Details:\n", i+1);
			printf("Name: %s\n", s[i].name);
			printf("Roll_no: %d\n", s[i].roll_no);
			printf("Marks: %.2f\n", s[i].marks);
			printf("-----\n");
		}
		return 0;
	}
