// leap year
#include <stdio.h>
int main(){
	int a;
	printf("Enter year \n");
	scanf("%d",&a);	
	if(a%4==0 && a%100!=0 || a%400==0){
		printf("Given year is leap year");
	}
	else{
		printf("Given year is not a leap year");
	}
	return 0;
}
