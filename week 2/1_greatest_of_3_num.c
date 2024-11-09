// greatest of 3 numbers
#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter 3 numbers \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c){
		printf("%d is greatest of all numbers",a);
	}
	else if(b>a && b>c){
		printf("%d is greatest of all numbers",b);
	}
	else if(c>a && c>b){
		printf("%d is greatest of all numbers",c);
	}
	else
	{
		printf("Equal Numbers");
	}
	return 0;
}
