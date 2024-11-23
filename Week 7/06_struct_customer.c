#include<stdio.h>
#include <string.h>
struct customer{
	int acc_no;
	char name[50];
	int bal;
}bank[5];
int transaction(int acc_no, int req_type, int amount, struct customer bank[5]);
int main(){
	int n,s,r;
	bank[1].acc_no=130;
	strcpy(bank[0].name,"Rutuj1");
	bank[1].bal=10000;
	bank[2].acc_no=131;
	strcpy(bank[1].name,"Rutuj2");
	bank[2].bal=1000;
	bank[3].acc_no=132;
	strcpy(bank[2].name,"Rutuj3");
	bank[3].bal=100;
	bank[4].acc_no=133;
	strcpy(bank[3].name,"Rutuj4");
	bank[4].bal=10;
	bank[5].acc_no=134;
	strcpy(bank[4].name,"Rutuj5");
	bank[5].bal=1;
	printf("Enter acc no");
	scanf("%d",&n);
	printf("Enter Transaction type");
	scanf("%d",&s);
	printf("Enter amount");
	scanf("%d",&r);
	transaction(n,s,r,bank);
	return 0;
}
int transaction(int acc_no, int req_type, int amount, struct customer bank[5]){
	int i,k;
	for(i=0;i<5;i++)
	if(acc_no==bank[i].acc_no)
	k=i;
	if( req_type==1&&bank[k].bal<amount){
		printf("Transaction failed");
		return 0;
	}else if(req_type==1&&bank[k].bal>amount){
		printf("Valid Transaction");
		bank[k].bal-=amount;
		printf("bank bal is%d",bank[k].bal);
	}else if(req_type==0){
		printf("Valid Transaction");
		bank[k].bal+=amount;
		printf("bank bal is %d",bank[k].bal);
	}
}
