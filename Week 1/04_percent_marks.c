//program to find Percentage of student.
#include <stdio.h>
int main(){
	int a,b,c,d,e;
	printf("Enter Marks in 5 Subjects");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	printf("Student Percentage = %f %%",((a+b+c+d+e)/5));
	return 0;
}
