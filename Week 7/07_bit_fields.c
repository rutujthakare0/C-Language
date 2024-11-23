#include<stdio.h>
struct bday{
	unsigned d:5;
	unsigned m:4;
	unsigned y:15;
}r;
int main(){
	int day,month,year;
	printf("Enter dd/mm/yyyy\n");
	scanf("%d%d%d",&day,&month,&year);
	r.d=day;
	r.m=month;
	r.y=year;
	printf("%u/",r.d);
	printf("%u/",r.m);
	printf("%u",r.y);
	return 0;
}
