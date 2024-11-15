//program to convert binary number to decimal number.
#include <stdio.h>
#include <math.h>
int main(){
	int i,n=0,m=0;
	printf("Enter number\n");
	scanf("%d",&i);
	while(i!=0){
        n=n+(i%10)*pow(2,m++);
		i/=10;
    }
	printf("%d",n);
	return 0;
}