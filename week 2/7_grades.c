// percent and grade
#include <stdio.h>
int main(){
	int a,b,c,d,e;
	float p;
	printf("Enter Phy, Chem, Bio, Maths, Computer marks \n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	p = (a+b+c+d+e)/5;
	printf("%f \n",p);
	if(p>=90){
		printf("Grade A.");
	}
	else if(p>=80){
		printf("Grade B.");
	}
	else if(p>=70){
		printf("Grade C.");
	}
	else if(p>=60){
		printf("Grade D.");
	}
	else if(p>=40){
		printf("Grade E.");
	}
	else{
		printf("Grade F.");
	}
	return 0;
}
