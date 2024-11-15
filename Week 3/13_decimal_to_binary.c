//program to convert decimal number to binary number.
#include <stdio.h>
int main(){
	int i,n=0,m=1;
	printf("Enter number\n");
	scanf("%d",&i);
	while(i!=0){
        n=n+(i%2)*m;
        m*=10;
        i/=2;
    }
	printf("%d",n);
	return 0;
}