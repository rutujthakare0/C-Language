// salary with da and hra
#include <stdio.h>
int main(){
	float a;
	printf("Enter basic salary \n");
	scanf("%f",&a);
	printf("salary = %f",(a + a/10 + a/20));
	return 0;
}
