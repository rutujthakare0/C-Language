//program to swap 2 numbers without 3rd variable
#include <stdio.h>
int main(){
	int a,b;
	printf("Enter a,b");
	scanf("%d%d",&a,&b);
	a = a+b;
	b = a-b;
	a=a-b;
	printf("a and b after swapping are a = %d and b = %d",a,b);
	return 0;
}
