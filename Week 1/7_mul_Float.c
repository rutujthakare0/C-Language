//program to multiply 2 floating numbers and printing output in int and float
#include <stdio.h>
int main(){
	float a,b;
	printf("Enter 2 numbers");
	scanf("%f%f",&a,&b);
	printf("Product of both numbers in int representation is %d",(int)(a*b));
	printf("\nProduct of both numbers in float representation is %f",a*b);
	return 0;
}
