// electricity bill
#include <stdio.h>
int main(){
	int a;
	printf("Enter number of units \n");
	scanf("%d",&a);	
	printf("Electricity bill = %d",((5*a)+100));  //charge per unit = 5 rupees and surcharge 100
	return 0;
	}
