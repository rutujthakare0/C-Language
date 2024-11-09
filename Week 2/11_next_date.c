// next date
#include <stdio.h>
int main(){
	int d,m,y;
	printf("Enter date in dd/mm/yyyy \n");
	scanf("%d%d%d",&d,&m,&y);
	if(d<=0 || d>=32 || m<= 0 || m>=13 || y<= 0){
		printf("Invalid date");
	}else if(y%4==0 && y%100!=0 || y%400==0){   //leap yr
		if(m==2 && d==29){
			printf("01 03 %d",y);
		}
		else if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 ) && d==31 )
		{
			
		 	printf("01 %d %d",++m,y);		
		}
		else if((m==2 || m==4 || m==6 || m==9 || m==11) && d==30)
		{
			printf("01 %d %d",++m,y);	
		}
		else if(m==2 && d>=30){
			printf("invalid date");
		}
		else if(d==31 && m==12)
		{
		printf("01 01 %d", ++y);
		}
		else
		{
			printf("%d %d %d",++d,m,y);
		}
	}
	else
	{
		if(m==2 && d==28){             //non leap yr
			printf("01 03 %d",y);
		}
		else if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 ) && d==31 )
		{
			
		 	printf("01 %d %d",++m,y);		
		}
		else if((m==2 || m==4 || m==6 || m==9 || m==11)&&d==30)
		{
			printf("01 %d %d",++m,y);	
		}
		else if(m==2 && d>=29){
			printf("invalid date");
		}
		else if(d==31 && m==12)
		{
		printf("01 01 %d", ++y);
		}
		else
		{
			printf("%d %d %d",++d,m,y);
		}
	}
		return 0;
	}
