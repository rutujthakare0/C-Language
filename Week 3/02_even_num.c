//program to print even numbers from 1 to N
#include <stdio.h>
int main(){
	int i,a;
	printf("Enter N\n");
	scanf("%d",&a);
	for (i=0;i<=a;i+=2){
		printf("%d\n",i);
	}
	return 0;
}
