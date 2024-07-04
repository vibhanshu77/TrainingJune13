#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma pack(1)
#define max 30

typedef struct student{
	int rollno;
	char name[max];
	int marks;
}stu;

int main()
{
	int choice = 1;
	int inp  = 1;
	int n = 1;
	stu *ptr = (stu *)malloc(sizeof(stu));
	//printf("%d",n);
	while(choice == inp)
	{	
		ptr = (stu *)realloc(ptr, (n) * sizeof(stu));
		
		printf("Student %d : ",n);
		scanf("%d",&(*(ptr+n-1)).rollno);
		getchar();

                scanf("%s",(*(ptr+n-1)).name);
		getchar();	

                scanf("%d",&(*(ptr+n-1)).marks);
		getchar();

		n++;
		printf("\nChoice : ");
		scanf("%d", &choice);
		getchar();
	}

	for(int i = 0 ; i<n-1 ; i++)
	{
		printf("Roll No %d : %d\t",i+1,(*(ptr+i)).rollno);
		printf("Name %d : %s\t",i+1,(*(ptr+i)).name);
		printf("Marks %d : %d\n\n",i+1,(*(ptr+i)).marks);
	}

	printf("%ld", sizeof(stu));

	free(ptr);

	//printf("%ld", sizeof(ptr));

	return 0;
}

