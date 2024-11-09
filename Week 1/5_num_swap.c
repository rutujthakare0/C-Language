//program to swap 2 numbers
#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter a,b");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("a and b after swapping are a = %d and b = %d",a,b);
	return 0;
}
