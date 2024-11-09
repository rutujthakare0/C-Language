// number of days in month 
#include <stdio.h>
int main(){
	int y,m;
	printf("Enter year \n");
	scanf("%d",&y);
	printf("Enter month \n");
	scanf("%d",&m);
	if(y%4==0 && y%100!=0 || y%400==0){
		if(m==2){
			printf("29");
		}
		else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
		{
		 	printf("31");		
		}
		else if(m==2 || m==4 || m==6 || m==9 || m==11)
		{
			printf("30");
		}
	}
	else
	{
		if(m==2){
			printf("28");
		}
		else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
		{
		 	printf("31");		
		}
		else if(m==2 || m==4 || m==6 || m==9 || m==11)
		{
			printf("30");
		}
	}
		return 0;
	}
