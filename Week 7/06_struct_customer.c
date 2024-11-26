#include<stdio.h>
#include <string.h>
struct customer{
	int acc_no;
	char name[50];
	int bal;
}bank[5];
int transaction(int acc_no, int req_type, int amount, struct customer bank[5]);
int main(){
	int n,s,r,i;
	char c[50];
	for(i=0;i<5;i++){
		printf("Enter account %d number\n",i+1);
		scanf("%d",&bank[i].acc_no);
		printf("Enter account %d name\n",i+1);
		scanf(" %[^\n]s",c);
		strcpy(bank[i].name,c);
		printf("Enter account %d balance\n",i+1);
		scanf("%d",&bank[i].bal);
		printf("\n");
	}
	printf("Enter acc no\n");
	scanf("%d",&n);
	printf("Enter Transaction type\n");
	scanf("%d",&s);
	printf("Enter amount\n");
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
		printf("Transaction failed\n");
		return 0;
	}else if(req_type==1&&bank[k].bal>amount){
		printf("Valid Transaction\n");
		bank[k].bal-=amount;
		printf(" bank bal is %d",bank[k].bal);
	}else if(req_type==0){
		printf("Valid Transaction\n");
		bank[k].bal+=amount;
		printf(" bank bal is %d",bank[k].bal);
	}
}
